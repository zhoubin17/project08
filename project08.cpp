/*
练习3.23

要求：编写一段程序
    创建一个含有10个整数的vector对象，然后使用迭代器将所有元素的值都变成原来的两倍。
    输出vector对象的内容，检验程序是否正确
完成时间：2018.01.02
*/

#include <iostream>
#include <vector>
//#include <ctime>
//#include <cstdlib>

using namespace std;

int main()
{
    vector<int> vInt;   //创建vector的对象vInt
    srand((unsigned)time(NULL));    //生成随机数种子
    for (int i = 0; i < 10; i++)
    {
        //每次循环生成一个100以内的数
        vInt.push_back(rand() % 100);
    }
    cout << "随机生成的10个数字为：" << endl;
    //使用范围for语句遍历这10个随机数
    for (auto it = vInt.cbegin(); it != vInt.cend(); it++)
    {
            cout << *it << " ";
    }
    cout << endl;

    //作翻倍处理
    cout << "翻倍后的10个数字是：" << " ";
    for (auto it = vInt.begin(); it != vInt.end(); it++)
    {
        *it *= 2;
        cout << *it << " ";

    }
    cout << endl;
    return 0;
}
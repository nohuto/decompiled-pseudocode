/*
 * XREFs of sub_18006DBCC @ 0x18006DBCC
 * Callers:
 *     sub_18006CA0C @ 0x18006CA0C (sub_18006CA0C.c)
 *     RtlpQueryDefaultUILanguage @ 0x18006D720 (RtlpQueryDefaultUILanguage.c)
 *     sub_18006D864 @ 0x18006D864 (sub_18006D864.c)
 * Callees:
 *     sub_180047104 @ 0x180047104 (sub_180047104.c)
 *     sub_18006DC8C @ 0x18006DC8C (sub_18006DC8C.c)
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 */

__int64 __fastcall sub_18006DBCC(__int64 a1, __int64 a2, __int64 *a3, int a4, char a5)
{
  int v6; // edi
  int v8; // edx
  __int64 v10; // rax
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  v6 = a2;
  if ( a3 && a1 && (unsigned int)a2 <= 1 && (unsigned int)(a4 - 2) <= 1 )
  {
    if ( a5 && a4 == 3 )
    {
      v8 = sub_18006DC8C(a1, a2);
      if ( v8 >= 0 )
      {
        if ( v6 == 1 )
        {
          *a3 = *(_QWORD *)(a1 + 64);
        }
        else if ( !v6 )
        {
          *a3 = *(_QWORD *)(a1 + 56);
        }
      }
      return (unsigned int)v8;
    }
    v8 = sub_18006DDE4(a1, a2, a2, a4, (__int64)&v11, (__int64)a3);
    if ( !*a3 )
    {
      v10 = sub_180047104(1, v6 != 1, a1);
      *a3 = v10;
      if ( !v10 )
        return (unsigned int)-1073741801;
      v8 = 0;
    }
    if ( v8 && v8 != -1073741801 && v11 )
      return 0;
    return (unsigned int)v8;
  }
  return 3221225485LL;
}

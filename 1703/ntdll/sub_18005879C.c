/*
 * XREFs of sub_18005879C @ 0x18005879C
 * Callers:
 *     sub_180058688 @ 0x180058688 (sub_180058688.c)
 * Callees:
 *     sub_180007B14 @ 0x180007B14 (sub_180007B14.c)
 *     sub_180058844 @ 0x180058844 (sub_180058844.c)
 *     sub_180058A20 @ 0x180058A20 (sub_180058A20.c)
 */

__int64 __fastcall sub_18005879C(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  int v10; // eax
  __int64 i; // rsi

  v7 = a3;
  result = sub_180058844((PRTL_SRWLOCK)a1);
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 72) & 1;
    if ( !a6 && !v10 || a6 == 1 && v10 || (unsigned int)v7 >= a4 )
    {
      return 0LL;
    }
    else
    {
      for ( i = 8 * v7;
            *(_QWORD *)(a1 + 8)
         && (unsigned __int8)sub_180058A20(a1, (unsigned int)v7)
         && *(_QWORD *)(i + *(_QWORD *)(a1 + 8))
         || sub_180007B14(a1, v7);
            i += 8LL )
      {
        LODWORD(v7) = v7 + 1;
        if ( (unsigned int)v7 >= a4 )
          return 0LL;
      }
      return 3221225626LL;
    }
  }
  return result;
}

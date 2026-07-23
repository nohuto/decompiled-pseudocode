/*
 * XREFs of sub_18006DC8C @ 0x18006DC8C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006D210 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18006D510 (RtlGetSystemPreferredUILanguages.c)
 *     sub_18006DBCC @ 0x18006DBCC (sub_18006DBCC.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180047104 @ 0x180047104 (sub_180047104.c)
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 *     sub_18006E3A0 @ 0x18006E3A0 (sub_18006E3A0.c)
 */

__int64 __fastcall sub_18006DC8C(__int64 a1, unsigned int a2)
{
  int v4; // edi
  int v6; // edx
  __int64 v7; // rcx
  bool v8; // sf
  char v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0LL;
  v9 = 0;
  if ( !a1 || a2 > 1 )
    return 3221225485LL;
  if ( a2 == 1 && *(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 56) && !a2 )
    return 0LL;
  sub_18006E3A0();
  RtlEnterCriticalSection(&stru_180159BA0);
  if ( (!*(_QWORD *)(a1 + 64) || a2 != 1) && (!*(_QWORD *)(a1 + 56) || a2) )
  {
    v4 = sub_18006DDE4(a1, v6, a2, 3, (__int64)&v9, (__int64)&v10);
    v7 = v10;
    if ( !v10 )
    {
      v7 = sub_180047104(1, a2 != 1, a1);
      v10 = v7;
      if ( !v7 )
        v4 = -1073741801;
    }
    v8 = v4 < 0;
    if ( v4 )
    {
      if ( v4 != -1073741801 && v9 )
        v4 = 0;
      v8 = v4 < 0;
    }
    if ( !v8 )
    {
      *(_DWORD *)(v7 + 40) |= 0x10u;
      *(_DWORD *)(v7 + 40) |= 0x40u;
      if ( a2 == 1 )
      {
        *(_QWORD *)(a1 + 64) = v7;
        *(_DWORD *)a1 |= 0x20u;
      }
      else if ( !a2 )
      {
        *(_QWORD *)(a1 + 56) = v7;
        *(_DWORD *)a1 |= 0x10u;
      }
    }
  }
  RtlLeaveCriticalSection(&stru_180159BA0);
  return (unsigned int)v4;
}

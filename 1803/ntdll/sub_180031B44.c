/*
 * XREFs of sub_180031B44 @ 0x180031B44
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     sub_18006EB70 @ 0x18006EB70 (sub_18006EB70.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006EE10 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800759E0 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180031FD4 @ 0x180031FD4 (sub_180031FD4.c)
 *     sub_180032BDC @ 0x180032BDC (sub_180032BDC.c)
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 */

__int64 __fastcall sub_180031B44(__int64 a1, unsigned int a2)
{
  int v4; // edi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // sf
  char v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0LL;
  v10 = 0;
  if ( !a1 || a2 > 1 )
    return 3221225485LL;
  if ( a2 == 1 && *(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 56) && !a2 )
    return 0LL;
  sub_180031FD4();
  RtlEnterCriticalSection(&stru_18015ABE0);
  if ( (!*(_QWORD *)(a1 + 64) || a2 != 1) && (!*(_QWORD *)(a1 + 56) || a2) )
  {
    v4 = sub_18006F31C(a1, v6, a2, 3, (__int64)&v10, (__int64)&v11);
    v8 = v11;
    if ( !v11 )
    {
      LOBYTE(v7) = a2 != 1;
      v8 = sub_180032BDC(1LL, v7, a1);
      v11 = v8;
      if ( !v8 )
        v4 = -1073741801;
    }
    v9 = v4 < 0;
    if ( v4 )
    {
      if ( v4 != -1073741801 && v10 )
        v4 = 0;
      v9 = v4 < 0;
    }
    if ( !v9 )
    {
      *(_DWORD *)(v8 + 40) |= 0x10u;
      *(_DWORD *)(v8 + 40) |= 0x40u;
      if ( a2 == 1 )
      {
        *(_QWORD *)(a1 + 64) = v8;
        *(_DWORD *)a1 |= 0x20u;
      }
      else if ( !a2 )
      {
        *(_QWORD *)(a1 + 56) = v8;
        *(_DWORD *)a1 |= 0x10u;
      }
    }
  }
  RtlLeaveCriticalSection(&stru_18015ABE0);
  return (unsigned int)v4;
}

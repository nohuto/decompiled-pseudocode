/*
 * XREFs of HvlGetCoverageInfo @ 0x1401E9824
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x14075F55C (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall HvlGetCoverageInfo(_OWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  char v7; // bp
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  PHYSICAL_ADDRESS v11[3]; // [rsp+20h] [rbp-918h] BYREF
  PHYSICAL_ADDRESS v12[3]; // [rsp+40h] [rbp-8F8h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-8D8h] BYREF
  _BYTE v14[2064]; // [rsp+F0h] [rbp-848h] BYREF

  v7 = 0;
  v8 = (_QWORD *)HvlpAcquireHypercallPage(v11, 1, (__int64)v14, 1032LL);
  v9 = HvlpAcquireHypercallPage(v12, 2, (__int64)v13, 72LL);
  *v8 = 0LL;
  if ( !(unsigned __int16)HvcallCodeVa() )
  {
    v7 = 1;
    *a1 = *(_OWORD *)(v9 + 8);
    a1[1] = *(_OWORD *)(v9 + 24);
    a1[2] = *(_OWORD *)(v9 + 40);
    a1[3] = *(_OWORD *)(v9 + 56);
    *a4 = *(_DWORD *)(v9 + 4);
    *a3 = *(_DWORD *)v9;
  }
  HvlpReleaseHypercallPage((__int64)v11);
  HvlpReleaseHypercallPage((__int64)v12);
  return v7;
}

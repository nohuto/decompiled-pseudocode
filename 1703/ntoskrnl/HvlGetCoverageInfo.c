/*
 * XREFs of HvlGetCoverageInfo @ 0x1401E4B54
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x14071F6EC (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlGetCoverageInfo(_OWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  char v7; // bp
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  _BYTE v11[24]; // [rsp+20h] [rbp-918h] BYREF
  _BYTE v12[24]; // [rsp+40h] [rbp-8F8h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-8D8h] BYREF
  _BYTE v14[2064]; // [rsp+F0h] [rbp-848h] BYREF

  v7 = 0;
  v8 = (_QWORD *)HvlpAcquireHypercallPage(v11, 1LL, v14, 1032LL);
  v9 = HvlpAcquireHypercallPage(v12, 2LL, v13, 72LL);
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
  HvlpReleaseHypercallPage(v11);
  HvlpReleaseHypercallPage(v12);
  return v7;
}

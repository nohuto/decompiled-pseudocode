/*
 * XREFs of HvlpDetectHypervisorSchedulerType @ 0x14017B8E8
 * Callers:
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlpDetectHypervisorSchedulerType()
{
  _DWORD *v0; // rbx
  int *v1; // rdi
  _BYTE v3[24]; // [rsp+20h] [rbp-878h] BYREF
  _BYTE v4[24]; // [rsp+40h] [rbp-858h] BYREF
  _BYTE v5[16]; // [rsp+60h] [rbp-838h] BYREF
  _BYTE v6[2064]; // [rsp+70h] [rbp-828h] BYREF

  v0 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1LL, v5, 8LL);
  v1 = (int *)HvlpAcquireHypercallPage(v3, 2LL, v6, 1032LL);
  *v0 = 15;
  if ( !(unsigned __int16)HvcallCodeVa() )
    HvlpSchedulerType = *v1;
  HvlpReleaseHypercallPage(v3);
  return HvlpReleaseHypercallPage(v4);
}

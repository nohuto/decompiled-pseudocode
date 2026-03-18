/*
 * XREFs of HvlpDetectHypervisorSchedulerType @ 0x1401F08E4
 * Callers:
 *     HvlPhase2Initialize @ 0x14015CA00 (HvlPhase2Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char HvlpDetectHypervisorSchedulerType()
{
  _DWORD *v0; // rbx
  int *v1; // rdi
  char result; // al
  PHYSICAL_ADDRESS v3[3]; // [rsp+20h] [rbp-878h] BYREF
  PHYSICAL_ADDRESS v4[3]; // [rsp+40h] [rbp-858h] BYREF
  _BYTE v5[16]; // [rsp+60h] [rbp-838h] BYREF
  _BYTE v6[2064]; // [rsp+70h] [rbp-828h] BYREF

  v0 = (_DWORD *)HvlpAcquireHypercallPage(v4, 1, (__int64)v5, 8LL);
  v1 = (int *)HvlpAcquireHypercallPage(v3, 2, (__int64)v6, 1032LL);
  *v0 = 15;
  if ( !(unsigned __int16)HvcallCodeVa() )
    HvlpSchedulerType = *v1;
  HvlpReleaseHypercallPage((__int64)v3);
  result = HvlpReleaseHypercallPage((__int64)v4);
  if ( HvlpSchedulerType == 4 )
    HvlpRootSchedulerEnabled = 1;
  return result;
}

/*
 * XREFs of VfCheckPoolType @ 0x1407667E0
 * Callers:
 *     VfCheckNxPoolType @ 0x14024FFB0 (VfCheckNxPoolType.c)
 *     VerifierExAllocatePool @ 0x140764410 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1407644A0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1407645A0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTag @ 0x1407646A0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140764710 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExInitializeLookasideListEx @ 0x14077C990 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14077CAE0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExAllocateCacheAwareRundownProtection @ 0x14077FCD0 (VerifierExAllocateCacheAwareRundownProtection.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1407668D8 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPoolType(int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  const char *v6; // rdx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 1) == 0 && (a1 & 0x200) == 0 )
  {
    v4 = a3;
    v6 = "The caller 0x%p specified an executable pool type 0x%x.";
    if ( a3 )
      v6 = "The caller 0x%p specified an executable pool type 0x%x (tag 0x%x).";
    ViCiPreprocessOptions(byte_140341340, v6, 0x2000LL, a2, a1, a3);
    VfReportIssueWithOptions(0xC4u, 0x2000, a2, a1, v4, byte_140341340);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 248LL);
    _InterlockedIncrement(&dword_14034F6F0);
  }
}

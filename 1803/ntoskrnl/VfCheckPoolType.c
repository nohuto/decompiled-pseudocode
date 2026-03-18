/*
 * XREFs of VfCheckPoolType @ 0x1408153AC
 * Callers:
 *     VfCheckNxPoolType @ 0x1402A98E0 (VfCheckNxPoolType.c)
 *     VerifierExAllocatePool @ 0x1408130C0 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePoolEx @ 0x140813180 (VerifierExAllocatePoolEx.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140813230 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140813360 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTag @ 0x140813490 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140813530 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExInitializeLookasideListEx @ 0x14082BD30 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14082BE80 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExAllocateCacheAwareRundownProtection @ 0x14082F200 (VerifierExAllocateCacheAwareRundownProtection.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1408154A0 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPoolType(int a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // rdi
  const char *v6; // rdx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 1) == 0 && (a1 & 0x200) == 0 )
  {
    v4 = a3;
    v5 = a1;
    v6 = "The caller 0x%p specified an executable pool type 0x%x.";
    if ( a3 )
      v6 = "The caller 0x%p specified an executable pool type 0x%x (tag 0x%x).";
    ViCiPreprocessOptions(byte_14039D048, v6, 0x2000LL, a2, a1, a3);
    VfReportIssueWithOptions(0xC4u, 0x2000uLL, a2, v5, v4, byte_14039D048);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 264LL);
    _InterlockedIncrement(&dword_1403AD1F0);
  }
}

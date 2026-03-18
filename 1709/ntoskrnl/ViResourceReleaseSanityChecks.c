/*
 * XREFs of ViResourceReleaseSanityChecks @ 0x1407BFCCC
 * Callers:
 *     VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot @ 0x1407BF9F0 (VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot.c)
 *     VerifierExReleaseResourceAndLeavePriorityRegion @ 0x1407BFA20 (VerifierExReleaseResourceAndLeavePriorityRegion.c)
 *     VerifierExReleaseResourceForThreadLiteNoReboot @ 0x1407BFA50 (VerifierExReleaseResourceForThreadLiteNoReboot.c)
 *     VerifierExReleaseResourceLiteNoReboot @ 0x1407BFA90 (VerifierExReleaseResourceLiteNoReboot.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

struct _KTHREAD *__fastcall ViResourceReleaseSanityChecks(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r8
  struct _KTHREAD *result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
  {
    result = KeGetCurrentThread();
    if ( (result->MiscFlags & 0x400) == 0 )
    {
      result = KeGetCurrentThread();
      if ( !result->WaitBlock[3].SpareLong && CurrentIrql != 2 && (MmVerifierData & 0x800) != 0 )
        return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(
                                    0xC4u,
                                    0x38uLL,
                                    CurrentIrql,
                                    KeGetCurrentThread()->CombinedApcDisable,
                                    a1);
    }
  }
  return result;
}

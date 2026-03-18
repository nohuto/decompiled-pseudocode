/*
 * XREFs of ViResourceReleaseSanityChecks @ 0x14077DD24
 * Callers:
 *     VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot @ 0x14077DA70 (VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot.c)
 *     VerifierExReleaseResourceAndLeavePriorityRegion @ 0x14077DAA0 (VerifierExReleaseResourceAndLeavePriorityRegion.c)
 *     VerifierExReleaseResourceForThreadLiteNoReboot @ 0x14077DAD0 (VerifierExReleaseResourceForThreadLiteNoReboot.c)
 *     VerifierExReleaseResourceLiteNoReboot @ 0x14077DB10 (VerifierExReleaseResourceLiteNoReboot.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
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
      if ( !result->WaitBlock[3].SpareLong && CurrentIrql != 2 )
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

/*
 * XREFs of ViResourceAcquireSanityChecks @ 0x1407BFC04
 * Callers:
 *     VerifierExAcquireResourceExclusiveLite @ 0x1407BF1E0 (VerifierExAcquireResourceExclusiveLite.c)
 *     VerifierExAcquireResourceExclusiveLiteNoReboot @ 0x1407BF270 (VerifierExAcquireResourceExclusiveLiteNoReboot.c)
 *     VerifierExAcquireResourceSharedLite @ 0x1407BF2B0 (VerifierExAcquireResourceSharedLite.c)
 *     VerifierExAcquireResourceSharedLiteNoReboot @ 0x1407BF340 (VerifierExAcquireResourceSharedLiteNoReboot.c)
 *     VerifierExAcquireSharedStarveExclusive @ 0x1407BF380 (VerifierExAcquireSharedStarveExclusive.c)
 *     VerifierExAcquireSharedStarveExclusiveNoReboot @ 0x1407BF410 (VerifierExAcquireSharedStarveExclusiveNoReboot.c)
 *     VerifierExAcquireSharedWaitForExclusive @ 0x1407BF450 (VerifierExAcquireSharedWaitForExclusive.c)
 *     VerifierExAcquireSharedWaitForExclusiveNoReboot @ 0x1407BF4E0 (VerifierExAcquireSharedWaitForExclusiveNoReboot.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

struct _KTHREAD *__fastcall ViResourceAcquireSanityChecks(__int64 a1, char a2, int a3)
{
  struct _KTHREAD *result; // rax
  unsigned __int8 CurrentIrql; // dl

  if ( (a1 & 7) != 0 && (MmVerifierData & 0x800) != 0 )
    result = (struct _KTHREAD *)VerifierBugCheckIfAppropriate(0xC4u, 0x3DuLL, 0LL, 0LL, a1);
  if ( !a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
    {
      result = KeGetCurrentThread();
      if ( (result->MiscFlags & 0x400) == 0 )
      {
        result = KeGetCurrentThread();
        if ( !result->WaitBlock[3].SpareLong && (CurrentIrql != 2 || a2) && (MmVerifierData & 0x800) != 0 )
          return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(
                                      0xC4u,
                                      0x37uLL,
                                      CurrentIrql,
                                      KeGetCurrentThread()->CombinedApcDisable,
                                      a1);
      }
    }
  }
  return result;
}

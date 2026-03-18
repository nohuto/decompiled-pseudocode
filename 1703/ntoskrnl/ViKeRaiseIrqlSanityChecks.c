/*
 * XREFs of ViKeRaiseIrqlSanityChecks @ 0x1407785D0
 * Callers:
 *     VerifierKeAcquireQueuedSpinLock @ 0x140770780 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140776C34 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140776E14 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140776ED0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x1407773B0 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140777B10 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140777B80 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140777C00 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x140777E70 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140777EF0 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140777F80 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1407782FC (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     MmVerifierTrimMemory @ 0x140763CB8 (MmVerifierTrimMemory.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1407781CC (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140778434 (ViKeIrqlLogCommon.c)
 */

char *__fastcall ViKeRaiseIrqlSanityChecks(unsigned __int8 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  char *v4; // rsi

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 )
  {
    if ( CurrentIrql > a1 && !a2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, CurrentIrql, a1, 0LL);
    if ( a1 > 0xFu )
      VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, CurrentIrql, a1, 0LL);
  }
  v4 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, a1);
  ViKeIrqlLogCommon((__int64)v4, 2u);
  if ( (MmVerifierData & 2) != 0 && KeAreInterruptsEnabled() && CurrentIrql < 2u && a1 >= 2u )
    MmVerifierTrimMemory();
  return v4;
}

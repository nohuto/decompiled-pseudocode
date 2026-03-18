/*
 * XREFs of ViKeRaiseIrqlSanityChecks @ 0x14082782C
 * Callers:
 *     VerifierKeAcquireQueuedSpinLock @ 0x14081F6B0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140825CDC (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140825EC4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140825F80 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x140826510 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140826CC0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140826D40 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140826DD0 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x140827090 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140827120 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x1408271B0 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x140827544 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     MmVerifierTrimMemory @ 0x1408129E4 (MmVerifierTrimMemory.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140827410 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x14082767C (ViKeIrqlLogCommon.c)
 */

char *__fastcall ViKeRaiseIrqlSanityChecks(unsigned __int8 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  char *v5; // rsi

  if ( (MmVerifierData & 0x400000) != 0 && (MmVerifierData & 2) == 0 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 )
  {
    if ( CurrentIrql > a1 && !a2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, CurrentIrql, a1, 0LL);
    if ( a1 > 0xFu )
      VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, CurrentIrql, a1, 0LL);
  }
  if ( (MmVerifierData & 0x400000) != 0 && (VfFlightOptions & 9) == 0 )
    return 0LL;
  v5 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, a1);
  ViKeIrqlLogCommon((__int64)v5, 2u);
  if ( (MmVerifierData & 2) != 0 && KeAreInterruptsEnabled() && CurrentIrql < 2u && a1 >= 2u )
    MmVerifierTrimMemory();
  return v5;
}

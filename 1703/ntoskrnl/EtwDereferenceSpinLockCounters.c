/*
 * XREFs of EtwDereferenceSpinLockCounters @ 0x14070F108
 * Callers:
 *     KiSynchCounterSetCallback @ 0x1406AC760 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1406AC870 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404350C0 (EtwpUpdateKernelGroupMasks.c)
 */

LONG EtwDereferenceSpinLockCounters()
{
  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( !--EtwpSpinLockCountersCount )
  {
    dword_140345004 &= ~0x200000u;
    EtwpUpdateKernelGroupMasks(0, 8u);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}

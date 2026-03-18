/*
 * XREFs of EtwDereferenceSpinLockCounters @ 0x14074AD54
 * Callers:
 *     KiSynchCounterSetCallback @ 0x1406D7A50 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1406D7B60 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140596CD8 (EtwpUpdateGlobalGroupMasks.c)
 */

LONG EtwDereferenceSpinLockCounters()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( !--EtwpSpinLockCountersCount )
  {
    v0 = EtwpHostSiloState;
    *(_DWORD *)(EtwpHostSiloState + 4468) &= ~0x200000u;
    EtwpUpdateGlobalGroupMasks(v0, 0, 8u);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}

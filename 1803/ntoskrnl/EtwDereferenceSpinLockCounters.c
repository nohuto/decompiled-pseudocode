/*
 * XREFs of EtwDereferenceSpinLockCounters @ 0x1407AD204
 * Callers:
 *     KiSynchCounterSetCallback @ 0x140741960 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140741A70 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14057B938 (EtwpUpdateGlobalGroupMasks.c)
 */

LONG EtwDereferenceSpinLockCounters()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( !--EtwpSpinLockCountersCount )
  {
    v0 = EtwpHostSiloState;
    *(_DWORD *)(EtwpHostSiloState + 4484) &= ~0x200000u;
    EtwpUpdateGlobalGroupMasks(v0, 0, 8u);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}

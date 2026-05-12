/*
 * XREFs of RaidAdapterReleaseStartIoLock @ 0x1C001D280
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00123E4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidInitializePerfOptsPassive @ 0x1C00197FC (RaidInitializePerfOptsPassive.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C001D1F0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterResetBus @ 0x1C002E0E4 (RaidAdapterResetBus.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00069A0 (RaidAdapterReleaseInterruptLock.c)
 */

void __fastcall RaidAdapterReleaseStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 688) )
    KeReleaseInStackQueuedSpinLock(a2);
  else
    RaidAdapterReleaseInterruptLock(a1, (KIRQL)a2->LockQueue.Next);
}

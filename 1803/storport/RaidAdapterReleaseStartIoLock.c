/*
 * XREFs of RaidAdapterReleaseStartIoLock @ 0x1C0007C70
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0007BE0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001274C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C00277B8 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x1C002AD18 (RaidInitializePerfOptsPassive.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006D1C (RaidAdapterReleaseInterruptLock.c)
 */

void __fastcall RaidAdapterReleaseStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 688) )
    KeReleaseInStackQueuedSpinLock(a2);
  else
    RaidAdapterReleaseInterruptLock(a1, (KIRQL)a2->LockQueue.Next);
}

/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x1C001D2AC
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00123E4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidInitializePerfOptsPassive @ 0x1C00197FC (RaidInitializePerfOptsPassive.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C001D1F0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterResetBus @ 0x1C002E0E4 (RaidAdapterResetBus.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A30 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 688) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 680), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}

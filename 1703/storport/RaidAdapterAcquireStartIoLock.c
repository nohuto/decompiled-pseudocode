/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x1C001E314
 * Callers:
 *     RaidInitializePerfOptsPassive @ 0x1C0010038 (RaidInitializePerfOptsPassive.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0012A74 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C002D15C (RaidAdapterResetBus.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C002F960 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C000648C (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 688) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 680), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}

/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x140204E50
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x140207BE0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140207C90 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140207D10 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140207DF0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x140207ED0 (KeRemoveDeviceQueue.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  }
  else
  {
    LockHandle->LockQueue.Next = 0LL;
    LockHandle->LockQueue.Lock = SpinLock;
    KxAcquireQueuedSpinLock((__int64)LockHandle, (volatile __int64 *)SpinLock);
  }
}

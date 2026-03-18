/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x140001390
 * Callers:
 *     KeInsertDeviceQueue @ 0x1400012E0 (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x140001340 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x1402459F0 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140245AA0 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140245B70 (KeRemoveByKeyDeviceQueueIfBusy.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
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
    KxAcquireQueuedSpinLock(LockHandle, SpinLock);
  }
}

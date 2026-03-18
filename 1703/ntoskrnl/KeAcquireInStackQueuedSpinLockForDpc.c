/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x14013FEB0
 * Callers:
 *     KeInsertDeviceQueue @ 0x14013FDB0 (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x14013FE30 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x1402017F0 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1402018A0 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140201980 (KeRemoveByKeyDeviceQueueIfBusy.c)
 * Callees:
 *     <none>
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

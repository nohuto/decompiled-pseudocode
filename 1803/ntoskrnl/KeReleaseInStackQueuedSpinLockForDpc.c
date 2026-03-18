/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x1400013E0
 * Callers:
 *     KeInsertDeviceQueue @ 0x1400012E0 (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x140001340 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x1402459F0 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140245AA0 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140245B70 (KeRemoveByKeyDeviceQueueIfBusy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockForDpc(PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
    __writecr8(LockHandle->OldIrql);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
  }
}

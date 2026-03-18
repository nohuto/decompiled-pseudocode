/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x14013FEF0
 * Callers:
 *     KeInsertDeviceQueue @ 0x14013FDB0 (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x14013FE30 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x1402017F0 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1402018A0 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140201980 (KeRemoveByKeyDeviceQueueIfBusy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
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

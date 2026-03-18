/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x140204EE0
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x140207BE0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140207C90 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140207D10 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140207DF0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x140207ED0 (KeRemoveDeviceQueue.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
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

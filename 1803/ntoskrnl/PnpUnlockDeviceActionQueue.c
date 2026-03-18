/*
 * XREFs of PnpUnlockDeviceActionQueue @ 0x1400C8910
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x1400C88F0 (IoControlPnpDeviceActionQueue.c)
 *     PopUpdateWakeSourceWorker @ 0x140278980 (PopUpdateWakeSourceWorker.c)
 *     IoFreePoDeviceNotifyList @ 0x14047632C (IoFreePoDeviceNotifyList.c)
 *     PopDisengageDirectedDrips @ 0x140761FD4 (PopDisengageDirectedDrips.c)
 *     PipInitializeCoreDriversByGroup @ 0x1408B5658 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 */

__int64 PnpUnlockDeviceActionQueue()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( (__int64 *)PnpEnumerationRequestList == &PnpEnumerationRequestList )
  {
    PnpEnumerationInProgress = 0;
    KeSetEvent(&PnpEnumerationLock, 0, 0);
  }
  else
  {
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  KxReleaseSpinLock(&PnpSpinLock);
  __writecr8(v0);
  return PpDevNodeUnlockTree(1LL);
}

/*
 * XREFs of PopFxAddRefDevice @ 0x1400FD858
 * Callers:
 *     PopFxActivateDevice @ 0x1400FC950 (PopFxActivateDevice.c)
 *     PopFxActivateComponentWorker @ 0x1400FD7C0 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400FE1D8 (PopFxIdleWorkerTail.c)
 *     PopFxQueueWorkOrder @ 0x140127734 (PopFxQueueWorkOrder.c)
 *     PopFxDeviceAccountingWatchdog @ 0x14023DC74 (PopFxDeviceAccountingWatchdog.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1406F7FD0 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400FD8A0 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 216), 0LL, &File, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}

/*
 * XREFs of PopFxAddRefDevice @ 0x14007826C
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400781D4 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140078414 (PopFxIdleWorkerTail.c)
 *     PopFxQueueWorkOrder @ 0x140079DC0 (PopFxQueueWorkOrder.c)
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x140274C18 (PopFxBuildDripsBlockingDeviceList.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x14075F5E0 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400782B0 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 216), 0LL, &File, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}

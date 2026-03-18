/*
 * XREFs of PopFxAddRefDevice @ 0x140069078
 * Callers:
 *     PopFxActivateDevice @ 0x14006816C (PopFxActivateDevice.c)
 *     PopFxQueueWorkOrder @ 0x14006882C (PopFxQueueWorkOrder.c)
 *     PopFxActivateComponentWorker @ 0x140068FE0 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140069A78 (PopFxIdleWorkerTail.c)
 *     PopFxDeviceAccountingWatchdog @ 0x14022AAA4 (PopFxDeviceAccountingWatchdog.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400692E0 (IoAcquireRemoveLockEx.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 */

NTSTATUS __fastcall PopFxAddRefDevice(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 216), 0LL, File, 1u, 0x20u);
  if ( result < 0 )
    PopFxBugCheck(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}

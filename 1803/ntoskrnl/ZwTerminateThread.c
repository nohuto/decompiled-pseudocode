/*
 * XREFs of ZwTerminateThread @ 0x1401A7F20
 * Callers:
 *     KiParkUmsThread @ 0x14024C690 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140288F50 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x140742F20 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}

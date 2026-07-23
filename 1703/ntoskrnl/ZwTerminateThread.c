/*
 * XREFs of ZwTerminateThread @ 0x14017E9A0
 * Callers:
 *     KiParkUmsThread @ 0x140207A00 (KiParkUmsThread.c)
 *     RtlAssert @ 0x14023DB30 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1406ADA00 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}

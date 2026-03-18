/*
 * XREFs of ZwTerminateThread @ 0x14017E9A0
 * Callers:
 *     KiParkUmsThread @ 0x140207A00 (KiParkUmsThread.c)
 *     RtlAssert @ 0x14023DB30 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1406ADA00 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&ExitStatus, v2);
}

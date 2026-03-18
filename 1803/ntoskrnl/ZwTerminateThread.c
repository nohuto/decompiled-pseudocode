/*
 * XREFs of ZwTerminateThread @ 0x1401A7F20
 * Callers:
 *     KiParkUmsThread @ 0x14024C690 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140288F50 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x140742F20 (KiSwapToUmsThread.c)
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

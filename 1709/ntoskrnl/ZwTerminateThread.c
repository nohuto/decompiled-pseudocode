/*
 * XREFs of ZwTerminateThread @ 0x14017E320
 * Callers:
 *     KiParkUmsThread @ 0x14020E3B0 (KiParkUmsThread.c)
 *     RtlAssert @ 0x1402538E0 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1406D8E40 (KiSwapToUmsThread.c)
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

/*
 * XREFs of ZwTerminateProcess @ 0x14017E4C0
 * Callers:
 *     KiDispatchException @ 0x140007C60 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x140207A00 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x1406ADA00 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ExitStatus, v2);
}

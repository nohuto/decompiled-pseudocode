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

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

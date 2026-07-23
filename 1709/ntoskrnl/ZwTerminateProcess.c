/*
 * XREFs of ZwTerminateProcess @ 0x14017DE40
 * Callers:
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x14020E3B0 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x1406D8E40 (KiSwapToUmsThread.c)
 *     PsCallEnclave @ 0x14071B2E0 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

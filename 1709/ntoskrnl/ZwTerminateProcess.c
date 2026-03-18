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

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ExitStatus, v2);
}

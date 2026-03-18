/*
 * XREFs of ZwTerminateProcess @ 0x1401A7A40
 * Callers:
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     KiParkUmsThread @ 0x14024C690 (KiParkUmsThread.c)
 *     KiSwapToUmsThread @ 0x140742F20 (KiSwapToUmsThread.c)
 *     PsCallEnclave @ 0x14077EDB0 (PsCallEnclave.c)
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

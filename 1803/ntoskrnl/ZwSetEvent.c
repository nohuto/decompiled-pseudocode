/*
 * XREFs of ZwSetEvent @ 0x1401A7680
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405786F0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PspShutdownCsrProcess @ 0x140779724 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, PreviousState, v2);
}

/*
 * XREFs of ZwSetEvent @ 0x14017DA80
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405964E0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PspShutdownCsrProcess @ 0x140715594 (PspShutdownCsrProcess.c)
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

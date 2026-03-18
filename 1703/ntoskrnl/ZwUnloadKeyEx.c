/*
 * XREFs of ZwUnloadKeyEx @ 0x1401816A0
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140457020 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey, Event, v2);
}

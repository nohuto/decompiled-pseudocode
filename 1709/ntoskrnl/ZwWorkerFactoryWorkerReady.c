/*
 * XREFs of ZwWorkerFactoryWorkerReady @ 0x14017D8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWorkerFactoryWorkerReady(HANDLE WorkerFactoryHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}

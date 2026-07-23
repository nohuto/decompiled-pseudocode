/*
 * XREFs of ZwSetInformationWorkerFactory @ 0x140180B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}

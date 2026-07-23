/*
 * XREFs of ZwSignalAndWaitForSingleObject @ 0x140180E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSignalAndWaitForSingleObject(
        HANDLE SignalObject,
        HANDLE WaitObject,
        BOOLEAN Alertable,
        PLARGE_INTEGER Time)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SignalObject);
}

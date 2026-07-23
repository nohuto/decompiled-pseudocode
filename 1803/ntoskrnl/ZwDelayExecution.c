/*
 * XREFs of ZwDelayExecution @ 0x1401A7B40
 * Callers:
 *     IovUnloadDrivers @ 0x1408120F0 (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwDelayExecution(BOOLEAN Alertable, LARGE_INTEGER *Interval)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Alertable);
}

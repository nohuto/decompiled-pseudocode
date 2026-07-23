/*
 * XREFs of ZwDelayExecution @ 0x14017E5C0
 * Callers:
 *     IovUnloadDrivers @ 0x14076341C (IovUnloadDrivers.c)
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

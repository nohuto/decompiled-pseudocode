/*
 * XREFs of ZwSetThreadExecutionState @ 0x140181340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetThreadExecutionState(EXECUTION_STATE esFlags, EXECUTION_STATE *PreviousFlags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&esFlags);
}

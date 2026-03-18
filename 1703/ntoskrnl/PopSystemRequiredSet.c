/*
 * XREFs of PopSystemRequiredSet @ 0x14014B898
 * Callers:
 *     NtSetThreadExecutionState @ 0x140459BC0 (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3);
}

/*
 * XREFs of PopSystemRequiredSet @ 0x14015D5BC
 * Callers:
 *     NtSetThreadExecutionState @ 0x1404F19F4 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x14012EC3C (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3);
}

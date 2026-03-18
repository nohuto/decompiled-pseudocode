/*
 * XREFs of PopSystemRequiredSet @ 0x14016E84C
 * Callers:
 *     NtSetThreadExecutionState @ 0x140526F38 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x1400CF6BC (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3u);
}

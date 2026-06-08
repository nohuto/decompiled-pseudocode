/*
 * XREFs of RegisterHvPerfFeedbackCounters @ 0x1C002CBC0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x1C00309F8 (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterHvPerfFeedbackCounters(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, RegisterHvFeedbackCountersCallback);
}

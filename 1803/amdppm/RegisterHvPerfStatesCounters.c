/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x1C001B460
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C001DCB4 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}

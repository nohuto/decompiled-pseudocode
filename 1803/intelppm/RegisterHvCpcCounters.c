/*
 * XREFs of RegisterHvCpcCounters @ 0x1C002C320
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C002F7CC (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}

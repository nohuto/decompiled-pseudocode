/*
 * XREFs of RegisterHvCpcCounters @ 0x1C001B4C0
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C001EA5C (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}

/*
 * XREFs of RegisterHvCpcCounters @ 0x1C002B150
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}

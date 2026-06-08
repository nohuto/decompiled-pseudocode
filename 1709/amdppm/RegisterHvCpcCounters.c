/*
 * XREFs of RegisterHvCpcCounters @ 0x1C002EAF0
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C0027D1C (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterHvCpcCounters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterHvFeedbackCountersCallback, a3, a4);
}

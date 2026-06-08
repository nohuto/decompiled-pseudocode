/*
 * XREFs of RegisterHvPerfFeedbackCounters @ 0x1C002EAB0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x1C00277EC (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterHvPerfFeedbackCounters(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, (__int64 (__fastcall *)(char *, _QWORD))RegisterHvFeedbackCountersCallback);
}

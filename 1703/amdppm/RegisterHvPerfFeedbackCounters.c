/*
 * XREFs of RegisterHvPerfFeedbackCounters @ 0x1C002B620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterHvPerfFeedbackCounters(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, (__int64 (__fastcall *)(char *, _QWORD))RegisterHvFeedbackCountersCallback);
}

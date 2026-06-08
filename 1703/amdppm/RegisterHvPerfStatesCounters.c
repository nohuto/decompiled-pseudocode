/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x1C002B600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(char *, _QWORD))RegisterHvFeedbackCountersCallback);
}

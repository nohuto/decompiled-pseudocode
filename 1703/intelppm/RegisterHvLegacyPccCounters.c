/*
 * XREFs of RegisterHvLegacyPccCounters @ 0x1C0028020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterHvLegacyPccCounters(__int64 a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterHvFeedbackCountersCallback);
}

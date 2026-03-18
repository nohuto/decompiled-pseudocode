/*
 * XREFs of KiCustomAccessRoutine0 @ 0x14018B640
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140135DD0 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x140261EA0 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14018B620 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}

/*
 * XREFs of KiCustomAccessRoutine0 @ 0x14018B340
 * Callers:
 *     ExpTimerDpcRoutine @ 0x14000D400 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x14028B710 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14018B320 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}

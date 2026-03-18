/*
 * XREFs of KiCustomAccessRoutine0 @ 0x1401B4FF0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x1400CD640 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x1402C1180 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1401B4FD0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}

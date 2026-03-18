/*
 * XREFs of KiCustomAccessRoutine7 @ 0x14018B400
 * Callers:
 *     ExpTimeRefreshDpcRoutine @ 0x140004B30 (ExpTimeRefreshDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x14018B3E0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomAccessRoutine7(unsigned int *a1)
{
  return KiCustomRecurseRoutine7(((unsigned __int8)a1 & 3u) + 1, a1);
}

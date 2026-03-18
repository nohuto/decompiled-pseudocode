/*
 * XREFs of KiCustomAccessRoutine8 @ 0x1401B4E70
 * Callers:
 *     ExpTimeZoneDpcRoutine @ 0x1402B7A00 (ExpTimeZoneDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x1401B4E50 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomAccessRoutine8(unsigned int *a1)
{
  return KiCustomRecurseRoutine8(((unsigned __int8)a1 & 3u) + 1, a1);
}

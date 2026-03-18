/*
 * XREFs of KiCustomAccessRoutine9 @ 0x1401B4F30
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x1400D1750 (ExpCenturyDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x1401B4F10 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomAccessRoutine9(unsigned int *a1)
{
  return KiCustomRecurseRoutine9(((unsigned __int8)a1 & 3u) + 1, a1);
}

/*
 * XREFs of KiCustomAccessRoutine2 @ 0x14018AEC0
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x140122390 (IopIrpStackProfilerDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x14018AEA0 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomAccessRoutine2(unsigned int *a1)
{
  return KiCustomRecurseRoutine2(((unsigned __int8)a1 & 3u) + 1, a1);
}

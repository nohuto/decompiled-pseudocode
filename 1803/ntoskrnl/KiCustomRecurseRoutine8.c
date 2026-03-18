/*
 * XREFs of KiCustomRecurseRoutine8 @ 0x1401B4E50
 * Callers:
 *     KiCustomRecurseRoutine7 @ 0x1401B4D90 (KiCustomRecurseRoutine7.c)
 *     KiCustomAccessRoutine8 @ 0x1401B4E70 (KiCustomAccessRoutine8.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x1401B4F10 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomRecurseRoutine8(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine9();
  return *a2;
}

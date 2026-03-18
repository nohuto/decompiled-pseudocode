/*
 * XREFs of KiCustomRecurseRoutine7 @ 0x1401B4D90
 * Callers:
 *     KiCustomRecurseRoutine6 @ 0x1401B4C10 (KiCustomRecurseRoutine6.c)
 *     KiCustomAccessRoutine7 @ 0x1401B4DB0 (KiCustomAccessRoutine7.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x1401B4E50 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomRecurseRoutine7(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine8();
  return *a2;
}

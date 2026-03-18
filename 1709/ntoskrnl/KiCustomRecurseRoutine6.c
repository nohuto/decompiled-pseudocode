/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x14018AF60
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x14018AD20 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x14018AF80 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x14018B0E0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}

/*
 * XREFs of KiCustomRecurseRoutine7 @ 0x14018B3E0
 * Callers:
 *     KiCustomRecurseRoutine6 @ 0x14018B260 (KiCustomRecurseRoutine6.c)
 *     KiCustomAccessRoutine7 @ 0x14018B400 (KiCustomAccessRoutine7.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x14018B4A0 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomRecurseRoutine7(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine8();
  return *a2;
}

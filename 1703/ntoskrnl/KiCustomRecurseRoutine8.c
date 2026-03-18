/*
 * XREFs of KiCustomRecurseRoutine8 @ 0x14018B4A0
 * Callers:
 *     KiCustomRecurseRoutine7 @ 0x14018B3E0 (KiCustomRecurseRoutine7.c)
 *     KiCustomAccessRoutine8 @ 0x14018B4C0 (KiCustomAccessRoutine8.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x14018B560 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomRecurseRoutine8(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine9();
  return *a2;
}

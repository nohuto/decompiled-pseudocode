/*
 * XREFs of KiCustomRecurseRoutine9 @ 0x14018B560
 * Callers:
 *     KiCustomRecurseRoutine8 @ 0x14018B4A0 (KiCustomRecurseRoutine8.c)
 *     KiCustomAccessRoutine9 @ 0x14018B580 (KiCustomAccessRoutine9.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14018B620 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomRecurseRoutine9(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine0();
  return *a2;
}

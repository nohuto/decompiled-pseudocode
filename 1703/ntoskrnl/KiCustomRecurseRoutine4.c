/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x14018AF60
 * Callers:
 *     KiCustomAccessRoutine4 @ 0x14018AF80 (KiCustomAccessRoutine4.c)
 *     KiCustomRecurseRoutine3 @ 0x14018B320 (KiCustomRecurseRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x14018B020 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine5();
  return *a2;
}

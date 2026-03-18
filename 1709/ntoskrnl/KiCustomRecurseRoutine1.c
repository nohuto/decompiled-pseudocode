/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x14018ADE0
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x14018AE00 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x14018B320 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x14018AEA0 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}

/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x1401B4910
 * Callers:
 *     KiCustomAccessRoutine4 @ 0x1401B4930 (KiCustomAccessRoutine4.c)
 *     KiCustomRecurseRoutine3 @ 0x1401B4CD0 (KiCustomRecurseRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x1401B49D0 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine5();
  return *a2;
}

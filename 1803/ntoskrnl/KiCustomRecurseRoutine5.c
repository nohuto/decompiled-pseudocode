/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x1401B49D0
 * Callers:
 *     KiCustomRecurseRoutine4 @ 0x1401B4910 (KiCustomRecurseRoutine4.c)
 *     KiCustomAccessRoutine5 @ 0x1401B49F0 (KiCustomAccessRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x1401B4C10 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine6();
  return *a2;
}

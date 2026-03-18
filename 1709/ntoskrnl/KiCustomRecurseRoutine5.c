/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x14018AD20
 * Callers:
 *     KiCustomRecurseRoutine4 @ 0x14018AC60 (KiCustomRecurseRoutine4.c)
 *     KiCustomAccessRoutine5 @ 0x14018AD40 (KiCustomAccessRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x14018AF60 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine6();
  return *a2;
}

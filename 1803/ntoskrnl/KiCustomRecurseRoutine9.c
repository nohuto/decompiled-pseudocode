/*
 * XREFs of KiCustomRecurseRoutine9 @ 0x1401B4F10
 * Callers:
 *     KiCustomRecurseRoutine8 @ 0x1401B4E50 (KiCustomRecurseRoutine8.c)
 *     KiCustomAccessRoutine9 @ 0x1401B4F30 (KiCustomAccessRoutine9.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1401B4FD0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomRecurseRoutine9(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine0();
  return *a2;
}

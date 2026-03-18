/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x1401B4A90
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x1401B4AB0 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x1401B4FD0 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x1401B4B50 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}

/*
 * XREFs of KiCustomRecurseRoutine0 @ 0x1401B4FD0
 * Callers:
 *     KiCustomRecurseRoutine9 @ 0x1401B4F10 (KiCustomRecurseRoutine9.c)
 *     KiCustomAccessRoutine0 @ 0x1401B4FF0 (KiCustomAccessRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x1401B4A90 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomRecurseRoutine0(int a1, unsigned int *a2)
{
  int v2; // ecx

  v2 = a1 - 1;
  if ( v2 )
    KiCustomRecurseRoutine1(v2, a2);
  return *a2;
}

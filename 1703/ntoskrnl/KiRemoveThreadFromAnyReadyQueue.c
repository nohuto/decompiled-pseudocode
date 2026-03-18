/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x14001ADA8
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x14001AB48 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x14006515C (KiApplyForegroundBoostThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KiSetHeteroPolicyThread @ 0x14020467C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 1496));
  if ( *(_DWORD *)(a3 + 536) >= 0x80000000 )
    return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
  return KiRemoveThreadFromReadyQueue(a1, a3 + 216, a4);
}

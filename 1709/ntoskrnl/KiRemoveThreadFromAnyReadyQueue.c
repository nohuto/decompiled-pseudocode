/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x1400D15AC
 * Callers:
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400AAB38 (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400AC020 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x140150BC8 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400070C8 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1400D1604 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400D29C0 (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 1496), a3);
  if ( *(int *)(a3 + 536) < 0 )
    return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
  return KiRemoveThreadFromReadyQueue(a1, a3 + 216, a4);
}

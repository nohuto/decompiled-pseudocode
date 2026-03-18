/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x1400A7488
 * Callers:
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140135EA0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400A7600 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400A91B0 (KiRemoveThreadFromScbQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14014C8CC (KiRemoveThreadFromReadyQueue.c)
 */

__int64 __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 1496));
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue(a1, a3 + 216, a4);
  return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
}

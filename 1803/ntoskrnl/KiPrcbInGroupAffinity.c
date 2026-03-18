/*
 * XREFs of KiPrcbInGroupAffinity @ 0x14003AF18
 * Callers:
 *     KiSetSystemAffinityThread @ 0x14003AA28 (KiSetSystemAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14003ABC0 (KeSetIdealProcessorThreadEx.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14003AD30 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingMoveThread @ 0x1400A9020 (KiGroupSchedulingMoveThread.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiComputeThreadAffinity @ 0x1401329B0 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140135EA0 (KiRescheduleThreadAfterAffinityChange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}

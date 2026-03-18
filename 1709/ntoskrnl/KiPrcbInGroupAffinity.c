/*
 * XREFs of KiPrcbInGroupAffinity @ 0x1400A88C0
 * Callers:
 *     KiGroupSchedulingMoveThread @ 0x14006BE40 (KiGroupSchedulingMoveThread.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400A6CA4 (KeSetIdealProcessorThreadEx.c)
 *     KiSetSystemAffinityThread @ 0x1400A8760 (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400AA5D0 (KiDeferGroupSchedulingPreemption.c)
 *     KiComputeThreadAffinity @ 0x1400AAF70 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x1400ABE08 (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400AC020 (KiRescheduleThreadAfterAffinityChange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}

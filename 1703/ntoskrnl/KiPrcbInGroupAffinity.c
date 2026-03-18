/*
 * XREFs of KiPrcbInGroupAffinity @ 0x140113B68
 * Callers:
 *     KiSetAffinityThread @ 0x14001A918 (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14001AB48 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiComputeThreadAffinity @ 0x140110554 (KiComputeThreadAffinity.c)
 *     KeSetIdealProcessorThreadEx @ 0x140111648 (KeSetIdealProcessorThreadEx.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1401136E0 (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x140113A08 (KiSetSystemAffinityThread.c)
 *     KiGroupSchedulingMoveThread @ 0x140114B7C (KiGroupSchedulingMoveThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}

/*
 * XREFs of PopDirectedDripsTimerCallbackRoutine @ 0x140278810
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x140278830 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsTimerCallbackRoutine(__int64 a1, volatile signed __int32 *a2)
{
  _InterlockedAnd(a2, 0xFFFFFFFB);
  return PopQueueDirectedDripsWork(a2, 0LL);
}

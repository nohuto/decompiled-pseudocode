/*
 * XREFs of WdipSemStartTimeoutCheck @ 0x1405CA3B0
 * Callers:
 *     WdipSemCleanStart @ 0x1405CA324 (WdipSemCleanStart.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExAllocateTimer @ 0x140147D60 (ExAllocateTimer.c)
 *     WdipSemSqmInit @ 0x1405CA43C (WdipSemSqmInit.c)
 */

__int64 WdipSemStartTimeoutCheck()
{
  if ( !WdipTimeoutWorkEnabled )
  {
    WdipTimeoutWorkEnabled = 1;
    WdipSemSqmInit();
    WdipTimeoutTimer = ExAllocateTimer((__int64)WdipTimeoutTimerRoutine, 0LL, 8u);
    if ( WdipTimeoutTimer )
    {
      WdipTimeoutWorkItem.Parameter = 0LL;
      WdipTimeoutWorkItem.List.Flink = 0LL;
      qword_1403455B8 = -1LL;
      WdipTimeoutTimerParameters = 0LL;
      WdipTimeoutWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WdipTimeoutCheckRoutine;
      ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
    }
  }
  return 0LL;
}

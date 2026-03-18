/*
 * XREFs of PopUserPresentSet @ 0x14014AC38
 * Callers:
 *     PopSetSystemState @ 0x14014ABF4 (PopSetSystemState.c)
 * Callees:
 *     PopResetIdleTime @ 0x14003A050 (PopResetIdleTime.c)
 *     PopSetNotificationWork @ 0x14006FD70 (PopSetNotificationWork.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406829D0 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall PopUserPresentSet(__int32 a1)
{
  void *v1; // rsi
  __int32 v2; // edi

  v1 = (void *)a1;
  if ( byte_14034B181 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, a1);
  }
  else
  {
    v2 = _InterlockedExchange(&PopUserPresentSetStatus, 1);
    if ( _InterlockedCompareExchange(&dword_14034BB34, 0, 0) )
    {
      if ( !v2 )
      {
        _InterlockedExchange(&PopUserPresentSetStatus, 0);
        KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
      }
    }
    else
    {
      if ( (PopSimulate & 0x40000) != 0 )
        DbgkWerCaptureLiveKernelDump(L"UserPresenceSet", PopFullWake, 0LL, 0LL, 0LL, 0);
      if ( (PopFullWake & 3) == 0 )
      {
        _InterlockedOr(&PopFullWake, 2u);
        PopSetNotificationWork(1u);
      }
      PopResetIdleTime(2);
      if ( !v2 )
      {
        PopUserPresentWorkItem.Parameter = v1;
        PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
        PopUserPresentWorkItem.List.Flink = 0LL;
        ExQueueWorkItem(&PopUserPresentWorkItem, DelayedWorkQueue);
      }
    }
  }
}

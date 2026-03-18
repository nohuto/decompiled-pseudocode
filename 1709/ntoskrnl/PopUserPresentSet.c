/*
 * XREFs of PopUserPresentSet @ 0x14015B5B8
 * Callers:
 *     PopSetSystemState @ 0x14015B574 (PopSetSystemState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PopSetNotificationWork @ 0x1400B0BE4 (PopSetNotificationWork.c)
 *     PopResetIdleTime @ 0x14012EC3C (PopResetIdleTime.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406ADCB0 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall PopUserPresentSet(__int32 a1)
{
  void *v1; // rsi
  __int32 v2; // edi

  v1 = (void *)a1;
  if ( byte_1403657E1 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, a1);
  }
  else
  {
    v2 = _InterlockedExchange(&PopUserPresentSetStatus, 1);
    if ( _InterlockedCompareExchange(&dword_1403661B4, 0, 0) )
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

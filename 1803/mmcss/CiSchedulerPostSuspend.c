/*
 * XREFs of CiSchedulerPostSuspend @ 0x1C0002BC8
 * Callers:
 *     CiProcessSuspend @ 0x1C00025CC (CiProcessSuspend.c)
 * Callees:
 *     CiSchedulerUpdateTimer @ 0x1C000388C (CiSchedulerUpdateTimer.c)
 */

void __fastcall CiSchedulerPostSuspend(char a1, int a2, bool *a3)
{
  bool v6; // di

  CiSchedulerUpdateTimer();
  v6 = 0;
  if ( a2 )
  {
    if ( a1 )
    {
      _InterlockedOr(&CiSchedulerWakeupReason, 4u);
    }
    else
    {
      _m_prefetchw(&CiSchedulerWakeupReason);
      v6 = (_InterlockedOr(&CiSchedulerWakeupReason, 2u) & 0x8000) != 0;
    }
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  *a3 = v6;
}

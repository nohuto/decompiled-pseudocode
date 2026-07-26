/*
 * XREFs of ndisWorkerThread @ 0x1C001E0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void ndisWorkerThread()
{
  KIRQL v0; // al
  PLIST_ENTRY v1; // rax
  PLIST_ENTRY v2; // rbx
  KIRQL v3; // al
  KIRQL v4; // di

  while ( 1 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
    if ( ndisThreadPoolIdleThreadCount >= 10 )
      break;
    ++ndisThreadPoolIdleThreadCount;
    KeReleaseSpinLock(&ndisThreadPoolLock, v0);
    v1 = KeRemoveQueue(&ndisWorkerQueue, 0, 0LL);
    v2 = v1;
    if ( (unsigned __int8)byte_1C0092613 >= 4u )
      WPP_SF_q(24LL, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, v1);
    v3 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
    --ndisThreadPoolIdleThreadCount;
    v4 = v3;
    if ( _InterlockedExchangeAdd(&ndisWorkerQueueItemCount, 0xFFFFFFFF) > 1 )
    {
      KeSetTimer(&ndisThreadPoolTimer, ndisThreadPoolTimerDueTime, 0LL);
    }
    else
    {
      KeCancelTimer(&ndisThreadPoolTimer);
      ndisThreadPoolTimerQueued = 0;
    }
    KeReleaseSpinLock(&ndisThreadPoolLock, v4);
    ((void (__fastcall *)(_LIST_ENTRY *))v2[1].Flink)(v2[1].Blink);
  }
  --WPP_MAIN_CB.DeviceType;
  KeReleaseSpinLock(&ndisThreadPoolLock, v0);
}

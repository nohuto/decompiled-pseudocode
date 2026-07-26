/*
 * XREFs of ndisThreadPoolTimerHandler @ 0x1C0022B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     ndisCreateThread @ 0x1C00B00C4 (ndisCreateThread.c)
 */

NTSTATUS ndisThreadPoolTimerHandler()
{
  NTSTATUS result; // eax
  KIRQL v1; // al
  int v2; // eax
  KIRQL v3; // al
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = KeWaitForSingleObject(&ndisThreadPoolTimer, Executive, 0, 0, 0LL);
    if ( ndisThreadPoolTerminating )
      break;
    v1 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
    ndisThreadPoolTimerQueued = 0;
    KeReleaseSpinLock(&ndisThreadPoolLock, v1);
    if ( ndisWorkerQueueItemCount > 0 )
    {
      if ( (unsigned __int8)byte_1C0092613 >= 3u )
        WPP_SF_(22LL, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
      v2 = ndisCreateThread(ndisWorkerThread, 0LL, 0LL, &Object);
      if ( v2 < 0 )
      {
        if ( (unsigned __int8)byte_1C0092613 >= 2u )
          WPP_SF_d(23LL, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, (unsigned int)v2);
      }
      else
      {
        ObfDereferenceObject(Object);
        v3 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
        ++WPP_MAIN_CB.DeviceType;
        KeReleaseSpinLock(&ndisThreadPoolLock, v3);
      }
    }
  }
  return result;
}

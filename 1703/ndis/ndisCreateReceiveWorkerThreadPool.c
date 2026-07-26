/*
 * XREFs of ndisCreateReceiveWorkerThreadPool @ 0x1C00AFB50
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C00142C8 (ndisConfigurePeriodicReceives.c)
 * Callees:
 *     NdisGroupActiveProcessorCount @ 0x1C0023870 (NdisGroupActiveProcessorCount.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     ndisCreateThread @ 0x1C00B00C4 (ndisCreateThread.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00D97BC (ndisKillReceiveWorkerThreadPool.c)
 */

__int64 ndisCreateReceiveWorkerThreadPool()
{
  int Thread; // ebx
  __int64 v1; // rdi
  ULONG active; // esi

  Thread = 0;
  if ( (unsigned __int8)byte_1C0092613 >= 4u )
    WPP_SF_(0x51u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
  v1 = 0LL;
  active = NdisGroupActiveProcessorCount(0xFFFFu);
  if ( active )
  {
    while ( 1 )
    {
      Thread = ndisCreateThread(
                 ndisReceiveWorkerThread,
                 (unsigned int)v1,
                 LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink),
                 (char *)WPP_MAIN_CB.Dpc.DeferredContext + 8 * v1);
      if ( Thread < 0 )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= active )
        goto LABEL_6;
    }
    ndisKillReceiveWorkerThreadPool();
  }
  else
  {
LABEL_6:
    if ( (unsigned __int8)byte_1C0092613 >= 4u )
      WPP_SF_(0x52u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
  }
  return (unsigned int)Thread;
}

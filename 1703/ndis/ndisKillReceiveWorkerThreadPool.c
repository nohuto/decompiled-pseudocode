/*
 * XREFs of ndisKillReceiveWorkerThreadPool @ 0x1C00D97BC
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C00142C8 (ndisConfigurePeriodicReceives.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00AFB50 (ndisCreateReceiveWorkerThreadPool.c)
 * Callees:
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C00116B8 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 */

void ndisKillReceiveWorkerThreadPool()
{
  unsigned int v0; // edx
  __int64 i; // rbx
  struct _WORK_QUEUE_ITEM *v2; // rdx
  __int64 v3; // rbx
  void *v4; // rcx

  if ( (unsigned __int8)byte_1C0092613 >= 4u )
    WPP_SF_(0x53u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
  v0 = ndisMaxNumberOfProcessors;
  for ( i = 0LL; (unsigned int)i < ndisMaxNumberOfProcessors; i = (unsigned int)(i + 1) )
  {
    if ( !*((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + i) )
      break;
    v2 = (struct _WORK_QUEUE_ITEM *)((char *)ndisPerCpuPoisonPills + 32 * (unsigned int)i);
    v2->WorkerRoutine = 0LL;
    v2->List.Flink = 0LL;
    v2->Parameter = v2;
    ndisInsertInWorkQueue(
      (struct _KSEMAPHORE *)WPP_MAIN_CB.Dpc.DeferredRoutine + 2 * (unsigned __int64)(unsigned int)i,
      v2,
      0);
    v0 = ndisMaxNumberOfProcessors;
  }
  v3 = 0LL;
  if ( v0 )
  {
    do
    {
      v4 = (void *)*((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + v3);
      if ( !v4 )
        break;
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObject(*((PVOID *)WPP_MAIN_CB.Dpc.DeferredContext + v3));
      *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + v3) = 0LL;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < ndisMaxNumberOfProcessors );
  }
  if ( (unsigned __int8)byte_1C0092613 >= 4u )
    WPP_SF_(0x54u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
}

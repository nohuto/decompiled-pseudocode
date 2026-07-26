/*
 * XREFs of ndisKillReceiveWorkerThreadPool @ 0x1C00E3954
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C0010DD4 (ndisConfigurePeriodicReceives.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00C7DDC (ndisCreateReceiveWorkerThreadPool.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C004E4D8 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 */

void ndisKillReceiveWorkerThreadPool()
{
  unsigned int v0; // edx
  __int64 i; // rbx
  struct _WORK_QUEUE_ITEM *v2; // rdx
  __int64 v3; // rbx
  void *v4; // rcx

  if ( (unsigned __int8)byte_1C0098753 >= 4u )
    WPP_SF_(0x50u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
  v0 = ndisMaxNumberOfProcessors;
  for ( i = 0LL; (unsigned int)i < ndisMaxNumberOfProcessors; i = (unsigned int)(i + 1) )
  {
    if ( !*((_QWORD *)qword_1C0097F48 + i) )
      break;
    v2 = (struct _WORK_QUEUE_ITEM *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 32LL * (unsigned int)i);
    v2->WorkerRoutine = 0LL;
    v2->List.Flink = 0LL;
    v2->Parameter = v2;
    ndisInsertInWorkQueue((struct _KSEMAPHORE *)qword_1C0097F40 + 2 * (unsigned __int64)(unsigned int)i, v2, 0);
    v0 = ndisMaxNumberOfProcessors;
  }
  v3 = 0LL;
  if ( v0 )
  {
    do
    {
      v4 = (void *)*((_QWORD *)qword_1C0097F48 + v3);
      if ( !v4 )
        break;
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObject(*((PVOID *)qword_1C0097F48 + v3));
      *((_QWORD *)qword_1C0097F48 + v3) = 0LL;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < ndisMaxNumberOfProcessors );
  }
  if ( (unsigned __int8)byte_1C0098753 >= 4u )
    WPP_SF_(0x51u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
}

/*
 * XREFs of VidSchTerminateAdapter @ 0x1C00BE350
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C007B520 (VidSchInitializeAdapter.c)
 *     VidSchiHandleControlEvent @ 0x1C00BBDA8 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchIsWorkerThread @ 0x1C0004C00 (VidSchIsWorkerThread.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C0008290 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiDecrementContextReference @ 0x1C0012890 (VidSchiDecrementContextReference.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C0015974 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchTerminateHwContext @ 0x1C0033120 (VidSchTerminateHwContext.c)
 *     VidSchTerminateHwQueue @ 0x1C0033250 (VidSchTerminateHwQueue.c)
 *     VidSchControlVSyncAdapter @ 0x1C0056ED0 (VidSchControlVSyncAdapter.c)
 *     VidSchTerminateDevice @ 0x1C0078CB0 (VidSchTerminateDevice.c)
 *     VidSchTerminateContext @ 0x1C0078DA0 (VidSchTerminateContext.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C007C188 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00BCEF0 (VidSchFlushAdapter.c)
 *     VidSchiBlockDriverCallback @ 0x1C00BFB00 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchTerminateAdapter(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  bool IsWorkerThread; // bl
  void *v7; // rbx
  _QWORD *v8; // rcx
  unsigned int i; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  unsigned int j; // ebx
  __int64 v13; // rdx
  struct VIDSCH_HW_QUEUE **v14; // rcx
  unsigned int k; // ebx
  _QWORD *v16; // rcx
  unsigned int m; // ebx
  __int64 v18; // rdx
  char *v19; // rcx
  unsigned int n; // ebx
  __int64 v21; // rsi
  struct _VIDSCH_CONTEXT *v22; // rcx
  struct _VIDSCH_CONTEXT *v23; // rcx
  char *v24; // rcx
  __int64 v25; // rcx
  unsigned int ii; // esi
  __int64 v27; // rbp
  _QWORD *v28; // rbx
  struct _VIDSCH_CONTEXT *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  unsigned int v32; // ebx
  void *v33; // rcx
  void *v34; // rbx
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( VidSchiAcceptsIncomingWork((__int64)a1) )
    {
      IsWorkerThread = VidSchIsWorkerThread(v4);
      VidSchFlushAdapter(a1, 15LL);
      if ( !IsWorkerThread )
      {
        v7 = (void *)*((_QWORD *)a1 + 18);
        ObfReferenceObject(v7);
        VidSchiRequestSchedulerStatus((__int64)a1, 2, 0);
        KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v7);
        return 0LL;
      }
      if ( *((_DWORD *)a1 + 497) )
      {
        *((_DWORD *)a1 + 497) = 1;
        VidSchControlVSyncAdapter((__int64)a1, 4LL, 0);
      }
      VidSchiBlockDriverCallback(a1);
      while ( *((_DWORD *)a1 + 512) )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v2 = 1;
    }
    v8 = (_QWORD *)*((_QWORD *)a1 + 33);
    if ( v8 )
    {
      for ( i = 0; i < *((_DWORD *)a1 + 15); ++i )
      {
        v8 = (_QWORD *)*((_QWORD *)a1 + 33);
        v10 = v8[i];
        if ( v10 )
        {
          VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8[i], v10);
          v8 = (_QWORD *)*((_QWORD *)a1 + 33);
        }
      }
      ExFreePoolWithTag(v8, 0);
      *((_QWORD *)a1 + 33) = 0LL;
    }
    v11 = (_QWORD *)*((_QWORD *)a1 + 30);
    if ( v11 )
    {
      for ( j = 0; j < *((_DWORD *)a1 + 15); ++j )
      {
        v11 = (_QWORD *)*((_QWORD *)a1 + 30);
        v13 = v11[j];
        if ( v13 )
        {
          VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v11[j], v13);
          v11 = (_QWORD *)*((_QWORD *)a1 + 30);
        }
      }
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)a1 + 30) = 0LL;
    }
    v14 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 32);
    if ( v14 )
    {
      for ( k = 0; k < *((_DWORD *)a1 + 15); ++k )
      {
        v14 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 32);
        if ( v14[k] )
        {
          VidSchTerminateHwQueue(v14[k]);
          v14 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 32);
        }
      }
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)a1 + 32) = 0LL;
    }
    v16 = (_QWORD *)*((_QWORD *)a1 + 31);
    if ( v16 )
    {
      for ( m = 0; m < *((_DWORD *)a1 + 15); ++m )
      {
        v16 = (_QWORD *)*((_QWORD *)a1 + 31);
        v18 = v16[m];
        if ( v18 )
        {
          VidSchTerminateHwContext((_QWORD *)v16[m], v18, v5);
          v16 = (_QWORD *)*((_QWORD *)a1 + 31);
        }
      }
      ExFreePoolWithTag(v16, 0);
      *((_QWORD *)a1 + 31) = 0LL;
    }
    v19 = (char *)*((_QWORD *)a1 + 29);
    if ( v19 )
    {
      VidSchTerminateDevice(v19, v3);
      *((_QWORD *)a1 + 29) = 0LL;
    }
    for ( n = 0; n < *((_DWORD *)a1 + 16); ++n )
    {
      v21 = *((_QWORD *)a1 + n + 55);
      if ( v21 )
      {
        v22 = *(struct _VIDSCH_CONTEXT **)(v21 + 32);
        if ( v22 )
        {
          VidSchTerminateContext(v22, v3);
          *(_QWORD *)(v21 + 32) = 0LL;
        }
      }
    }
    v23 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 28);
    if ( v23 )
    {
      VidSchTerminateContext(v23, v3);
      *((_QWORD *)a1 + 28) = 0LL;
    }
    v24 = (char *)*((_QWORD *)a1 + 27);
    if ( v24 )
    {
      VidSchTerminateDevice(v24, v3);
      *((_QWORD *)a1 + 27) = 0LL;
    }
    v25 = *((_QWORD *)a1 + 20);
    if ( v25 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v25, v3, 0LL, 0LL);
    }
    for ( ii = 0; ii < *((_DWORD *)a1 + 16); *((_QWORD *)a1 + v27 + 55) = 0LL )
    {
      v27 = ii;
      v28 = (_QWORD *)*((_QWORD *)a1 + ii + 55);
      v29 = (struct _VIDSCH_CONTEXT *)v28[27];
      if ( v29 )
      {
        VidSchiDecrementContextReference(v29, 0);
        v28[27] = 0LL;
      }
      v30 = (void *)v28[23];
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
      v31 = (void *)v28[25];
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
      ExFreePoolWithTag(v28, 0);
      ++ii;
    }
    v32 = 0;
    for ( *((_DWORD *)a1 + 72) = 2; v32 < *((_DWORD *)a1 + 10); ++v32 )
    {
      if ( *((_QWORD *)a1 + v32 + 379) )
      {
        VidSchiClearPeriodicFrameNotifications((__int64)a1, v32);
        ExFreePoolWithTag(*((PVOID *)a1 + v32 + 379), 0);
        *((_QWORD *)a1 + v32 + 379) = 0LL;
      }
      v33 = (void *)*((_QWORD *)a1 + v32 + 781);
      if ( v33 )
      {
        ExFreePoolWithTag(v33, 0);
        *((_QWORD *)a1 + v32 + 781) = 0LL;
      }
    }
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 2728));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 296));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1264));
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 1160));
    if ( *((_BYTE *)a1 + 1152) )
    {
      ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)a1 + 11);
      *((_BYTE *)a1 + 1152) = 0;
    }
    v34 = (void *)*((_QWORD *)a1 + 18);
    ExFreePoolWithTag(a1, 0);
    if ( v2 )
    {
      ObfDereferenceObject(v34);
      PsTerminateSystemThread(0);
    }
  }
  return 0LL;
}

/*
 * XREFs of VidSchTerminateAdapter @ 0x1C00B5480
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0076950 (VidSchInitializeAdapter.c)
 *     VidSchiHandleControlEvent @ 0x1C00B33A8 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiAcceptsIncomingWork @ 0x1C0008100 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiDecrementContextReference @ 0x1C000E770 (VidSchiDecrementContextReference.c)
 *     VidSchIsWorkerThread @ 0x1C0011180 (VidSchIsWorkerThread.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C0015EEC (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchTerminateContext @ 0x1C00706B0 (VidSchTerminateContext.c)
 *     VidSchTerminateDevice @ 0x1C00709F0 (VidSchTerminateDevice.c)
 *     VidSchControlVSyncAdapter @ 0x1C0071330 (VidSchControlVSyncAdapter.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C00773BC (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 *     VidSchiBlockDriverCallback @ 0x1C00B61D0 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchTerminateAdapter(struct _VIDSCH_GLOBAL *a1)
{
  int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // rbx
  unsigned int i; // ebx
  struct _VIDSCH_CONTEXT *v7; // rcx
  unsigned int j; // ebx
  struct _VIDSCH_CONTEXT *v9; // rcx
  __int64 v10; // rcx
  unsigned int k; // ebx
  __int64 v12; // rsi
  struct _VIDSCH_CONTEXT *v13; // rcx
  struct _VIDSCH_CONTEXT *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int m; // esi
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  struct _VIDSCH_CONTEXT *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  unsigned int v23; // ebx
  void *v24; // rcx
  void *v25; // rbx
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( VidSchiAcceptsIncomingWork((__int64)a1) )
    {
      if ( !VidSchIsWorkerThread(v4) )
      {
        VidSchFlushAdapter(a1, 15LL);
        v5 = (void *)*((_QWORD *)a1 + 18);
        ObfReferenceObject(v5);
        VidSchiRequestSchedulerStatus((__int64)a1, 2, 0);
        KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v5);
        return 0LL;
      }
      VidSchFlushAdapter(a1, 15LL);
      if ( *((_DWORD *)a1 + 493) )
      {
        *((_DWORD *)a1 + 493) = 1;
        VidSchControlVSyncAdapter((__int64)a1, 4LL, 0);
      }
      VidSchiBlockDriverCallback(a1);
      while ( *((_DWORD *)a1 + 508) )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v2 = 1;
    }
    if ( *((_QWORD *)a1 + 31) )
    {
      for ( i = 0; i < *((_DWORD *)a1 + 14); ++i )
      {
        v7 = *(struct _VIDSCH_CONTEXT **)(*((_QWORD *)a1 + 31) + 8LL * i);
        if ( v7 )
          VidSchTerminateContext(v7, v3);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 31), 0);
      *((_QWORD *)a1 + 31) = 0LL;
    }
    if ( *((_QWORD *)a1 + 30) )
    {
      for ( j = 0; j < *((_DWORD *)a1 + 14); ++j )
      {
        v9 = *(struct _VIDSCH_CONTEXT **)(*((_QWORD *)a1 + 30) + 8LL * j);
        if ( v9 )
          VidSchTerminateContext(v9, v3);
      }
      ExFreePoolWithTag(*((PVOID *)a1 + 30), 0);
      *((_QWORD *)a1 + 30) = 0LL;
    }
    v10 = *((_QWORD *)a1 + 29);
    if ( v10 )
    {
      VidSchTerminateDevice(v10, v3);
      *((_QWORD *)a1 + 29) = 0LL;
    }
    for ( k = 0; k < *((_DWORD *)a1 + 15); ++k )
    {
      v12 = *((_QWORD *)a1 + k + 53);
      if ( v12 )
      {
        v13 = *(struct _VIDSCH_CONTEXT **)(v12 + 32);
        if ( v13 )
        {
          VidSchTerminateContext(v13, v3);
          *(_QWORD *)(v12 + 32) = 0LL;
        }
      }
    }
    v14 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 28);
    if ( v14 )
    {
      VidSchTerminateContext(v14, v3);
      *((_QWORD *)a1 + 28) = 0LL;
    }
    v15 = *((_QWORD *)a1 + 27);
    if ( v15 )
    {
      VidSchTerminateDevice(v15, v3);
      *((_QWORD *)a1 + 27) = 0LL;
    }
    v16 = *((_QWORD *)a1 + 20);
    if ( v16 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v16, v3, 0LL, 0LL);
    }
    for ( m = 0; m < *((_DWORD *)a1 + 15); *((_QWORD *)a1 + v18 + 53) = 0LL )
    {
      v18 = m;
      v19 = (_QWORD *)*((_QWORD *)a1 + m + 53);
      v20 = (struct _VIDSCH_CONTEXT *)v19[27];
      if ( v20 )
      {
        VidSchiDecrementContextReference(v20, 0);
        v19[27] = 0LL;
      }
      v21 = (void *)v19[23];
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      v22 = (void *)v19[25];
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      ExFreePoolWithTag(v19, 0);
      ++m;
    }
    v23 = 0;
    for ( *((_DWORD *)a1 + 68) = 2; v23 < *((_DWORD *)a1 + 10); ++v23 )
    {
      if ( *((_QWORD *)a1 + v23 + 376) )
      {
        VidSchiClearPeriodicFrameNotifications((__int64)a1, v23);
        ExFreePoolWithTag(*((PVOID *)a1 + v23 + 376), 0);
        *((_QWORD *)a1 + v23 + 376) = 0LL;
      }
      v24 = (void *)*((_QWORD *)a1 + v23 + 757);
      if ( v24 )
      {
        ExFreePoolWithTag(v24, 0);
        *((_QWORD *)a1 + v23 + 757) = 0LL;
      }
    }
    ExDeleteResourceLite((PERESOURCE)a1 + 26);
    ExDeleteResourceLite((PERESOURCE)((char *)a1 + 280));
    ExDeleteResourceLite((PERESOURCE)a1 + 12);
    ExDeleteResourceLite((PERESOURCE)a1 + 11);
    ExDeleteResourceLite((PERESOURCE)a1 + 10);
    v25 = (void *)*((_QWORD *)a1 + 18);
    ExFreePoolWithTag(a1, 0);
    if ( v2 )
    {
      ObfDereferenceObject(v25);
      PsTerminateSystemThread(0);
    }
  }
  return 0LL;
}

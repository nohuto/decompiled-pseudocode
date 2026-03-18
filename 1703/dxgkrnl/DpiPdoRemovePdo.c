/*
 * XREFs of DpiPdoRemovePdo @ 0x1C01CEAF0
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0118D50 (DpiPdoAddPdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0119220 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoRemovePdoObjects @ 0x1C01CED38 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C01D27E0 (-DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C01E42D4 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoRemovePdo(__int64 a1, __int64 a2, __int64 a3, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r14
  _QWORD **v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  void *v23; // rcx
  __int64 v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  _QWORD *v30; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(v5) = 0;
  v6 = a2;
  v7 = *(_QWORD ***)(v4 + 3456);
  v8 = v7;
  v9 = *v7;
  if ( *v7 == v7 )
  {
LABEL_5:
    LODWORD(v5) = -1073741811;
    v10 = WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = *(unsigned int *)(v6 + 24);
    WdLogEvent5_WdWarning(v10);
  }
  else
  {
    a2 = *(unsigned int *)(a2 + 24);
    while ( *((_DWORD *)v8 + 126) != (_DWORD)a2 )
    {
      v8 = v9;
      v9 = (_QWORD *)*v9;
      if ( v9 == v7 )
        goto LABEL_5;
    }
    v12 = *v8;
    v13 = (_QWORD *)v8[1];
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v13 != v8 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    --*(_DWORD *)(v4 + 3472);
    *((_BYTE *)v8 + 508) = 0;
    if ( (_BYTE)a3 && *((_DWORD *)v8 + 124) == 1 && !*((_BYTE *)v8 + 511) )
    {
      v14 = MonitorRemovePhysicalMonitor(*(DXGADAPTER **)(v4 + 3704), *((_DWORD *)v8 + 126), 0, a4);
      v17 = v14;
      if ( v14 < 0 )
      {
        v18 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v18 + 24) = v17;
        WdLogEvent5_WdError(v18);
      }
      v19 = DmmResetBaseVideoOutputTechnology(*(void *const *)(v4 + 3704), *((_DWORD *)v8 + 126));
      v5 = v19;
      if ( v19 < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v22 + 24) = v5;
        WdLogEvent5_WdError(v22);
      }
    }
    KeWaitForSingleObject((PVOID)(v4 + 3248), Executive, 0, 0, 0LL);
    *(_QWORD *)(v6 + 48) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v4 + 3248), 0);
    v23 = (void *)v8[116];
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      v8[116] = 0LL;
    }
    v24 = WdLogNewEntry5_WdEvent(v23);
    *(_QWORD *)(v24 + 24) = v8[3];
    WdLogEvent5_WdEvent(v24);
    if ( *((_BYTE *)v8 + 509) )
    {
      v30 = *(_QWORD **)(v4 + 3488);
      if ( *v30 != v4 + 3480 )
        __fastfail(3u);
      *v8 = v4 + 3480;
      v8[1] = v30;
      *v30 = v8;
      *(_QWORD *)(v4 + 3488) = v8;
    }
    else
    {
      v25 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v8 + 2, (PVOID)v6, File, 1u, 0x20u);
      v5 = v25;
      if ( v25 >= 0 )
      {
        IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v8 + 2, (PVOID)v6, 0x20u);
        IoQueueWorkItem((PIO_WORKITEM)v8[119], (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
      }
      else
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
        v29[3] = 275LL;
        v29[4] = 21LL;
        v29[5] = v5;
        WdLogEvent5_WdCriticalError(v29);
      }
    }
  }
  return (unsigned int)v5;
}

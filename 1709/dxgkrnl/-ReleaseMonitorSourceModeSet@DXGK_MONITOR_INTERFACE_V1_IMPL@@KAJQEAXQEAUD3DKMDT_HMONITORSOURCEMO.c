/*
 * XREFs of ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C0200100
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0008BE0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet(
        __int64 a1,
        struct _IO_REMOVE_LOCK *a2,
        __int64 a3)
{
  __int64 v5; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v7; // rcx
  DXGADAPTER *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rax

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 7053);
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = a1;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v8 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_8;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_QWORD *)v8 + 288) )
  {
    if ( a2 )
    {
      v13 = MonitorReleaseMonitorHandle(v8, a2, DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v14 + 24) = 0LL;
      WdLogEvent5_WdError(v14);
      v13 = -1071774943;
    }
  }
  else
  {
LABEL_8:
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    v13 = -1071775742;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, 7053);
  return v13;
}

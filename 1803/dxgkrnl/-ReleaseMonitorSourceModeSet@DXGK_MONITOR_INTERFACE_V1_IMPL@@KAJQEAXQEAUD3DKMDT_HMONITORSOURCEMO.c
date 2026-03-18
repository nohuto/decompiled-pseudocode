/*
 * XREFs of ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C0231BD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0006E10 (DpiGetDxgAdapter.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet(
        __int64 a1,
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v11; // rcx
  DXGADAPTER *v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-18h] BYREF
  __int64 v22; // [rsp+28h] [rbp-10h]

  v22 = 0LL;
  v21 = 7053;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 7053);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 7053);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = a1;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v12 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_8;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_QWORD *)v12 + 307) )
  {
    if ( a2 )
    {
      v16 = MonitorReleaseMonitorHandle(
              v12,
              (__int64)a2,
              DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
              v13);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v17 + 24) = 0LL;
      WdLogEvent5_WdError(v17);
      v16 = -1071774943;
    }
  }
  else
  {
LABEL_8:
    v15 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    v16 = -1071775742;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v21);
  return v16;
}

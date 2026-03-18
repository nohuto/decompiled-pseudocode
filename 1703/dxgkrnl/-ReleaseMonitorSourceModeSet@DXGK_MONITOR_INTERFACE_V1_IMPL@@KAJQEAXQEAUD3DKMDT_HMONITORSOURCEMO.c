/*
 * XREFs of ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C01E5BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E0C0 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet(
        __int64 a1,
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGADAPTER *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // rax

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 7053);
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = a1;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v10 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_8;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_QWORD *)v10 + 285) )
  {
    if ( a2 )
    {
      v17 = MonitorReleaseMonitorHandle(
              v10,
              (struct HDXGMONITOR__ *)a2,
              DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
              v12);
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v18 + 24) = 0LL;
      WdLogEvent5_WdError(v18);
      v17 = -1071774943;
    }
  }
  else
  {
LABEL_8:
    v14 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    v17 = -1071775742;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 7053);
  return v17;
}

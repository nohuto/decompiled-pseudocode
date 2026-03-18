/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0231430
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0006E10 (DpiGetDxgAdapter.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C02346BC (-_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v15; // rcx
  DXGADAPTER *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _FAST_MUTEX *v21; // rbx
  __int64 v22; // rcx
  int MonitorInstance; // esi
  __int64 v24; // rax
  __int64 v25; // rax
  struct DXGMONITOR *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // eax
  struct _ERESOURCE *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v35; // [rsp+20h] [rbp-28h] BYREF
  __int64 v36; // [rsp+28h] [rbp-20h]
  struct DXGMONITOR *v37; // [rsp+50h] [rbp+8h] BYREF

  v36 = 0LL;
  v4 = a2;
  v35 = 7060;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 7060);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 7060);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v12 = v4;
  v10[3] = a3;
  v10[4] = a1;
  v10[5] = v4;
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = 0LL;
LABEL_13:
    WdLogEvent5_WdError(v13);
    v18 = -1073741811;
    goto LABEL_21;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v16 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v20 = *((_QWORD *)v16 + 307)) == 0 )
    {
      v13 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v13 + 24) = a1;
      goto LABEL_13;
    }
    v21 = *(struct _FAST_MUTEX **)(v20 + 96);
    if ( !v21 )
    {
      v13 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v13 + 24) = v16;
      goto LABEL_13;
    }
    v37 = 0LL;
    v18 = -1073741275;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v21, v4, 0, &v37);
    if ( MonitorInstance == -1073741275 )
    {
      v24 = WdLogNewEntry5_WdDmmEvent(v22);
      *(_QWORD *)(v24 + 24) = v12;
      *(_QWORD *)(v24 + 32) = v21;
      WdLogEvent5_WdDmmEvent(v24);
    }
    else if ( MonitorInstance >= 0 )
    {
      v26 = v37;
      if ( !v37 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v27);
        v29 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v29);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v26 + 296), 1u);
      v30 = DXGMONITOR::_ReleaseAdditionalTiming(v26, a3);
      v31 = (struct _ERESOURCE *)((char *)v26 + 296);
      v18 = v30;
      ExReleaseResourceLite(v31);
      KeLeaveCriticalRegion();
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v25 + 24) = v12;
      *(_QWORD *)(v25 + 32) = v21;
      WdLogEvent5_WdError(v25);
      v18 = MonitorInstance;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    v18 = -1071775742;
  }
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v32, &EventProfilerExit, v33, v35);
  return v18;
}

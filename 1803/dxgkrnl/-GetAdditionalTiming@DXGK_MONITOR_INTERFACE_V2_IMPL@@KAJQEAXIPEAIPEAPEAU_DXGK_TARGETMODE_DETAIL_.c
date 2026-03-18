/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0230990
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0006E10 (DpiGetDxgAdapter.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0234570 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::GetAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a4)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v17; // rcx
  DXGADAPTER *v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _FAST_MUTEX *v23; // rbx
  __int64 v24; // rcx
  int MonitorInstance; // esi
  __int64 v26; // rax
  __int64 v27; // rax
  struct DXGMONITOR *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int AdditionalTiming; // eax
  struct _ERESOURCE *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v37; // [rsp+20h] [rbp-28h] BYREF
  __int64 v38; // [rsp+28h] [rbp-20h]
  struct DXGMONITOR *v39; // [rsp+50h] [rbp+8h] BYREF

  v38 = 0LL;
  v6 = a2;
  v37 = 7059;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 7059);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 7059);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v14 = v6;
  v12[3] = a1;
  v12[4] = v6;
  v12[5] = a3;
  v12[6] = a4;
  if ( !a3 || !a4 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = 0LL;
LABEL_14:
    WdLogEvent5_WdError(v15);
    v20 = -1073741811;
    goto LABEL_22;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v18 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v22 = *((_QWORD *)v18 + 307)) == 0 )
    {
      v15 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v15 + 24) = a1;
      goto LABEL_14;
    }
    v23 = *(struct _FAST_MUTEX **)(v22 + 96);
    if ( !v23 )
    {
      v15 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v15 + 24) = v18;
      goto LABEL_14;
    }
    v39 = 0LL;
    v20 = -1073741275;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v23, v6, 0, &v39);
    if ( MonitorInstance == -1073741275 )
    {
      v26 = WdLogNewEntry5_WdDmmEvent(v24);
      *(_QWORD *)(v26 + 24) = v14;
      *(_QWORD *)(v26 + 32) = v23;
      WdLogEvent5_WdDmmEvent(v26);
    }
    else if ( MonitorInstance >= 0 )
    {
      v28 = v39;
      if ( !v39 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v29);
        v31 = WdLogNewEntry5_WdAssertion(v30);
        WdLogEvent5_WdAssertion(v31);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v28 + 296), 1u);
      AdditionalTiming = DXGMONITOR::_GetAdditionalTiming(v28, a3, a4);
      v33 = (struct _ERESOURCE *)((char *)v28 + 296);
      v20 = AdditionalTiming;
      ExReleaseResourceLite(v33);
      KeLeaveCriticalRegion();
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v27 + 24) = v14;
      *(_QWORD *)(v27 + 32) = v23;
      WdLogEvent5_WdError(v27);
      v20 = MonitorInstance;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    v20 = -1071775742;
  }
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v37);
  return v20;
}

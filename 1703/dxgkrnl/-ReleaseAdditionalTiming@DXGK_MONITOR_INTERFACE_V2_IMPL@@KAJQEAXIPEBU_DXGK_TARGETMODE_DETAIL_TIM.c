/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01E5640
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E0C0 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01E6510 (-_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(
        __int64 a1,
        __int64 a2,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a3,
        __int64 a4)
{
  __int64 v5; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGADAPTER *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _FAST_MUTEX *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int MonitorInstance; // esi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  struct DXGMONITOR *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  unsigned int v38; // eax
  struct _ERESOURCE *v39; // rcx
  struct DXGMONITOR *v41; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7060);
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v10 = v5;
  v7[3] = a3;
  v7[4] = a1;
  v7[5] = v5;
  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_13:
    WdLogEvent5_WdError(v11);
    v19 = -1073741811;
    goto LABEL_21;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v15 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v22 = *((_QWORD *)v15 + 285)) == 0 )
    {
      v11 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v11 + 24) = a1;
      goto LABEL_13;
    }
    v23 = *(struct _FAST_MUTEX **)(v22 + 96);
    if ( !v23 )
    {
      v11 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v11 + 24) = v15;
      goto LABEL_13;
    }
    v41 = 0LL;
    v19 = -1073741275;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v23, (unsigned int)v5, 0LL, (ULONG **)&v41);
    if ( MonitorInstance == -1073741275 )
    {
      v29 = WdLogNewEntry5_WdDmmEvent(v25, v24, v27, v28);
      *(_QWORD *)(v29 + 24) = v10;
      *(_QWORD *)(v29 + 32) = v23;
      WdLogEvent5_WdDmmEvent(v29);
    }
    else if ( MonitorInstance >= 0 )
    {
      v31 = v41;
      if ( !v41 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
        WdLogEvent5_WdAssertion(v32);
        v37 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
        WdLogEvent5_WdAssertion(v37);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v31 + 240), 1u);
      v38 = DXGMONITOR::_ReleaseAdditionalTiming(v31, a3);
      v39 = (struct _ERESOURCE *)((char *)v31 + 240);
      v19 = v38;
      ExReleaseResourceLite(v39);
      KeLeaveCriticalRegion();
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v30 + 24) = v10;
      *(_QWORD *)(v30 + 32) = v23;
      WdLogEvent5_WdError(v30);
      v19 = MonitorInstance;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    v19 = -1071775742;
  }
LABEL_21:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 7060);
  return v19;
}

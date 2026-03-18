/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01E5100
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E0C0 (DpiGetDxgAdapter.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01E6428 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::GetAdditionalTiming(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a4)
{
  __int64 v6; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGADAPTER *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _FAST_MUTEX *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int MonitorInstance; // esi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  struct DXGMONITOR *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned int AdditionalTiming; // eax
  struct _ERESOURCE *v40; // rcx
  struct DXGMONITOR *v42; // [rsp+40h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7059);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v11 = v6;
  v8[3] = a1;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 || !a4 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = 0LL;
LABEL_14:
    WdLogEvent5_WdError(v12);
    v20 = -1073741811;
    goto LABEL_22;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v16 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v23 = *((_QWORD *)v16 + 285)) == 0 )
    {
      v12 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v12 + 24) = a1;
      goto LABEL_14;
    }
    v24 = *(struct _FAST_MUTEX **)(v23 + 96);
    if ( !v24 )
    {
      v12 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v12 + 24) = v16;
      goto LABEL_14;
    }
    v42 = 0LL;
    v20 = -1073741275;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v24, (unsigned int)v6, 0LL, (ULONG **)&v42);
    if ( MonitorInstance == -1073741275 )
    {
      v30 = WdLogNewEntry5_WdDmmEvent(v26, v25, v28, v29);
      *(_QWORD *)(v30 + 24) = v11;
      *(_QWORD *)(v30 + 32) = v24;
      WdLogEvent5_WdDmmEvent(v30);
    }
    else if ( MonitorInstance >= 0 )
    {
      v32 = v42;
      if ( !v42 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v26, v25, v28, v29);
        WdLogEvent5_WdAssertion(v33);
        v38 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
        WdLogEvent5_WdAssertion(v38);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v32 + 240), 1u);
      AdditionalTiming = DXGMONITOR::_GetAdditionalTiming(v32, a3, a4);
      v40 = (struct _ERESOURCE *)((char *)v32 + 240);
      v20 = AdditionalTiming;
      ExReleaseResourceLite(v40);
      KeLeaveCriticalRegion();
    }
    else
    {
      v31 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v31 + 24) = v11;
      *(_QWORD *)(v31 + 32) = v24;
      WdLogEvent5_WdError(v31);
      v20 = MonitorInstance;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    v20 = -1071775742;
  }
LABEL_22:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 7059);
  return v20;
}

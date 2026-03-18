/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01FFCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0008BE0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0200C88 (-_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(
        __int64 a1,
        __int64 a2,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a3)
{
  __int64 v4; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v11; // rcx
  DXGADAPTER *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _FAST_MUTEX *v19; // rbx
  __int64 v20; // rcx
  int MonitorInstance; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  struct DXGMONITOR *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // eax
  struct _ERESOURCE *v29; // rcx
  struct DXGMONITOR *v31; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 7060);
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2);
  v8 = v4;
  v6[3] = a3;
  v6[4] = a1;
  v6[5] = v4;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_13:
    WdLogEvent5_WdError(v9);
    v16 = -1073741811;
    goto LABEL_21;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v12 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v18 = *((_QWORD *)v12 + 288)) == 0 )
    {
      v9 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v9 + 24) = a1;
      goto LABEL_13;
    }
    v19 = *(struct _FAST_MUTEX **)(v18 + 96);
    if ( !v19 )
    {
      v9 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v9 + 24) = v12;
      goto LABEL_13;
    }
    v31 = 0LL;
    v16 = -1073741275;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v19, v4, 0, (ULONG **)&v31);
    if ( MonitorInstance == -1073741275 )
    {
      v22 = WdLogNewEntry5_WdDmmEvent(v20);
      *(_QWORD *)(v22 + 24) = v8;
      *(_QWORD *)(v22 + 32) = v19;
      WdLogEvent5_WdDmmEvent(v22);
    }
    else if ( MonitorInstance >= 0 )
    {
      v24 = v31;
      if ( !v31 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v25);
        v27 = WdLogNewEntry5_WdAssertion(v26);
        WdLogEvent5_WdAssertion(v27);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v24 + 280), 1u);
      v28 = DXGMONITOR::_ReleaseAdditionalTiming(v24, a3);
      v29 = (struct _ERESOURCE *)((char *)v24 + 280);
      v16 = v28;
      ExReleaseResourceLite(v29);
      KeLeaveCriticalRegion();
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v23 + 24) = v8;
      *(_QWORD *)(v23 + 32) = v19;
      WdLogEvent5_WdError(v23);
      v16 = MonitorInstance;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    v16 = -1071775742;
  }
LABEL_21:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 7060);
  return v16;
}

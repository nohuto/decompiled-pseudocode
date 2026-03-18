/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01FF760
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiGetDxgAdapter @ 0x1C0008BE0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0200BA0 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::GetAdditionalTiming(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a4)
{
  __int64 v6; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  DXGADAPTER *DxgAdapter; // rax
  __int64 v13; // rcx
  DXGADAPTER *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
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
  unsigned int AdditionalTiming; // eax
  struct _ERESOURCE *v31; // rcx
  struct DXGMONITOR *v33; // [rsp+40h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 7059);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2);
  v10 = v6;
  v8[3] = a1;
  v8[4] = v6;
  v8[5] = a3;
  v8[6] = a4;
  if ( !a3 || !a4 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_14:
    WdLogEvent5_WdError(v11);
    v18 = -1073741811;
    goto LABEL_22;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v14 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) || (v20 = *((_QWORD *)v14 + 288)) == 0 )
    {
      v11 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v11 + 24) = a1;
      goto LABEL_14;
    }
    v21 = *(struct _FAST_MUTEX **)(v20 + 96);
    if ( !v21 )
    {
      v11 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v11 + 24) = v14;
      goto LABEL_14;
    }
    v33 = 0LL;
    v18 = -1073741275;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v21, v6, 0, (ULONG **)&v33);
    if ( MonitorInstance == -1073741275 )
    {
      v24 = WdLogNewEntry5_WdDmmEvent(v22);
      *(_QWORD *)(v24 + 24) = v10;
      *(_QWORD *)(v24 + 32) = v21;
      WdLogEvent5_WdDmmEvent(v24);
    }
    else if ( MonitorInstance >= 0 )
    {
      v26 = v33;
      if ( !v33 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v27);
        v29 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v29);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v26 + 280), 1u);
      AdditionalTiming = DXGMONITOR::_GetAdditionalTiming(v26, a3, a4);
      v31 = (struct _ERESOURCE *)((char *)v26 + 280);
      v18 = AdditionalTiming;
      ExReleaseResourceLite(v31);
      KeLeaveCriticalRegion();
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v25 + 24) = v10;
      *(_QWORD *)(v25 + 32) = v21;
      WdLogEvent5_WdError(v25);
      v18 = MonitorInstance;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    v18 = -1071775742;
  }
LABEL_22:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, 7059);
  return v18;
}

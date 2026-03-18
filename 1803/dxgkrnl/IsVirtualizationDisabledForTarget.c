/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1C00B7644
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AB090 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AF75C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00C20F4 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D7B0C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00D85B4 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     _lambda_9701550c22e6dfba19810e7e8a87dbd3_::operator() @ 0x1C010FCA0 (_lambda_9701550c22e6dfba19810e7e8a87dbd3_--operator().c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01C7A90 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0227C18 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0228370 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C0229D54 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00B81F0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(DXGADAPTER *this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  MONITOR_MGR *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ebx
  bool v19; // si
  int MonitorInstance; // eax
  __int64 v21; // rax
  char v22; // di
  __int64 v23; // rax
  DXGMONITOR *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  bool IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v28; // rcx
  DXGMONITOR *v29; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( !this || a2 == -1 || !a3 || !a4 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v9 = *((_QWORD *)this + 307);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = 8138LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v13 = *((_QWORD *)this + 307);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v14);
    v13 = *((_QWORD *)this + 307);
  }
  v15 = *(MONITOR_MGR **)(v13 + 96);
  if ( v15 )
  {
    v29 = 0LL;
    v19 = 1;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v15, v4, 1u, &v29);
    v18 = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v21 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v21 + 24) = v4;
      *(_QWORD *)(v21 + 32) = this;
      WdLogEvent5_WdDmmEvent(v21);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v24 = v29;
        if ( !v29 || *((_DWORD *)v29 + 108) != 1 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v17);
          WdLogEvent5_WdAssertion(v25);
        }
        if ( !v24 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v17);
          WdLogEvent5_WdAssertion(v26);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v24 + 296), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v24);
        v28 = (struct _ERESOURCE *)((char *)v24 + 296);
        v22 = IsVirtualModeSuportDisabled;
        ExReleaseResourceLite(v28);
        KeLeaveCriticalRegion();
        v18 = 0;
        goto LABEL_26;
      }
      if ( MonitorInstance != -1073741632 )
      {
        v22 = (char)v29;
LABEL_18:
        if ( v18 < 0 )
          goto LABEL_19;
LABEL_26:
        if ( v22 )
        {
          *a3 = 1;
        }
        else
        {
          *a3 = *(_BYTE *)(v9 + 132) == 0;
          v19 = *(_BYTE *)(v9 + 133) == 0;
        }
        *a4 = v19;
        return (unsigned int)v18;
      }
    }
    v22 = 0;
    v18 = 0;
    goto LABEL_18;
  }
  v16 = WdLogNewEntry5_WdError(0LL);
  *(_QWORD *)(v16 + 24) = this;
  WdLogEvent5_WdError(v16);
  v18 = -1073741811;
LABEL_19:
  v23 = WdLogNewEntry5_WdAssertion(v17);
  *(_QWORD *)(v23 + 24) = v18;
  WdLogEvent5_WdAssertion(v23);
  return (unsigned int)v18;
}

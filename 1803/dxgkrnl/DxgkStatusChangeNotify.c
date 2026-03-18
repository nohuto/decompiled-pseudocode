/*
 * XREFs of DxgkStatusChangeNotify @ 0x1C00D7140
 * Callers:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000AC2C (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0030250 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5514 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010A57C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C010DA38 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A4EC (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01930B4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DxgkSetDisplayMode @ 0x1C0194F30 (DxgkSetDisplayMode.c)
 *     DxgkNotifyMonitorChange @ 0x1C01D1204 (DxgkNotifyMonitorChange.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0216514 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C02175C0 (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0qp @ 0x1C000AC5C (McTemplateK0qp.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkStatusChangeNotify(int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 CurrentServerSilo; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  unsigned int updated; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  void *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  int v35; // [rsp+40h] [rbp-10h] BYREF
  __int64 v36; // [rsp+48h] [rbp-8h]
  unsigned int ProcessSessionId; // [rsp+70h] [rbp+20h] BYREF
  unsigned int ActiveConsoleId; // [rsp+78h] [rbp+28h] BYREF
  unsigned int ServerSiloServiceSessionId; // [rsp+80h] [rbp+30h] BYREF

  v36 = 0LL;
  v35 = 2195;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2195);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2195);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
    McTemplateK0qp(v9, v8, v10, *a1);
  v11 = *a1;
  if ( *a1 == 1 )
  {
    v16 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v16 + 24) = ProcessSessionId;
    WdLogEvent5_WdEvent(v16);
    updated = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
    if ( ProcessSessionId == ServerSiloServiceSessionId && ActiveConsoleId != -1 )
    {
      v32 = WdLogNewEntry5_WdEvent(v18, v17);
      *(_QWORD *)(v32 + 24) = ActiveConsoleId;
      WdLogEvent5_WdEvent(v32);
      v23 = &WNF_DX_OCCLUSION_CHANGE_NOTIFICATION;
      goto LABEL_29;
    }
  }
  else
  {
    if ( v11 <= 1 )
      goto LABEL_26;
    if ( v11 <= 6 )
    {
LABEL_9:
      updated = 0;
      goto LABEL_10;
    }
    if ( v11 == 7 )
      goto LABEL_21;
    if ( v11 <= 10 )
      goto LABEL_9;
    if ( v11 == 11 )
    {
LABEL_21:
      v24 = WdLogNewEntry5_WdEvent(v9, v8);
      *(_QWORD *)(v24 + 24) = ProcessSessionId;
      WdLogEvent5_WdEvent(v24);
      updated = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
      if ( ServerSiloServiceSessionId == -1 )
      {
        v26 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v26 + 24) = ProcessSessionId;
LABEL_32:
        WdLogEvent5_WdError(v26);
        goto LABEL_10;
      }
      if ( ServerSiloServiceSessionId != ProcessSessionId )
      {
        v27 = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ServerSiloServiceSessionId, 0, 0);
        v29 = v27;
        if ( v27 < 0 )
        {
          v26 = WdLogNewEntry5_WdError(v28);
          v30 = ServerSiloServiceSessionId;
LABEL_31:
          *(_QWORD *)(v26 + 24) = v30;
          *(_QWORD *)(v26 + 32) = v29;
          goto LABEL_32;
        }
      }
      goto LABEL_10;
    }
    if ( v11 != 12 )
    {
LABEL_26:
      v31 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v31 + 24) = *a1;
      WdLogEvent5_WdAssertion(v31);
      updated = -1073741637;
      goto LABEL_10;
    }
    v19 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v19 + 24) = ProcessSessionId;
    WdLogEvent5_WdEvent(v19);
    updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
    if ( ProcessSessionId != ActiveConsoleId && ActiveConsoleId != -1 )
    {
      v22 = WdLogNewEntry5_WdEvent(v21, v20);
      *(_QWORD *)(v22 + 24) = ActiveConsoleId;
      WdLogEvent5_WdEvent(v22);
      v23 = &WNF_DX_MONITOR_CHANGE_NOTIFICATION;
LABEL_29:
      v33 = ZwUpdateWnfStateData(v23, 0LL, 0LL, 0LL, &ActiveConsoleId, 0, 0);
      v29 = v33;
      if ( v33 >= 0 )
        goto LABEL_10;
      v26 = WdLogNewEntry5_WdError(v34);
      v30 = ActiveConsoleId;
      goto LABEL_31;
    }
  }
LABEL_10:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v35);
  return updated;
}

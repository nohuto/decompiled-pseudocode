/*
 * XREFs of DxgkStatusChangeNotify @ 0x1C00E85B0
 * Callers:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000D69C (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00925C8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00AE718 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD780 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkSetDisplayMode @ 0x1C00E6690 (DxgkSetDisplayMode.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C01039CC (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0103AAC (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019CDA0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     McTemplateK0qp @ 0x1C000D6CC (McTemplateK0qp.c)
 */

__int64 __fastcall DxgkStatusChangeNotify(int *a1, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 CurrentServerSilo; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int updated; // edi
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  unsigned int ProcessSessionId; // [rsp+60h] [rbp+20h] BYREF
  unsigned int ServerSiloServiceSessionId; // [rsp+68h] [rbp+28h] BYREF
  unsigned int ActiveConsoleId; // [rsp+70h] [rbp+30h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
    McTemplateK0qp(v6, v5, v7, *a1);
  v9 = *a1;
  if ( *a1 != 1 )
  {
    if ( v9 > 1 )
    {
      if ( v9 <= 6 )
        return 0;
      if ( v9 == 7 )
        goto LABEL_9;
      if ( v9 <= 10 )
        return 0;
      if ( v9 == 11 )
      {
LABEL_9:
        v10 = WdLogNewEntry5_WdEvent(v6, v5, v7, v8);
        *(_QWORD *)(v10 + 24) = ProcessSessionId;
        WdLogEvent5_WdEvent(v10);
        updated = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
        if ( ServerSiloServiceSessionId == -1 )
        {
          v13 = WdLogNewEntry5_WdError(v11);
          v14 = ProcessSessionId;
LABEL_21:
          *(_QWORD *)(v13 + 24) = v14;
          WdLogEvent5_WdError(v13);
          return updated;
        }
        if ( ServerSiloServiceSessionId != ProcessSessionId )
        {
          v15 = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ServerSiloServiceSessionId, 0, 0);
          v17 = v15;
          if ( v15 < 0 )
          {
            v13 = WdLogNewEntry5_WdError(v16);
            v14 = ServerSiloServiceSessionId;
LABEL_20:
            *(_QWORD *)(v13 + 32) = v17;
            goto LABEL_21;
          }
        }
        return updated;
      }
    }
    v18 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v18 + 24) = *a1;
    WdLogEvent5_WdAssertion(v18);
    return (unsigned int)-1073741637;
  }
  v19 = WdLogNewEntry5_WdEvent(v6, v5, v7, v8);
  *(_QWORD *)(v19 + 24) = ProcessSessionId;
  WdLogEvent5_WdEvent(v19);
  updated = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
  if ( ProcessSessionId == ServerSiloServiceSessionId && ActiveConsoleId != -1 )
  {
    v24 = WdLogNewEntry5_WdEvent(v21, v20, v22, v23);
    *(_QWORD *)(v24 + 24) = ActiveConsoleId;
    WdLogEvent5_WdEvent(v24);
    v25 = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ActiveConsoleId, 0, 0);
    v17 = v25;
    if ( v25 < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v26);
      v14 = ActiveConsoleId;
      goto LABEL_20;
    }
  }
  return updated;
}

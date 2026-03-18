/*
 * XREFs of DxgkStatusChangeNotify @ 0x1C0098C20
 * Callers:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0001CA8 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     DxgkSetDisplayMode @ 0x1C0096EF0 (DxgkSetDisplayMode.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BF7F0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E8F04 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C01037BC (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010388C (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018750C (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     Template_qp @ 0x1C0001CD8 (Template_qp.c)
 */

__int64 __fastcall DxgkStatusChangeNotify(int *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // edi
  unsigned int ActiveConsoleId; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int updated; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned int ProcessSessionId; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+58h] [rbp+10h] BYREF

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
    Template_qp((__int64)a1, a2, a3, *a1);
  CurrentProcess = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
  ActiveConsoleId = RtlGetActiveConsoleId();
  v11 = (unsigned int)*a1;
  v24 = ActiveConsoleId;
  if ( (_DWORD)v11 != 1 )
  {
    if ( (int)v11 > 1 )
    {
      if ( (int)v11 <= 6 )
        return 0;
      if ( (_DWORD)v11 == 7 )
      {
LABEL_9:
        v12 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v12 + 24) = ProcessSessionId;
        WdLogEvent5_WdEvent(v12);
        return (unsigned int)ZwUpdateWnfStateData(
                               &WNF_DX_MODE_CHANGE_NOTIFICATION,
                               0LL,
                               0LL,
                               0LL,
                               &ProcessSessionId,
                               0,
                               0);
      }
      if ( (int)v11 <= 10 )
        return 0;
      if ( (_DWORD)v11 == 11 )
        goto LABEL_9;
    }
    v14 = WdLogNewEntry5_WdAssertion(v11, v8, v9, v10);
    *(_QWORD *)(v14 + 24) = *a1;
    WdLogEvent5_WdAssertion(v14);
    return (unsigned int)-1073741637;
  }
  v15 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v15 + 24) = ProcessSessionId;
  WdLogEvent5_WdEvent(v15);
  updated = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
  if ( ProcessSessionId == ServerSiloServiceSessionId && v24 != -1 )
  {
    v16 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v16 + 24) = v24;
    WdLogEvent5_WdEvent(v16);
    v17 = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &v24, 0, 0);
    v20 = v17;
    if ( v17 < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v21 + 24) = v24;
      *(_QWORD *)(v21 + 32) = v20;
      WdLogEvent5_WdError(v21);
    }
  }
  return updated;
}

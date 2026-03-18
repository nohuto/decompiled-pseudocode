/*
 * XREFs of DxgkWriteDiagEntry @ 0x1C00F2CA0
 * Callers:
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003EF40 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C003F900 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004025C (DxgkMiracastStartMiracastSession.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C008CE40 (DxgkInvalidateMonitorConnections.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00A100C (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00A97C4 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C00AD4B0 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C00E5D70 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00EDF8C (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0112120 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoIsChildConnected @ 0x1C01124D0 (DpiPdoIsChildConnected.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0119220 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPnpEnableVga @ 0x1C012220C (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C0122FF4 (DpiPnpNotifyGdi.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017296C (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01794F8 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C019148C (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0194584 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C019823C (-SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01A9568 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C01C3C10 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01C4A2C (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x1C01C7170 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DpiMiracastHandlePowerCallback @ 0x1C01C7850 (DpiMiracastHandlePowerCallback.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01C7A04 (DpiMiracastHandleStartSessionDone.c)
 *     DxgkHandleMiracastEscape @ 0x1C01C8674 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01C8D84 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C01C9600 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C01CC140 (DpiAcpiHandleAcpiEvent.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01D2528 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C01D26A8 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C04C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGGLOBAL *v10; // rsi
  DXGPUSHLOCK *v11; // rdi
  __int64 v12; // rcx
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  DXGDIAGNOSTICS *v15; // rcx
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v24; // [rsp+28h] [rbp-20h]
  int v25; // [rsp+30h] [rbp-18h]
  __int64 v26; // [rsp+50h] [rbp+8h]

  if ( !a1 || !*((_DWORD *)a1 + 1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 6917LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a1 && *((_DWORD *)a1 + 1) >= 0x30u )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
    v10 = Global;
    if ( Global )
    {
      v11 = (struct DXGGLOBAL *)((char *)Global + 544);
      v24 = (char *)Global + 544;
      if ( Global != (struct DXGGLOBAL *)-544LL && *((struct _KTHREAD **)Global + 69) == KeGetCurrentThread() )
      {
        v20 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
        *(_QWORD *)(v20 + 24) = 1167LL;
        WdLogEvent5_WdAssertion(v20);
      }
      DXGPUSHLOCK::AcquireExclusive(v11);
      v25 = 2;
      CurrentProcess = PsGetCurrentProcess(v12);
      *((_OWORD *)a1 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
      *((_QWORD *)a1 + 4) = PsGetCurrentThreadId();
      v26 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)a1 + 1) = v26 * KeQueryTimeIncrement();
      v15 = (DXGDIAGNOSTICS *)*((_QWORD *)v10 + 71);
      if ( v15 )
      {
        v16 = DXGDIAGNOSTICS::WriteDiagnosticEntry(v15, a1);
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(0LL, v14);
        *(_QWORD *)(v21 + 24) = a1;
        *(_QWORD *)(v21 + 32) = v10;
        WdLogEvent5_WdError(v21);
        v16 = -1073741436;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
      return v16;
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v19 + 24) = a1;
      WdLogEvent5_WdError(v19);
      return 3221225860LL;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v22 + 24) = a1;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
}

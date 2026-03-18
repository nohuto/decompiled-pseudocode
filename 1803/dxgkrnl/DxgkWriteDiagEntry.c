/*
 * XREFs of DxgkWriteDiagEntry @ 0x1C00C3130
 * Callers:
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003DBB0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C003E500 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C003EE7C (DxgkMiracastStartMiracastSession.c)
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00B2F88 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00B685C (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00BAA4C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00C42C8 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00C44F0 (DxgkInvalidateMonitorConnections.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00C479C (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C00C59B4 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0156FCC (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C015D75C (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C0162E58 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C01986E8 (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C019BD14 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C01A8340 (-SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01C50F8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C01F4850 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01F6374 (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F7D20 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 *     DpiPnpEnableVga @ 0x1C01FDF14 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C01FE050 (DpiPnpNotifyGdi.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x1C01FEC40 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DpiMiracastHandlePowerCallback @ 0x1C01FF370 (DpiMiracastHandlePowerCallback.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01FF524 (DpiMiracastHandleStartSessionDone.c)
 *     DxgkHandleMiracastEscape @ 0x1C0200168 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0200994 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C0201370 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02073D4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C020C6BC (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoIsChildConnected @ 0x1C020D164 (DpiPdoIsChildConnected.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C0214394 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C0214520 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0007670 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *a1)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  struct DXGGLOBAL *v4; // rdi
  __int64 CurrentProcess; // rax
  DXGDIAGNOSTICS *v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp+8h]

  if ( !a1 || !*((_DWORD *)a1 + 1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v9 + 24) = 7144LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a1 && *((_DWORD *)a1 + 1) >= 0x30u )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v4 = Global;
    if ( Global )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)Global + 69, 0);
      DXGPUSHLOCK::AcquireExclusive(v14);
      v15 = 2;
      CurrentProcess = PsGetCurrentProcess();
      *((_OWORD *)a1 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
      *((_QWORD *)a1 + 4) = PsGetCurrentThreadId();
      v16 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)a1 + 1) = v16 * KeQueryTimeIncrement();
      v6 = (DXGDIAGNOSTICS *)*((_QWORD *)v4 + 72);
      if ( v6 )
      {
        v7 = DXGDIAGNOSTICS::WriteDiagnosticEntry(v6, a1);
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v11 + 24) = a1;
        *(_QWORD *)(v11 + 32) = v4;
        WdLogEvent5_WdError(v11);
        v7 = -1073741436;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      return v7;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v10 + 24) = a1;
      WdLogEvent5_WdError(v10);
      return 3221225860LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
}

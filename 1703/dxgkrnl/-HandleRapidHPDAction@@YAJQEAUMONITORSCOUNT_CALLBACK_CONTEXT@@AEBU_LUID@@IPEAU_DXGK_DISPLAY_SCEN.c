/*
 * XREFs of ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AAB1C
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01A9568 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     DxgkInvalidateMonitorConnections @ 0x1C008CE40 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008CF3C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A8FD8 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 */

__int64 __fastcall HandleRapidHPDAction(
        struct MONITORSCOUNT_CALLBACK_CONTEXT *const a1,
        struct _LUID *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  char v17; // [rsp+50h] [rbp+8h] BYREF

  v8 = DxgkInvalidateMonitorConnections(2uLL);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdEvent(v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdEvent(v11);
  }
  *((_DWORD *)a1 + 8) |= 0x10u;
  v17 = 0;
  if ( (int)DisplayConfigHelperCreateSimulateMonitor(a2, a3, 3LL, 0LL, (__int64)&v17, (__int64)a4) >= 0 )
    *((_BYTE *)a1 + 25) = 0;
  v12 = DisplayConfigHandleMonitorInvalidation(1LL, a1, a4);
  v14 = v12;
  if ( v12 < 0 )
  {
    v15 = WdLogNewEntry5_WdEvent(v13);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdEvent(v15);
    LODWORD(v14) = 0;
  }
  return (unsigned int)v14;
}

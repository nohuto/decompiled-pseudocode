/*
 * XREFs of ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4928
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01028B0 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     DxgkInvalidateMonitorConnections @ 0x1C00FBDA0 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00FBEA0 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3968 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 */

__int64 __fastcall HandleRapidHPDAction(
        struct MONITORSCOUNT_CALLBACK_CONTEXT *const a1,
        struct _LUID *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int8 v23; // [rsp+50h] [rbp+8h] BYREF

  v8 = DxgkInvalidateMonitorConnections(2uLL);
  v13 = v8;
  if ( v8 < 0 )
  {
    v14 = WdLogNewEntry5_WdEvent(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdEvent(v14);
  }
  *((_DWORD *)a1 + 8) |= 0x10u;
  v23 = 0;
  if ( (int)DisplayConfigHelperCreateSimulateMonitor(a2, a3, 3, 0, &v23, (__int64)a4) >= 0 )
    *((_BYTE *)a1 + 25) = 0;
  v15 = DisplayConfigHandleMonitorInvalidation(1LL, a1, a4);
  v20 = v15;
  if ( v15 < 0 )
  {
    v21 = WdLogNewEntry5_WdEvent(v17, v16, v18, v19);
    *(_QWORD *)(v21 + 24) = v20;
    WdLogEvent5_WdEvent(v21);
    LODWORD(v20) = 0;
  }
  return (unsigned int)v20;
}

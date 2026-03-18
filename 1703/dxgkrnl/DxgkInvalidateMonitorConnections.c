/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1C008CE40
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C008CD60 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AA74C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AAB1C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01AB420 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008CF3C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(unsigned __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v9; // rax
  _QWORD v10[12]; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v11[8]; // [rsp+80h] [rbp+7h] BYREF

  memset(v11, 0, sizeof(v11));
  EtwActivityIdControl(3u, (LPGUID)&v11[1]);
  v11[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v11[3]) = 37;
  v2 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v2 + 24) = a1;
  WdLogEvent5_WdEvent(v2);
  if ( (a1 & 1) == 0 && (a1 & 2) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    *(_QWORD *)(v9 + 24) = 3438LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v7 = DisplayConfigHandleMonitorInvalidation(a1, 0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v11);
  memset(v10, 0, sizeof(v10));
  LODWORD(v10[6]) |= 2u;
  memset(&v10[1], 0, 36);
  v10[0] = 0x6000000002LL;
  v10[7] = a1;
  LODWORD(v10[10]) = v7;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v10);
  return v7;
}

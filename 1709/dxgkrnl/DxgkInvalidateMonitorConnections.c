/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1C00FBDA0
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C00FBCB0 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4554 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4928 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01C4FE0 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00FBEA0 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // rax
  _QWORD v11[12]; // [rsp+20h] [rbp-69h] BYREF
  _QWORD v12[10]; // [rsp+80h] [rbp-9h] BYREF

  memset(v12, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v12[1]);
  v12[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v12[3]) = 37;
  LOBYTE(v12[6]) = -1;
  v6 = WdLogNewEntry5_WdEvent(v3, v2, v4, v5);
  *(_QWORD *)(v6 + 24) = a1;
  WdLogEvent5_WdEvent(v6);
  if ( (a1 & 1) == 0 && (a1 & 2) == 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 2830LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v8 = DisplayConfigHandleMonitorInvalidation(a1, 0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v12);
  memset(v11, 0, sizeof(v11));
  LODWORD(v11[6]) |= 2u;
  memset(&v11[1], 0, 36);
  v11[0] = 0x6000000002LL;
  v11[7] = a1;
  LODWORD(v11[10]) = v8;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11);
  return v8;
}

/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1C00C44F0
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C00C4F60 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C67BC (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C6B98 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01C7430 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C462C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-79h] BYREF
  __int64 v14; // [rsp+28h] [rbp-71h]
  _QWORD v15[12]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v16[10]; // [rsp+90h] [rbp-9h] BYREF

  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v14 = 0LL;
  v16[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[3]) = 37;
  LOBYTE(v16[6]) = -1;
  v13 = 2165;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2165);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2165);
  v6 = WdLogNewEntry5_WdEvent(v5, v4);
  *(_QWORD *)(v6 + 24) = a1;
  WdLogEvent5_WdEvent(v6);
  if ( (a1 & 1) == 0 && (a1 & 2) == 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v12 + 24) = 2859LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v8 = DisplayConfigHandleMonitorInvalidation(a1, 0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v16);
  memset(v15, 0, sizeof(v15));
  LODWORD(v15[6]) |= 2u;
  memset(&v15[1], 0, 36);
  v15[0] = 0x6000000002LL;
  v15[7] = a1;
  LODWORD(v15[10]) = v8;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v13);
  return v8;
}

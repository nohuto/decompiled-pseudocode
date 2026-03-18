/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C00C4F60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C00084B0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C0016AC0 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00C44F0 (DxgkInvalidateMonitorConnections.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  int v2; // ebx
  __int64 v3; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v14[2]; // [rsp+20h] [rbp-29h] BYREF
  int v15; // [rsp+30h] [rbp-19h] BYREF
  __int64 v16; // [rsp+38h] [rbp-11h]
  _QWORD v17[10]; // [rsp+40h] [rbp-9h] BYREF

  memset(v17, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v16 = 0LL;
  v17[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 38;
  LOBYTE(v17[6]) = -1;
  v15 = 2173;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v0, &EventProfilerEnter, v1, 2173);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2173);
  v2 = 0;
  Global = DXGGLOBAL::GetGlobal(v3);
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5, v7, v8) + 24) = 7090LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5, v7, v8) + 24) = 7094LL;
    v14[0] = 0LL;
    v14[1] = v17;
    v10 = DXGGLOBAL::GetGlobal(v9);
    v2 = DXGGLOBAL::IterateAdaptersWithCallback(v10, CompleteTopologyTransitionCallback, v14, 1LL);
    if ( v2 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(v14);
  }
  DxgkInvalidateMonitorConnections(1uLL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v15);
  return (unsigned int)v2;
}

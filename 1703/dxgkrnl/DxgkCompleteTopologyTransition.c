/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C008CD60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0001320 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C00071C4 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C008CE40 (DxgkInvalidateMonitorConnections.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  int v0; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGGLOBAL *v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v11[8]; // [rsp+30h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  EtwActivityIdControl(3u, (LPGUID)&v11[1]);
  v0 = 0;
  v11[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v11[3]) = 38;
  Global = DXGGLOBAL::GetGlobal();
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0LL, v2, v3) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = 6863LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = 6867LL;
    v10[0] = 0LL;
    v10[1] = v11;
    v8 = DXGGLOBAL::GetGlobal();
    v0 = DXGGLOBAL::IterateAdaptersWithCallback(v8, CompleteTopologyTransitionCallback, v10, 1LL);
    if ( v0 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(v10);
  }
  DxgkInvalidateMonitorConnections(1uLL);
  return (unsigned int)v0;
}

/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C00FBCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C0003074 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000F410 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00FBDA0 (DxgkInvalidateMonitorConnections.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  int v0; // ebx
  __int64 v1; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGGLOBAL *v6; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v9[10]; // [rsp+30h] [rbp-68h] BYREF

  memset(v9, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v9[1]);
  v0 = 0;
  v9[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v9[3]) = 38;
  LOBYTE(v9[6]) = -1;
  Global = DXGGLOBAL::GetGlobal(v1);
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, v3) + 24) = 6878LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, v3) + 24) = 6882LL;
    v8[0] = 0LL;
    v8[1] = v9;
    v6 = DXGGLOBAL::GetGlobal(v5);
    v0 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)v6,
           (__int64 (__fastcall *)(_QWORD *, __int64))CompleteTopologyTransitionCallback,
           (__int64)v8,
           1);
    if ( v0 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(v8);
  }
  DxgkInvalidateMonitorConnections(1uLL);
  return (unsigned int)v0;
}

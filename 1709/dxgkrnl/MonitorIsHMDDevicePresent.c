/*
 * XREFs of MonitorIsHMDDevicePresent @ 0x1C00F5E8C
 * Callers:
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00BA510 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00F5D08 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C010FBDC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C017FD10 (DxgkIsMonitorConnected.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsHMDDevicePresent(struct HDXGMONITOR__ *a1, _BYTE *a2, _BYTE *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  struct DXGMONITOR *v7; // rbx
  BOOL v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  struct DXGMONITOR *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v14 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v14);
  if ( (int)result >= 0 )
  {
    v7 = v14;
    if ( !v14 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v10);
      v12 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v12);
    }
    KeEnterCriticalRegion();
    v8 = 1;
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v7 + 280), 1u);
    if ( *((_DWORD *)v7 + 104) != 1 )
      v8 = *((_BYTE *)v7 + 564) == 0;
    if ( !v8 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v13);
    }
    *a2 = *((_BYTE *)v7 + 564);
    if ( a3 )
      *a3 = *((_BYTE *)v7 + 565);
    ExReleaseResourceLite((PERESOURCE)((char *)v7 + 280));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}

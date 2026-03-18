/*
 * XREFs of MonitorGetUsageClass @ 0x1C00D9C08
 * Callers:
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00D9A58 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C0167570 (DxgkIsMonitorConnected.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0215AC0 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetUsageClass(struct HDXGMONITOR__ *a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rbx
  BOOL v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  struct DXGMONITOR *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v12 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v12);
  if ( (int)result >= 0 )
  {
    v5 = v12;
    if ( !v12 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v8);
      v10 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v10);
    }
    KeEnterCriticalRegion();
    v6 = 1;
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v5 + 296), 1u);
    if ( *((_DWORD *)v5 + 108) != 1 )
      v6 = *((_DWORD *)v5 + 145) == 0;
    if ( !v6 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v11);
    }
    *a2 = *((_DWORD *)v5 + 145);
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}

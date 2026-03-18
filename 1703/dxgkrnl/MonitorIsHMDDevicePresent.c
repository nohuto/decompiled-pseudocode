/*
 * XREFs of MonitorIsHMDDevicePresent @ 0x1C00ADEB8
 * Callers:
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0099E20 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00ADF6C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0113970 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C017C350 (DxgkIsMonitorConnected.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsHMDDevicePresent(struct HDXGMONITOR__ *a1, _BYTE *a2, _BYTE *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGMONITOR *v11; // rbx
  BOOL v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  struct DXGMONITOR *v24; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v24 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v24, (__int64)a3, a4);
  if ( (int)result >= 0 )
  {
    v11 = v24;
    if ( !v24 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v17);
      v22 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
      WdLogEvent5_WdAssertion(v22);
    }
    KeEnterCriticalRegion();
    v12 = 1;
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 240), 1u);
    if ( *((_DWORD *)v11 + 94) != 1 )
      v12 = *((_BYTE *)v11 + 524) == 0;
    if ( !v12 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      WdLogEvent5_WdAssertion(v23);
    }
    *a2 = *((_BYTE *)v11 + 524);
    if ( a3 )
      *a3 = *((_BYTE *)v11 + 525);
    ExReleaseResourceLite((PERESOURCE)((char *)v11 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}

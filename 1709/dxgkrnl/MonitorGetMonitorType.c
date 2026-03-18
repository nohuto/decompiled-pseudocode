/*
 * XREFs of MonitorGetMonitorType @ 0x1C00E44B0
 * Callers:
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00B076C (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B5770 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00BA510 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00E4428 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01C4FE0 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorType(DXGADAPTER *this, struct HDXGMONITOR__ *a2, _DWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  struct DXGMONITOR *v15; // [rsp+30h] [rbp+8h] BYREF

  v6 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || !a2 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_QWORD *)this + 288) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !*(_QWORD *)(*((_QWORD *)this + 288) + 96LL) )
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v15 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a2, &v15);
  if ( (int)result >= 0 )
  {
    v10 = v15;
    if ( !v15 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v14);
    }
    *a3 = *((_DWORD *)v10 + 104);
    return 0LL;
  }
  return result;
}

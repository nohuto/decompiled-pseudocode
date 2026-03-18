/*
 * XREFs of MonitorGetMonitorType @ 0x1C00C689C
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AF490 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00BA524 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00C6814 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01C7430 (DxgkHandleForceProjectionMonitor.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01C7A90 (DxgkQueryMonitorTypeLockHeld.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorGetMonitorType(DXGADAPTER *this, struct HDXGMONITOR__ *a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  struct DXGMONITOR *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  struct DXGMONITOR *v17; // [rsp+30h] [rbp+8h] BYREF

  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || !a2 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v13);
  }
  v9 = *((_QWORD *)this + 307);
  if ( !v9 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v14);
    v9 = *((_QWORD *)this + 307);
  }
  if ( !*(_QWORD *)(v9 + 96) )
  {
    v15 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v17 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a2, &v17);
  if ( (int)result >= 0 )
  {
    v12 = v17;
    if ( !v17 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v16);
    }
    *a3 = *((_DWORD *)v12 + 108);
    return 0LL;
  }
  return result;
}

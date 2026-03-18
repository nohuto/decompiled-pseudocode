/*
 * XREFs of MonitorGetMonitorType @ 0x1C00F0468
 * Callers:
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0099E20 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00AC144 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F00F4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F8220 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01AB420 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorType(DXGADAPTER *this, struct HDXGMONITOR__ *a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGMONITOR *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || !a2 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*((_QWORD *)this + 285) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !*(_QWORD *)(*((_QWORD *)this + 285) + 96LL) )
  {
    v20 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  v22 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a2, &v22, v10, v11);
  if ( (int)result >= 0 )
  {
    v17 = v22;
    if ( !v22 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      WdLogEvent5_WdAssertion(v21);
    }
    *a3 = *((_DWORD *)v17 + 94);
    return 0LL;
  }
  return result;
}

/*
 * XREFs of MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00F6190
 * Callers:
 *     ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F60D0 (-DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B110C (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 */

__int64 __fastcall MonitorDestroyAllSameTypeSimulatedMonitor(PERESOURCE *this, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  v5 = (int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = v5;
  if ( !this || (_DWORD)v5 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v12);
  }
  result = (__int64)this[288];
  if ( result )
  {
    v11 = *(_QWORD *)(result + 96);
    if ( v11 )
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v11, v5, a4, a3);
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  return result;
}

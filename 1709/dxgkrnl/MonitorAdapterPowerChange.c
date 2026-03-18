/*
 * XREFs of MonitorAdapterPowerChange @ 0x1C0101C8C
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0100CC8 (DpiFdoSetAdapterPowerState.c)
 *     DpiPowerArbiterThread @ 0x1C0121B80 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B110C (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 */

__int64 __fastcall MonitorAdapterPowerChange(PERESOURCE *this, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v9);
  }
  result = (__int64)this[288];
  if ( result )
  {
    v7 = *(_QWORD *)(result + 96);
    if ( v7 )
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v7, 3, 1, a3);
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  return result;
}

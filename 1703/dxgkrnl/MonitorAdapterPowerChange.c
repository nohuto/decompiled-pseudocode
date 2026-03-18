/*
 * XREFs of MonitorAdapterPowerChange @ 0x1C0102804
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0102954 (DpiFdoSetAdapterPowerState.c)
 *     DpiPowerArbiterThread @ 0x1C0122680 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EA100 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 */

__int64 __fastcall MonitorAdapterPowerChange(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v13);
  }
  result = (__int64)this[285];
  if ( result )
  {
    v11 = *(_QWORD *)(result + 96);
    if ( v11 )
    {
      LOBYTE(v8) = 1;
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v11, 3LL, v8, a3);
    }
    v12 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  return result;
}

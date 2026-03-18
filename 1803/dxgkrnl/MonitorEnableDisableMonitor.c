/*
 * XREFs of MonitorEnableDisableMonitor @ 0x1C022DD90
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01FC280 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BAB80 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall MonitorEnableDisableMonitor(
        PERESOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v6; // si
  __int64 v7; // rbp
  _QWORD *v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  PERESOURCE v13; // rax
  __int64 v14; // rax
  unsigned __int8 *SpinLock; // rcx
  __int64 v16; // rax

  v6 = a3;
  v7 = (unsigned int)a2;
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v9[5] = 2LL;
  v9[4] = this;
  v9[3] = v7;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = this[307];
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v14);
    v13 = this[307];
  }
  SpinLock = (unsigned __int8 *)v13->SpinLock;
  if ( !SpinLock )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  return MONITOR_MGR::_EnableDisableMonitor(SpinLock, v7, v6, 2u, a5, a6);
}

/*
 * XREFs of MonitorEnableDisableMonitor @ 0x1C0104184
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C0103C58 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0F08 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall MonitorEnableDisableMonitor(
        PERESOURCE *this,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int8 *SpinLock; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v7 = (unsigned int)a2;
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v9[5] = 2LL;
  v9[4] = this;
  v9[3] = v7;
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v14);
    }
    if ( !this[288] )
    {
      v15 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v15);
    }
    SpinLock = (unsigned __int8 *)this[288]->SpinLock;
    if ( SpinLock )
      return MONITOR_MGR::_EnableDisableMonitor(SpinLock, v7, a3, 2u, a5, a6);
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
  }
  return 3221225485LL;
}

/*
 * XREFs of MonitorEnableDisableMonitor @ 0x1C01046BC
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C0103FE8 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9EEC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
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
  __int64 v7; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *SpinLock; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v6 = a3;
  v7 = (unsigned int)a2;
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v9[5] = 2LL;
  v9[4] = this;
  v9[3] = v7;
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v17);
    }
    if ( !this[285] )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v18);
    }
    SpinLock = (char *)this[285]->SpinLock;
    if ( SpinLock )
      return MONITOR_MGR::_EnableDisableMonitor(SpinLock, v7, v6, 2u, a5, a6);
    v16 = WdLogNewEntry5_WdError(0LL, v10);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
  }
  return 3221225485LL;
}

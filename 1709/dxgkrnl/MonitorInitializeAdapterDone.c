/*
 * XREFs of MonitorInitializeAdapterDone @ 0x1C0122BE0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DE84 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorInitializeAdapterDone(PERESOURCE *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  MONITOR_MGR *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v8);
  }
  result = (__int64)this[288];
  if ( result )
  {
    v6 = *(MONITOR_MGR **)(result + 96);
    if ( v6 )
      return MONITOR_MGR::_OnAdapterInitializationDone(v6, a2);
    v7 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v7 + 24) = this;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  return result;
}

/*
 * XREFs of MonitorInitializeAdapterDone @ 0x1C022E4F0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022CCAC (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorInitializeAdapterDone(
        PERESOURCE *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  MONITOR_MGR *v11; // rcx
  __int64 v12; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v10);
  }
  result = (__int64)this[307];
  if ( result )
  {
    v11 = *(MONITOR_MGR **)(result + 96);
    if ( !v11 )
    {
      v12 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v12 + 24) = this;
      WdLogEvent5_WdError(v12);
      return 3221225485LL;
    }
    return MONITOR_MGR::_OnAdapterInitializationDone(v11, a2, v8, v9);
  }
  return result;
}

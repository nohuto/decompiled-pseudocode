/*
 * XREFs of ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0201918
 * Callers:
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0201980 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverDeparture(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( (*((_BYTE *)this + 24) & 1) == 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_DWORD *)this + 104) != 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v6);
  }
  return 0LL;
}

/*
 * XREFs of ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C00140D4
 * Callers:
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00D22DC (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0109620 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

struct ADAPTER_DISPLAY *__fastcall MONITOR_MGR::_GetDisplayCoreFromMonitor(struct HDXGMONITOR__ *a1)
{
  __int64 v2; // rcx
  struct DXGMONITOR *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  struct DXGMONITOR *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v5);
  }
  v9 = 0LL;
  MONITOR_MGR::_GetMonitorFromHandle(a1, &v9);
  v3 = v9;
  if ( !v9 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_QWORD *)v3 + 2) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*(_QWORD *)(*((_QWORD *)v3 + 2) + 8LL) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v8);
  }
  return *(struct ADAPTER_DISPLAY **)(*((_QWORD *)v3 + 2) + 8LL);
}

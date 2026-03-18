/*
 * XREFs of ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C0046EEC
 * Callers:
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00AE384 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C023B1DC (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

struct ADAPTER_DISPLAY *__fastcall MONITOR_MGR::_GetDisplayCoreFromMonitor(struct HDXGMONITOR__ *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  struct DXGMONITOR *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  struct DXGMONITOR *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v2);
  }
  v10 = 0LL;
  MONITOR_MGR::_GetMonitorFromHandle(a1, &v10);
  v4 = v10;
  if ( !v10 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_QWORD *)v4 + 4);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v7);
    v6 = *((_QWORD *)v4 + 4);
  }
  if ( !*(_QWORD *)(v6 + 8) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v8);
    v6 = *((_QWORD *)v4 + 4);
  }
  return *(struct ADAPTER_DISPLAY **)(v6 + 8);
}

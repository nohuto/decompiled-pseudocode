/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00A72A0
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00A70D0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     MonitorGetNumConnectedMonitor @ 0x1C00A72F8 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00A7368 (MonitorIsUsingSimulatedMonitor.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00A9380 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00AC144 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *this, __int64 a2, unsigned __int8 *a3)
{
  *a3 = 0;
  MonitorIsUsingSimulatedMonitor(this);
  MonitorGetNumConnectedMonitor(this);
  return 0LL;
}

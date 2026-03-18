/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00AC144
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00A72A0 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00ABFC0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C00F0468 (MonitorGetMonitorType.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(DXGADAPTER *this, unsigned int a2, unsigned __int8 *a3)
{
  int MonitorHandle; // ebx
  struct HDXGMONITOR__ *v7; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  MonitorHandle = MonitorGetMonitorHandle(this, a2, 0, (void *)0x4D495044, (__int64)&v7);
  if ( MonitorHandle >= 0 )
  {
    MonitorHandle = MonitorGetMonitorType(this, v7);
    if ( MonitorHandle >= 0 )
      *a3 = 0;
    MonitorReleaseMonitorHandle(this, v7, (PVOID)0x4D495044);
  }
  return (unsigned int)MonitorHandle;
}

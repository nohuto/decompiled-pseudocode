/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00E4428
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00E42A4 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00E4D80 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C00E44B0 (MonitorGetMonitorType.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
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
    MonitorReleaseMonitorHandle(this, (struct _IO_REMOVE_LOCK *)v7, (void *)0x4D495044);
  }
  return (unsigned int)MonitorHandle;
}

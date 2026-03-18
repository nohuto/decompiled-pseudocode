/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00C6814
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C00C6694 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00C7A64 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00ABA7C (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C00C689C (MonitorGetMonitorType.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(DXGADAPTER *this, __int64 a2, unsigned __int8 *a3)
{
  int MonitorHandle; // ebx
  __int64 v6; // r9
  struct HDXGMONITOR__ *v8; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  MonitorHandle = MonitorGetMonitorHandle(this, a2, 0LL, (void *)0x4D495044, &v8);
  if ( MonitorHandle >= 0 )
  {
    MonitorHandle = MonitorGetMonitorType(this, v8);
    if ( MonitorHandle >= 0 )
      *a3 = 0;
    MonitorReleaseMonitorHandle(this, (__int64)v8, (void *)0x4D495044, v6);
  }
  return (unsigned int)MonitorHandle;
}

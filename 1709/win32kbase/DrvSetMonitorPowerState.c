/*
 * XREFs of DrvSetMonitorPowerState @ 0x1C00A41F0
 * Callers:
 *     PowerOnMonitor @ 0x1C0077B20 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00A3210 (PowerOffMonitor.c)
 * Callees:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A421C (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 DrvSetMonitorPowerState()
{
  if ( gProtocolType )
    return 3221225473LL;
  DrvSetWddmDeviceMonitorPowerState(0LL);
  return 0LL;
}

/*
 * XREFs of DrvSetMonitorPowerState @ 0x1C009B5C4
 * Callers:
 *     PowerOnMonitor @ 0x1C0065390 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C0099170 (PowerOffMonitor.c)
 * Callees:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C009B5F0 (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 DrvSetMonitorPowerState()
{
  if ( gProtocolType )
    return 3221225473LL;
  DrvSetWddmDeviceMonitorPowerState(0LL);
  return 0LL;
}

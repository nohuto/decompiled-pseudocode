/*
 * XREFs of ?SetProximityBlocking@@YAXXZ @ 0x1C00A2CDC
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A2E78 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerOffMonitor @ 0x1C00A48E0 (PowerOffMonitor.c)
 * Callees:
 *     <none>
 */

void SetProximityBlocking(void)
{
  if ( !HIDWORD(qword_1C01A308C) )
  {
    gProximityLastPowerPressTime = -1LL;
    ++gProximityScenarioCount;
    HIDWORD(qword_1C01A308C) = 1;
  }
}

/*
 * XREFs of ?SetProximityBlocking@@YAXXZ @ 0x1C00D66E8
 * Callers:
 *     PowerOffMonitor @ 0x1C0099170 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0099444 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 * Callees:
 *     <none>
 */

void SetProximityBlocking(void)
{
  if ( !HIDWORD(qword_1C018C29C) )
  {
    gProximityLastPowerPressTime = -1LL;
    ++gProximityScenarioCount;
    HIDWORD(qword_1C018C29C) = 1;
  }
}

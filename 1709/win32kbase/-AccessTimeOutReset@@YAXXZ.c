/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C009B790
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C005F450 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C013A708 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013B86C (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    ApiSetEditionKillAccessibilityTimer();
  if ( (dword_1C018F8B4 & 1) != 0 )
    gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(0LL, dword_1C018F8B8, xxxAccessTimeOutTimer);
}

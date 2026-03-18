/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C0074940
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0072AD0 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C013B444 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013C5B4 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    ApiSetEditionKillAccessibilityTimer();
  if ( (dword_1C018AD34 & 1) != 0 )
    gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(0LL, (unsigned int)dword_1C018AD38, xxxAccessTimeOutTimer);
}

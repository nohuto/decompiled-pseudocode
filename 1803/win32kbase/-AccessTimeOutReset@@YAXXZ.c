/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C0109DD0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C010BC40 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C013EEA0 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013FF88 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    ApiSetEditionKillAccessibilityTimer();
  if ( (dword_1C01A4E54 & 1) != 0 )
    gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(0LL, dword_1C01A4E58, xxxAccessTimeOutTimer);
}

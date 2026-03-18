/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C0109D80
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C012FD50 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013FF88 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (dword_1C01A4E54 & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              dword_1C01A4E58,
                              xxxAccessTimeOutTimer);
  }
}

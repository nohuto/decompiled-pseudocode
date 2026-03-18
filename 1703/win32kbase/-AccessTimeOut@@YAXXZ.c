/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C01185E0
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C012FB70 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013C5B4 (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (dword_1C018AD34 & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              (unsigned int)dword_1C018AD38,
                              xxxAccessTimeOutTimer);
  }
}

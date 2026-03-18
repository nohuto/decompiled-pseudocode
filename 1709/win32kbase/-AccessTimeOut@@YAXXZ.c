/*
 * XREFs of ?AccessTimeOut@@YAXXZ @ 0x1C0117470
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C012F200 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013B86C (ApiSetEditionSetAccessibilityTimer.c)
 */

void AccessTimeOut(void)
{
  if ( gtmridAccessTimeOut )
  {
    if ( (dword_1C018F8B4 & 1) != 0 )
      gtmridAccessTimeOut = ApiSetEditionSetAccessibilityTimer(
                              gtmridAccessTimeOut,
                              dword_1C018F8B8,
                              xxxAccessTimeOutTimer);
  }
}

/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140755324
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140756D58 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_14036F158 )
  {
    KeInitializeTimerEx(&Timer, NotificationTimer);
    KeInitializeDpc(&stru_140385DD0, AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&Timer, 0LL, 0x1Eu, 0, &stru_140385DD0);
  }
  return result;
}

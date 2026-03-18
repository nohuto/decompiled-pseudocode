/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x1407D3C8C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_14038D870 )
  {
    KeInitializeTimerEx(&stru_1403A29F0, NotificationTimer);
    KeInitializeDpc(&stru_1403A2970, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_1403A29F0, 0LL, 0x1Eu, 0, &stru_1403A2970);
  }
  return result;
}

/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x1408403B4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_1403D1808 )
  {
    KeInitializeTimerEx(&Timer, NotificationTimer);
    KeInitializeDpc(&stru_1403E9010, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&Timer, 0LL, 0x1Eu, 0, &stru_1403E9010);
  }
  return result;
}

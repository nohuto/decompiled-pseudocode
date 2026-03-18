/*
 * XREFs of AmliDisableWatchdogNoLock @ 0x1C002BFC8
 * Callers:
 *     AmliWatchdogTimeoutAction @ 0x1C005B2C0 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AmliDisableWatchdogNoLock(__int64 a1)
{
  BOOLEAN result; // al

  if ( *(_BYTE *)(a1 + 88) )
  {
    *(_BYTE *)(a1 + 88) = 0;
    return KeCancelTimer((PKTIMER)(a1 + 104));
  }
  return result;
}

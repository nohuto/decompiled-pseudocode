/*
 * XREFs of vReleaseDwmHitTestWaiters @ 0x1C00DBBC0
 * Callers:
 *     W32CalloutDispatch @ 0x1C0048FA0 (W32CalloutDispatch.c)
 * Callees:
 *     <none>
 */

LONG vReleaseDwmHitTestWaiters()
{
  LONG result; // eax

  if ( !gbNoMoreDITHitTest )
  {
    gbDITInHitTest = 0;
    if ( gcDITHitTestWaiters )
    {
      result = KeReleaseSemaphore((PRKSEMAPHORE)gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
      gcDITHitTestWaiters = 0;
    }
    gbNoMoreDITHitTest = 1;
  }
  return result;
}

/*
 * XREFs of CiNdisUpdateThrottleState @ 0x1C000921C
 * Callers:
 *     CiThreadDecrementScheduledCount @ 0x1C000ACF8 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000AD90 (CiThreadIncrementScheduledCount.c)
 * Callees:
 *     <none>
 */

void CiNdisUpdateThrottleState()
{
  if ( CiNdisDeviceHandle )
  {
    if ( !CiNdisThrottleInProgress )
    {
      CiNdisThrottleInProgress = 1;
      IoQueueWorkItem(CiNdisThrottleWorkItem, (PIO_WORKITEM_ROUTINE)CiNdisThrottle, NormalWorkQueue, 0LL);
    }
  }
}

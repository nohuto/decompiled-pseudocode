/*
 * XREFs of KdpTimeSlipWork @ 0x1407989B0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14043A854 (ExUpdateSystemTimeFromCmos.c)
 *     ExAcquireTimeRefreshLock @ 0x14046C524 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x14059F524 (ExReleaseTimeRefreshLock.c)
 */

__int64 KdpTimeSlipWork()
{
  KIRQL v0; // bl

  if ( ExAcquireTimeRefreshLock(0) )
  {
    ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    v0 = KeAcquireSpinLockRaiseToDpc(&KdpTimeSlipEventLock);
    if ( KdpTimeSlipEvent )
      KeSetEvent((PRKEVENT)KdpTimeSlipEvent, 0, 0);
    KxReleaseSpinLock(&KdpTimeSlipEventLock);
    __writecr8(v0);
  }
  return KiSetTimerEx((__int64)&KdpTimeSlipTimer, -1800000000LL, 0, 0, (__int64)&KdpTimeSlipDpc);
}

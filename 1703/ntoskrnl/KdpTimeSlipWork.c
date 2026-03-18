/*
 * XREFs of KdpTimeSlipWork @ 0x14078B790
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140409AF8 (ExUpdateSystemTimeFromCmos.c)
 *     ExReleaseTimeRefreshLock @ 0x14045E2D4 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x140563098 (ExAcquireTimeRefreshLock.c)
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

/*
 * XREFs of KdUpdateTimeSlipEvent @ 0x140153B28
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall KdUpdateTimeSlipEvent(void *a1)
{
  KIRQL v2; // di

  if ( !KdPitchDebugger )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&KdpTimeSlipEventLock);
    if ( KdpTimeSlipEvent )
      ObfDereferenceObjectWithTag(KdpTimeSlipEvent, 0x746C6644u);
    KdpTimeSlipEvent = a1;
    KxReleaseSpinLock(&KdpTimeSlipEventLock);
    __writecr8(v2);
  }
}

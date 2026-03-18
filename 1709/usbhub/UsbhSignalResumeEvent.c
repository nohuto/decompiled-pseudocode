/*
 * XREFs of UsbhSignalResumeEvent @ 0x1C00066B0
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C0006230 (UsbhPortResumeComplete.c)
 *     UsbhDriverResetPort @ 0x1C0006380 (UsbhDriverResetPort.c)
 *     UsbhResumeSuspendedPort @ 0x1C000784C (UsbhResumeSuspendedPort.c)
 *     UsbhHubDispatchPortEvent @ 0x1C000FF30 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubIsr @ 0x1C00187D0 (UsbhHubIsr.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C0027BA8 (Usbh_CheckPortHwPendingStatus.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0043084 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhPortCycle @ 0x1C0051A30 (UsbhPortCycle.c)
 *     UsbhPortDisconnect @ 0x1C0051BD0 (UsbhPortDisconnect.c)
 *     UsbhPortRecycle @ 0x1C0051D90 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x1C0051E50 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C00068E0 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0006B28 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSignalResumeEvent(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bl

  if ( (unsigned int)UsbhLogSignalResumeEvent() )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v5 = v4;
    UsbhSetPcqEventStatus(a1, a2, 1LL);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}

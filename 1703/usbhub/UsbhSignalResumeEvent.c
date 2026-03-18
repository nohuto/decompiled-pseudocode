/*
 * XREFs of UsbhSignalResumeEvent @ 0x1C0007C30
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C00077B0 (UsbhPortResumeComplete.c)
 *     UsbhDriverResetPort @ 0x1C0007900 (UsbhDriverResetPort.c)
 *     UsbhResumeSuspendedPort @ 0x1C00088C8 (UsbhResumeSuspendedPort.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubIsr @ 0x1C0016DB0 (UsbhHubIsr.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C001EF10 (Usbh_CheckPortHwPendingStatus.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042290 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhPortCycle @ 0x1C0050C70 (UsbhPortCycle.c)
 *     UsbhPortDisconnect @ 0x1C0050E10 (UsbhPortDisconnect.c)
 *     UsbhPortRecycle @ 0x1C0050FD0 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x1C0051090 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C0007CB0 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
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

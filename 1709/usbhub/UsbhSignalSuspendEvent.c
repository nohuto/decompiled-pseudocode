/*
 * XREFs of UsbhSignalSuspendEvent @ 0x1C0042180
 * Callers:
 *     UsbhEnumerate1 @ 0x1C00091C0 (UsbhEnumerate1.c)
 *     UsbhHubDispatchPortEvent @ 0x1C000FF30 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0018524 (Usbh_PCE_Suspend_Action.c)
 *     UsbhHubIsr @ 0x1C00187D0 (UsbhHubIsr.c)
 *     UsbhRequestPortSuspend @ 0x1C00268FC (UsbhRequestPortSuspend.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C0027BA8 (Usbh_CheckPortHwPendingStatus.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0043084 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhEnumerate2 @ 0x1C00510E0 (UsbhEnumerate2.c)
 *     UsbhPortDisconnect @ 0x1C0051BD0 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0006B28 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C0027920 (UsbhLogSignalSuspendEvent.c)
 */

void __fastcall UsbhSignalSuspendEvent(__int64 a1, __int64 a2)
{
  int v3; // ebp
  KIRQL v4; // al
  KIRQL v5; // bl

  v3 = a1;
  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v5 = v4;
    UsbhSetPcqEventStatus(v3, a2, 0LL, 30);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}

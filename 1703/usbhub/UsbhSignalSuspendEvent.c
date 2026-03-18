/*
 * XREFs of UsbhSignalSuspendEvent @ 0x1C0041390
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0016310 (Usbh_PCE_Suspend_Action.c)
 *     UsbhHubIsr @ 0x1C0016DB0 (UsbhHubIsr.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C001EF10 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhEnumerate1 @ 0x1C0021090 (UsbhEnumerate1.c)
 *     UsbhRequestPortSuspend @ 0x1C00261D4 (UsbhRequestPortSuspend.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042290 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhEnumerate2 @ 0x1C005031C (UsbhEnumerate2.c)
 *     UsbhPortDisconnect @ 0x1C0050E10 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C0027698 (UsbhLogSignalSuspendEvent.c)
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

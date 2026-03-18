/*
 * XREFs of UsbhSignalDriverResetEvent @ 0x1C0006A00
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0006380 (UsbhDriverResetPort.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000BA70 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C000FF30 (UsbhHubDispatchPortEvent.c)
 *     UsbhBusConnectPdo @ 0x1C001B7E0 (UsbhBusConnectPdo.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0043084 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0043994 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044E40 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004544C (Usbh_BusPause_PdoEvent.c)
 *     UsbhDropDevice @ 0x1C0051458 (UsbhDropDevice.c)
 *     UsbhFailDriverResetPort @ 0x1C0051540 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C00520E0 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C0052DA4 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0006B28 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C0006BA0 (UsbhLogSignalDriverResetEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 */

void __fastcall UsbhSignalDriverResetEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  KIRQL v5; // al
  KIRQL v6; // bl

  Log(a1, 16, 1685213745, a2, *(unsigned __int16 *)(a2 + 4));
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, v4) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v6 = v5;
    UsbhSetPcqEventStatus(a1, a2, 3LL);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v6);
  }
}

/*
 * XREFs of UsbhSignalDriverResetEvent @ 0x1C0007D84
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0007900 (UsbhDriverResetPort.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00236A0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhBusConnectPdo @ 0x1C002557C (UsbhBusConnectPdo.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042290 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0042B54 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044010 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0044618 (Usbh_BusPause_PdoEvent.c)
 *     UsbhDropDevice @ 0x1C0050694 (UsbhDropDevice.c)
 *     UsbhFailDriverResetPort @ 0x1C0050780 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C0051320 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C0007F24 (UsbhLogSignalDriverResetEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
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

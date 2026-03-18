/*
 * XREFs of Usbh_PIND_Enable_Action @ 0x1C0028C6C
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C0028BCC (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhUnlockPindicator @ 0x1C0028D04 (UsbhUnlockPindicator.c)
 *     UsbhSetPindicatorState @ 0x1C0028D44 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C0028D88 (UsbhSetPortIndicator.c)
 *     UsbhLockPindicator @ 0x1C0028EA0 (UsbhLockPindicator.c)
 */

__int64 __fastcall Usbh_PIND_Enable_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 5LL);
  Log(a1, 0x8000, 1718383411, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 == 4 )
  {
    UsbhSetPortIndicator(a1);
    UsbhSetPindicatorState(a3, a2, 3LL);
  }
  return UsbhUnlockPindicator(a3);
}

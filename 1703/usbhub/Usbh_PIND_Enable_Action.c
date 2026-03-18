/*
 * XREFs of Usbh_PIND_Enable_Action @ 0x1C003CDE0
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C003C8F0 (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhLockPindicator @ 0x1C003C9E0 (UsbhLockPindicator.c)
 *     UsbhSetPindicatorState @ 0x1C003CB10 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C003CB54 (UsbhSetPortIndicator.c)
 */

LONG __fastcall Usbh_PIND_Enable_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 5);
  Log(a1, 0x8000, 1718383411, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 == 4 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0);
    UsbhSetPindicatorState(a3, a2, 3);
  }
  return UsbhUnlockPindicator(a3);
}

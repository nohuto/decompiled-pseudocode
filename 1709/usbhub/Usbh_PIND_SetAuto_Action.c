/*
 * XREFs of Usbh_PIND_SetAuto_Action @ 0x1C003DD2C
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C0028BCC (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 *     UsbhUnlockPindicator @ 0x1C0028D04 (UsbhUnlockPindicator.c)
 *     UsbhSetPindicatorState @ 0x1C0028D44 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C0028D88 (UsbhSetPortIndicator.c)
 *     UsbhLockPindicator @ 0x1C0028EA0 (UsbhLockPindicator.c)
 */

LONG __fastcall Usbh_PIND_SetAuto_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 3);
  Log(a1, 0x8000, 1718383412, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 <= 0 )
    return UsbhUnlockPindicator(a3);
  if ( v7 <= 2 )
  {
    UsbhDisableTimerObject(*(_QWORD *)(a3 + 8), a2 + 2744);
    goto LABEL_7;
  }
  if ( v7 == 3 )
  {
LABEL_7:
    UsbhSetPindicatorState(a3, a2, 3);
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 0);
    return UsbhUnlockPindicator(a3);
  }
  if ( v7 == 4 )
    UsbhSetPindicatorState(a3, a2, 4);
  return UsbhUnlockPindicator(a3);
}

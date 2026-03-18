/*
 * XREFs of Usbh_PIND_SetBlink_Action @ 0x1C003CF3C
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C003C8F0 (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhLockPindicator @ 0x1C003C9E0 (UsbhLockPindicator.c)
 *     UsbhSetPindicatorState @ 0x1C003CB10 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C003CB54 (UsbhSetPortIndicator.c)
 */

LONG __fastcall Usbh_PIND_SetBlink_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  int v8; // r8d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 4);
  Log(a1, 0x8000, 1718383409, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 > 0 )
  {
    if ( v7 <= 2 )
    {
      v8 = v7;
      goto LABEL_8;
    }
    if ( v7 == 3 )
    {
      UsbhEnableTimerObject(
        *(_QWORD *)(a3 + 8),
        a2 + 2744,
        *(_DWORD *)(a2 + 2832),
        *(unsigned __int16 *)(a2 + 4),
        a3,
        0x646E6950u);
      UsbhSetPindicatorState(a3, a2, 1);
      UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 768);
    }
    else if ( v7 == 4 )
    {
      v8 = 4;
LABEL_8:
      UsbhSetPindicatorState(a3, a2, v8);
    }
  }
  return UsbhUnlockPindicator(a3);
}

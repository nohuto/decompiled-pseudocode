/*
 * XREFs of Usbh_PIND_Timeout_Action @ 0x1C003D024
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C003C8F0 (UsbhDispatch_PindicatorEvent.c)
 *     UsbhPindicatorWorker @ 0x1C003CAC0 (UsbhPindicatorWorker.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhLockPindicator @ 0x1C003C9E0 (UsbhLockPindicator.c)
 *     UsbhSetPindicatorState @ 0x1C003CB10 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C003CB54 (UsbhSetPortIndicator.c)
 */

LONG __fastcall Usbh_PIND_Timeout_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  __int64 v8; // rcx
  int v9; // r8d

  FdoExt(a1);
  v6 = UsbhLockPindicator(a3, a2, 1);
  Log(a1, 0x8000, 1718383413, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 == 1 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), *(_WORD *)(a2 + 2836));
    UsbhEnableTimerObject(
      *(_QWORD *)(a3 + 8),
      a2 + 2744,
      *(_DWORD *)(a2 + 2832),
      *(unsigned __int16 *)(a2 + 4),
      a3,
      0x646E6950u);
    v9 = 2;
    goto LABEL_7;
  }
  if ( v7 == 2 )
  {
    UsbhSetPortIndicator(a1, *(_WORD *)(a2 + 4), 768);
    UsbhEnableTimerObject(
      *(_QWORD *)(a3 + 8),
      a2 + 2744,
      *(_DWORD *)(a2 + 2832),
      *(unsigned __int16 *)(a2 + 4),
      a3,
      0x646E6950u);
    v9 = 1;
LABEL_7:
    v8 = a3;
    goto LABEL_8;
  }
  v8 = a3;
  if ( (unsigned int)(v7 - 3) <= 1 )
  {
    v9 = v7;
LABEL_8:
    UsbhSetPindicatorState(v8, a2, v9);
    v8 = a3;
  }
  return UsbhUnlockPindicator(v8);
}

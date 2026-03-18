/*
 * XREFs of UsbhSetPindicatorState @ 0x1C0028D44
 * Callers:
 *     Usbh_PIND_Enable_Action @ 0x1C0028C6C (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_Disable_Action @ 0x1C003DC60 (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C003DD2C (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C003DDF4 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003DEDC (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 __fastcall UsbhSetPindicatorState(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 result; // rax

  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(unsigned int *)(a2 + 2828);
  *(_DWORD *)(a2 + 2824) = a3;
  result = 32 * (v5 + 78);
  *(_DWORD *)(result + a2) = a3;
  return result;
}

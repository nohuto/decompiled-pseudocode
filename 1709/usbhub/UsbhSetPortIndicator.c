/*
 * XREFs of UsbhSetPortIndicator @ 0x1C0028D88
 * Callers:
 *     Usbh_PIND_Enable_Action @ 0x1C0028C6C (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_Disable_Action @ 0x1C003DC60 (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C003DD2C (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C003DDF4 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003DEDC (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhSyncSendCommand @ 0x1C0011D30 (UsbhSyncSendCommand.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D2D8 (WPP_RECORDER_SF_dd.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhSetPortIndicator(__int64 a1, unsigned __int16 a2, __int16 a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rdi
  int v9; // r10d
  int v10; // [rsp+20h] [rbp-58h]
  int v11; // [rsp+48h] [rbp-30h]
  __int16 v12; // [rsp+88h] [rbp+10h] BYREF
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF
  __int16 v15; // [rsp+9Ch] [rbp+24h]
  __int16 v16; // [rsp+9Eh] [rbp+26h]

  v13 = 0;
  v12 = 0;
  v6 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      10,
      (__int64)&WPP_71d4df441bc53643947fc1224878c183_Traceguids,
      v6[344],
      a2);
  Log(a1, 0x8000, 1885957680, a2, 0LL);
  v14 = 1442595;
  v16 = 0;
  v15 = a3 | a2;
  v7 = (int)UsbhSyncSendCommand(a1, (__int64)&v14, 0LL, &v12, v10, &v13);
  Log(a1, 8, 1937076273, v7, v13);
  if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
  {
    LOBYTE(v11) = 0;
    UsbhException(a1, a2, 119, 0, 0, v7, v9, usbfile_pind_c, 96, v11);
  }
  Log(a1, 8, 1937077072, v7, a2);
  return (unsigned int)v7;
}

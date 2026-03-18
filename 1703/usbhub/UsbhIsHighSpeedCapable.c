/*
 * XREFs of UsbhIsHighSpeedCapable @ 0x1C0027F20
 * Callers:
 *     UsbhInitialize @ 0x1C0017340 (UsbhInitialize.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C0013A80 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 */

bool __fastcall UsbhIsHighSpeedCapable(__int64 a1)
{
  _DWORD *v2; // rbx
  int v4; // [rsp+20h] [rbp-48h]
  __int16 v5; // [rsp+30h] [rbp-38h] BYREF
  __int16 v6; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+3Ah] [rbp-2Eh]
  __int16 v8; // [rsp+3Eh] [rbp-2Ah]
  int v9; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v10[16]; // [rsp+48h] [rbp-20h] BYREF

  v2 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      25,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  if ( v2[633] != 1 )
    return 0;
  if ( v2[634] == 2 )
    return 1;
  v6 = 1664;
  v5 = 10;
  v8 = 10;
  v7 = 1536;
  return (int)UsbhSyncSendCommand(a1, (__int64)&v6, (__int64)v10, &v5, v4, &v9) >= 0;
}

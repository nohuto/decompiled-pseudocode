/*
 * XREFs of UsbhClearTt @ 0x1C00426A8
 * Callers:
 *     UsbhReset1Complete @ 0x1C0021170 (UsbhReset1Complete.c)
 *     UsbhInitializeDevice @ 0x1C0026FA0 (UsbhInitializeDevice.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0013A80 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

void __fastcall UsbhClearTt(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  _DWORD *v6; // rbp
  int v7; // edx
  int v8; // edx
  int v9; // [rsp+20h] [rbp-58h]
  int v10[2]; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+50h] [rbp-28h] BYREF
  _WORD v13[4]; // [rsp+58h] [rbp-20h] BYREF
  __int16 v14; // [rsp+98h] [rbp+20h] BYREF

  v6 = FdoExt(a1);
  Log(a1, 4, 1919243348, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x18u,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
      *(unsigned __int16 *)(a2 + 4));
  if ( (v6[640] & 0x80u) != 0 )
  {
    v14 = 0;
    v13[0] = 2083;
    Log(a1, 4, 1920156737, a3, 0LL);
    v13[2] = *(_WORD *)(a2 + 4);
    v13[3] = 0;
    v13[1] = 16 * (a3 & 0x7F);
    v7 = UsbhSyncSendCommand(a1, (__int64)v13, 0LL, &v14, v9, &v12);
    if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
    {
      LOBYTE(v11) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 22, (int)v13, 8, v8, v12, usbfile_bus_c, 2412, v11);
    }
  }
  else
  {
    Log(a1, 4, 1851872340, a2, 0LL);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10[0] = *(unsigned __int16 *)(a2 + 4);
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x19u,
        (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
        *(_QWORD *)v10);
    }
  }
}

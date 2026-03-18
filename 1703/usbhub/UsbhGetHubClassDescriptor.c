/*
 * XREFs of UsbhGetHubClassDescriptor @ 0x1C001AD08
 * Callers:
 *     UsbhCheckHubPowerStatus @ 0x1C0005E5C (UsbhCheckHubPowerStatus.c)
 *     UsbhInitialize @ 0x1C0017340 (UsbhInitialize.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0013A80 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhGetHubClassDescriptor(__int64 a1, void *a2)
{
  _DWORD *v4; // r14
  unsigned int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // r12d
  int v8; // r10d
  void *v9; // r11
  void *v11; // r11
  void *v12; // r11
  int v13; // [rsp+20h] [rbp-40h]
  int v14; // [rsp+48h] [rbp-18h]
  __int16 v15; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+52h] [rbp-Eh]
  __int16 v17; // [rsp+56h] [rbp-Ah]
  int v18[2]; // [rsp+58h] [rbp-8h] BYREF
  unsigned __int16 v19; // [rsp+A0h] [rbp+40h] BYREF
  int v20; // [rsp+A8h] [rbp+48h] BYREF

  v4 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      23,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids);
  *(_QWORD *)v18 = v4 + 734;
  memset(a2, 0, 0x47uLL);
  v19 = 71;
  v20 = 0;
  FdoExt(a1);
  v15 = 1696;
  v16 = 10496;
  v17 = 71;
  v5 = UsbhSyncSendCommand(a1, (__int64)&v15, (__int64)a2, &v19, v13, &v20);
  v6 = (int)v5;
  v7 = v5 >> 30;
  if ( v5 >> 30 == 3 && !Usb_Disconnected(v5) )
  {
    LOBYTE(v14) = 0;
    UsbhException(a1, 0, 16, (int)a2, v19, v6, v20, v11, 3802, v14);
  }
  Log(a1, 8, 1214475379, v6, v19);
  if ( v7 == 3 )
  {
    if ( !Usb_Disconnected(v6) )
    {
      LOBYTE(v14) = 0;
      UsbhException(a1, 0, 14, (int)v18, v19, v6, -1, v12, 4077, v14);
    }
  }
  else if ( *(_BYTE *)(*(_QWORD *)v18 + 2LL) )
  {
    v4[640] |= 0x400000u;
    Log(a1, v8, 1214475364, *(__int64 *)v18, *(unsigned __int8 *)(*(_QWORD *)v18 + 2LL));
  }
  else
  {
    LOBYTE(v14) = 0;
    LODWORD(v6) = -1073741811;
    UsbhException(a1, 0, 15, (int)v18, v19, -1073741811, -1, v9, 4086, v14);
  }
  return (unsigned int)v6;
}

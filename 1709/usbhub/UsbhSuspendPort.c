/*
 * XREFs of UsbhSuspendPort @ 0x1C0026A48
 * Callers:
 *     UsbhRequestPortSuspend @ 0x1C00268FC (UsbhRequestPortSuspend.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0041020 (UsbhHubSyncSuspendPortEvent.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhSyncSendCommand @ 0x1C0011D30 (UsbhSyncSendCommand.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhGetPortStatus @ 0x1C003C528 (UsbhGetPortStatus.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhSuspendPort(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // esi
  _DWORD *v4; // r13
  __int64 v5; // rdi
  int v7; // r10d
  int PortStatus; // eax
  int v9; // [rsp+20h] [rbp-30h]
  int v10; // [rsp+48h] [rbp-8h]
  __int16 v11; // [rsp+98h] [rbp+48h] BYREF
  int v12; // [rsp+A0h] [rbp+50h] BYREF
  int v13; // [rsp+A8h] [rbp+58h] BYREF
  __int16 v14; // [rsp+ACh] [rbp+5Ch]
  __int16 v15; // [rsp+AEh] [rbp+5Eh]

  v2 = a2;
  v12 = 0;
  v11 = 0;
  v4 = FdoExt(a1);
  Log(a1, 8, 1937076272, v2, 0LL);
  v13 = 131875;
  v14 = v2;
  v15 = 0;
  v5 = (int)UsbhSyncSendCommand(a1, (__int64)&v13, 0LL, &v11, v9, &v12);
  Log(a1, 8, 1937076273, v5, v12);
  if ( (v5 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v5) )
  {
    LOBYTE(v10) = 0;
    UsbhException(a1, (unsigned __int16)v2, 51, 0, 0, v5, v7, usbfile_hub_c, 3663, v10);
  }
  Log(a1, 8, 1937077072, v5, v2);
  if ( (v4[641] & 2) != 0 )
  {
    PortStatus = UsbhGetPortStatus(a1, (unsigned __int16)v2, &v11, &v12);
    Log(a1, 8, 1937076307, PortStatus, v12);
  }
  return (unsigned int)v5;
}

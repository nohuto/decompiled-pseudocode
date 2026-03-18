/*
 * XREFs of UsbhSetHubRemoteWake @ 0x1C0017278
 * Callers:
 *     UsbhDisarmHubWakeOnConnect @ 0x1C000568C (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSshSuspendHub @ 0x1C0019474 (UsbhSshSuspendHub.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C0046878 (UsbhArmHubWakeOnConnect.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhSyncSendCommand @ 0x1C0011D30 (UsbhSyncSendCommand.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhSetHubRemoteWake(__int64 a1, char a2)
{
  _DWORD *v4; // rax
  int v5; // r10d
  __int64 v6; // rbx
  int v8; // r10d
  int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+48h] [rbp-20h]
  __int16 v11; // [rsp+78h] [rbp+10h] BYREF
  int v12; // [rsp+80h] [rbp+18h] BYREF
  char v13; // [rsp+88h] [rbp+20h] BYREF
  char v14; // [rsp+89h] [rbp+21h]
  int v15; // [rsp+8Ah] [rbp+22h]
  __int16 v16; // [rsp+8Eh] [rbp+26h]

  v12 = 0;
  v11 = 0;
  v4 = FdoExt(a1);
  v13 = 0;
  v14 = a2 != 0 ? 3 : 1;
  Log(a1, 8, 1400332651, (unsigned int)v4[344], 0LL);
  v15 = v5;
  v16 = 0;
  v6 = (int)UsbhSyncSendCommand(a1, (__int64)&v13, 0LL, &v11, v9, &v12);
  Log(a1, 8, 1937206065, v6, v12);
  if ( (v6 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v6) )
  {
    LOBYTE(v10) = 0;
    UsbhException(a1, 0, 123, 0, 0, v6, v8, usbfile_hub_c, 3746, v10);
  }
  Log(a1, 8, 1937206066, v6, 0LL);
  return (unsigned int)v6;
}

/*
 * XREFs of UsbhEnableDeviceForWake @ 0x1C005539C
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1C0023164 (UsbhSyncSuspendPdoPort.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0016E10 (UsbhSyncSendCommandToDevice.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

__int64 __fastcall UsbhEnableDeviceForWake(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  int v5; // eax
  int v6; // r10d
  __int64 v8[5]; // [rsp+40h] [rbp-28h] BYREF
  __int16 v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  FdoExt(a1);
  v4 = PdoExt(a2);
  v8[0] = 66304LL;
  v5 = UsbhSyncSendCommandToDevice(a1, a2, v8, 0LL, &v9);
  Log(a1, 256, 1162770283, v5, 0LL);
  if ( v6 >= 0 )
    v4[353] |= 0x8000u;
  return (unsigned int)v6;
}

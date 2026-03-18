/*
 * XREFs of UsbhDisableDeviceForWake @ 0x1C0001418
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C00015A0 (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0016E10 (UsbhSyncSendCommandToDevice.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

__int64 __fastcall UsbhDisableDeviceForWake(__int64 a1, __int64 a2)
{
  int v3; // esi
  __int64 v4; // rbp
  int v5; // eax
  int v6; // r10d
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  __int16 v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  v3 = a1;
  FdoExt(a1);
  v4 = PdoExt(a2);
  v8 = 65792LL;
  v5 = UsbhSyncSendCommandToDevice(v3, a2, (unsigned int)&v8, 0, (__int64)&v9);
  Log(v3, 256, 1145993067, v5, 0LL);
  if ( v6 >= 0 )
    *(_DWORD *)(v4 + 1412) &= ~0x8000u;
  return (unsigned int)v6;
}

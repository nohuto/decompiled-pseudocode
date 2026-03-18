/*
 * XREFs of UsbhGetDeviceDescriptor @ 0x1C0055518
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0042FC8 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     UsbhSyncSendCommandToDevice @ 0x1C0006AC0 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C001F9D4 (UsbhValidateDeviceDescriptor.c)
 */

__int64 __fastcall UsbhGetDeviceDescriptor(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rbx
  __int16 v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+42h] [rbp-26h]
  __int16 v11; // [rsp+46h] [rbp-22h]
  __int16 v12; // [rsp+80h] [rbp+18h] BYREF

  v9 = 1664;
  v10 = 256;
  v4 = PdoExt(a2) + 348;
  v11 = 18;
  v12 = 18;
  v5 = UsbhSyncSendCommandToDevice(a1, a2, &v9, (__int64)v4, &v12);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( v12 != 18 || !UsbhValidateDeviceDescriptor(a1, (__int64)v4, v6, 0LL, 0LL) )
      return 3221225628LL;
    Log(a1, 256, 1197818948, v7, 0LL);
  }
  return (unsigned int)v7;
}

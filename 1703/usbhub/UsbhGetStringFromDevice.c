/*
 * XREFs of UsbhGetStringFromDevice @ 0x1C0055678
 * Callers:
 *     UsbhGetMSOS_Descriptor @ 0x1C001FA08 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetLanguageIdString @ 0x1C00221B8 (UsbhGetLanguageIdString.c)
 *     UsbhGetSerialNumber @ 0x1C0022228 (UsbhGetSerialNumber.c)
 *     UsbhGetBillboardInfo @ 0x1C004313C (UsbhGetBillboardInfo.c)
 *     UsbhGetProductIdString @ 0x1C0052E10 (UsbhGetProductIdString.c)
 * Callees:
 *     UsbhSyncSendCommandToDevice @ 0x1C0006AC0 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

__int64 __fastcall UsbhGetStringFromDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        unsigned __int16 a6,
        unsigned __int8 a7)
{
  unsigned __int16 *v10; // rdi
  char v12; // r11
  __int16 v13; // r10
  int v14; // eax
  unsigned int v15; // r10d

  FdoExt(a1);
  v10 = a5;
  if ( !a5 )
    return 3221225485LL;
  Log(a1, 256, 1733514289, *a5, a7);
  Log(a1, 256, 1733514290, a2, a6);
  HIWORD(a5) = *v10;
  LOWORD(a5) = 1664;
  BYTE3(a5) = 3;
  BYTE2(a5) = v12;
  WORD2(a5) = v13;
  v14 = UsbhSyncSendCommandToDevice(a1, a2, &a5, a4, v10);
  Log(a1, 256, 1733514291, *v10, v14);
  return v15;
}

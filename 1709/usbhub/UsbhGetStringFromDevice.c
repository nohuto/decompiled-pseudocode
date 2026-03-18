/*
 * XREFs of UsbhGetStringFromDevice @ 0x1C0028988
 * Callers:
 *     UsbhGetMSOS_Descriptor @ 0x1C0022930 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetLanguageIdString @ 0x1C00232DC (UsbhGetLanguageIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00234F4 (UsbhGetSerialNumber.c)
 *     UsbhGetProductIdString @ 0x1C00287E8 (UsbhGetProductIdString.c)
 *     UsbhGetBillboardInfo @ 0x1C0043F7C (UsbhGetBillboardInfo.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0016E10 (UsbhSyncSendCommandToDevice.c)
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
  char v11; // r11
  __int16 v12; // r10
  int v13; // eax
  unsigned int v14; // r10d

  FdoExt(a1);
  v10 = a5;
  if ( !a5 )
    return 3221225485LL;
  Log(a1, 256, 1733514289, *a5, a7);
  Log(a1, 256, 1733514290, a2, a6);
  HIWORD(a5) = *v10;
  LOWORD(a5) = 1664;
  BYTE3(a5) = 3;
  BYTE2(a5) = v11;
  WORD2(a5) = v12;
  v13 = UsbhSyncSendCommandToDevice(a1, a2, &a5, a4, v10);
  Log(a1, 256, 1733514291, *v10, v13);
  return v14;
}

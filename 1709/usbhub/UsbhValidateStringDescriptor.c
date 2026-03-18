/*
 * XREFs of UsbhValidateStringDescriptor @ 0x1C002894C
 * Callers:
 *     UsbhGetLanguageIdString @ 0x1C00232DC (UsbhGetLanguageIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00234F4 (UsbhGetSerialNumber.c)
 *     UsbhGetProductIdString @ 0x1C00287E8 (UsbhGetProductIdString.c)
 *     UsbhGetBillboardInfo @ 0x1C0043F7C (UsbhGetBillboardInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhValidateStringDescriptor(__int64 a1, unsigned __int8 *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // ecx
  int v5; // ecx
  PDEVICE_OBJECT v7; // rcx
  int v8; // r9d

  v4 = *a2;
  if ( v4 > a3 )
  {
    if ( a4 )
      *a4 = -1072693247;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v8 = 10;
LABEL_10:
    WPP_RECORDER_SF_(v7->DeviceExtension, 0, 1, v8, (__int64)&WPP_5bb179a8e8dc3d67ecd79814022ef394_Traceguids);
    return 0;
  }
  if ( (unsigned __int8)v4 <= 2u )
  {
    if ( a4 )
      *a4 = -1072693247;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v8 = 11;
    goto LABEL_10;
  }
  if ( a2[1] != 3 )
  {
    if ( a4 )
      *a4 = -1072693246;
    v7 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v8 = 12;
    goto LABEL_10;
  }
  v5 = v4 & 1;
  if ( !v5 )
    return 1;
  if ( a4 )
    *a4 = -1072693247;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_5bb179a8e8dc3d67ecd79814022ef394_Traceguids,
      v5);
  return 0;
}

/*
 * XREFs of UsbhValidateStringDescriptor @ 0x1C00549E4
 * Callers:
 *     UsbhGetLanguageIdString @ 0x1C00221B8 (UsbhGetLanguageIdString.c)
 *     UsbhGetSerialNumber @ 0x1C0022228 (UsbhGetSerialNumber.c)
 *     UsbhGetBillboardInfo @ 0x1C004313C (UsbhGetBillboardInfo.c)
 *     UsbhGetProductIdString @ 0x1C0052E10 (UsbhGetProductIdString.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhValidateStringDescriptor(__int64 a1, unsigned __int8 *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // ecx
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // r9
  int v8; // ecx

  v4 = *a2;
  if ( v4 > a3 )
  {
    if ( a4 )
      *a4 = -1072693247;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v6 = 10;
LABEL_6:
    WPP_RECORDER_SF_((__int64)v5->DeviceExtension, 0, 1u, v6, (__int64)&WPP_5bb179a8e8dc3d67ecd79814022ef394_Traceguids);
    return 0;
  }
  if ( (unsigned __int8)v4 <= 2u )
  {
    if ( a4 )
      *a4 = -1072693247;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v6 = 11;
    goto LABEL_6;
  }
  if ( a2[1] != 3 )
  {
    if ( a4 )
      *a4 = -1072693246;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v6 = 12;
    goto LABEL_6;
  }
  v8 = v4 & 1;
  if ( v8 )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xDu,
        (__int64)&WPP_5bb179a8e8dc3d67ecd79814022ef394_Traceguids,
        v8);
    return 0;
  }
  return 1;
}

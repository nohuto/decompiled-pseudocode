/*
 * XREFs of ApiSetIsMouseDeviceOnIgnoreList @ 0x1C007E0F0
 * Callers:
 *     UpdateMouseConnectionState @ 0x1C007D540 (UpdateMouseConnectionState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetIsMouseDeviceOnIgnoreList(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      226,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsIsMouseDeviceOnIgnoreListSupported() >= 0 )
    v2 = IsMouseDeviceOnIgnoreList(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      227,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return v2;
}

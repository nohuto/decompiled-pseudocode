/*
 * XREFs of ApiSetWritePTPSettingValues @ 0x1C013E12C
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00D8DC0 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetWritePTPSettingValues(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      222,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsWritePTPSettingValuesSupported() >= 0 )
    v2 = WritePTPSettingValues(a1, 13LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      223,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return v2;
}

/*
 * XREFs of ApiSetGetDefaultPTPConfiguration @ 0x1C013CC6C
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00D8DC0 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetGetDefaultPTPConfiguration()
{
  __int64 DefaultPTPConfiguration; // rbx

  DefaultPTPConfiguration = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      224,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsGetDefaultPTPConfigurationSupported() >= 0 )
    DefaultPTPConfiguration = GetDefaultPTPConfiguration();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      225,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return DefaultPTPConfiguration;
}

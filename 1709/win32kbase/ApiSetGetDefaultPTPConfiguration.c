/*
 * XREFs of ApiSetGetDefaultPTPConfiguration @ 0x1C013BF28
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1C00DF100 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetGetDefaultPTPConfiguration()
{
  __int64 DefaultPTPConfiguration; // rbx

  DefaultPTPConfiguration = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xECu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsGetDefaultPTPConfigurationSupported() >= 0 )
    DefaultPTPConfiguration = GetDefaultPTPConfiguration();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xEDu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return DefaultPTPConfiguration;
}

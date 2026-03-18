/*
 * XREFs of ApiSetUpdatePTPConfigFromRegistry @ 0x1C007E168
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C007D3B0 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetUpdatePTPConfigFromRegistry()
{
  unsigned int updated; // ebx

  updated = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      220,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsUpdatePTPConfigFromRegistrySupported() >= 0 )
    updated = UpdatePTPConfigFromRegistry();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      221,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return updated;
}

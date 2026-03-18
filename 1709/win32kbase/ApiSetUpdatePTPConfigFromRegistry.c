/*
 * XREFs of ApiSetUpdatePTPConfigFromRegistry @ 0x1C008D6F8
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C008D410 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetUpdatePTPConfigFromRegistry()
{
  unsigned int updated; // ebx

  updated = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xE8u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsUpdatePTPConfigFromRegistrySupported() >= 0 )
    updated = UpdatePTPConfigFromRegistry();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xE9u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return updated;
}

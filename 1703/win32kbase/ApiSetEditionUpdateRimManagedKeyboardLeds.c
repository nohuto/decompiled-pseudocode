/*
 * XREFs of ApiSetEditionUpdateRimManagedKeyboardLeds @ 0x1C013CAB0
 * Callers:
 *     UpdateKeyLights @ 0x1C008EA30 (UpdateKeyLights.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionUpdateRimManagedKeyboardLeds()
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      292,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  result = IsEditionUpdateRimManagedKeyboardLedsSupported();
  if ( (int)result >= 0 )
    result = EditionUpdateRimManagedKeyboardLeds();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             14,
             293,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return result;
}

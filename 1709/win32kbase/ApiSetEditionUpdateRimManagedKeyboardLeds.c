/*
 * XREFs of ApiSetEditionUpdateRimManagedKeyboardLeds @ 0x1C013BD6C
 * Callers:
 *     UpdateKeyLights @ 0x1C0096C70 (UpdateKeyLights.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionUpdateRimManagedKeyboardLeds()
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x130u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsEditionUpdateRimManagedKeyboardLedsSupported();
  if ( (int)result >= 0 )
    result = EditionUpdateRimManagedKeyboardLeds();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0x131u,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}

/*
 * XREFs of ApiSetEditionImmActivateLayout @ 0x1C0073480
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C00725C0 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionImmActivateLayout(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x100u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsEditionImmActivateLayoutSupported();
  if ( (int)result >= 0 )
    result = EditionImmActivateLayout(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0x101u,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}

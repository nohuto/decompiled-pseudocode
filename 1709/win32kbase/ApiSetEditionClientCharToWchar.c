/*
 * XREFs of ApiSetEditionClientCharToWchar @ 0x1C013943C
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0071680 (xxxInternalToUnicode.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionClientCharToWchar(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned __int16 v4; // bx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x132u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  v4 = 0;
  if ( (int)IsEditionHandleAltTabCancelSupported() >= 0 )
    v4 = EditionClientCharToWchar(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x133u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v4;
}

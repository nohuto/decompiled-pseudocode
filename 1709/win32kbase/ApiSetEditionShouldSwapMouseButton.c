/*
 * XREFs of ApiSetEditionShouldSwapMouseButton @ 0x1C00185DC
 * Callers:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C00185A8 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionShouldSwapMouseButton(unsigned int a1, unsigned int a2)
{
  unsigned int ShouldSwapMouseButton; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xBAu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  ShouldSwapMouseButton = 0;
  if ( (int)IsEditionShouldSwapMouseButtonSupported() >= 0 )
    ShouldSwapMouseButton = EditionShouldSwapMouseButton(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xBBu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return ShouldSwapMouseButton;
}

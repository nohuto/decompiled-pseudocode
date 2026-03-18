/*
 * XREFs of ApiSetEditionGetTopLevelWindowWithComponentUI @ 0x1C013A0B4
 * Callers:
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0121A10 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetTopLevelWindowWithComponentUI(__int64 a1)
{
  __int64 TopLevelWindowWithComponentUI; // rbx

  TopLevelWindowWithComponentUI = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x10u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionGetTopLevelWindowWithComponentUISupported() >= 0 )
    TopLevelWindowWithComponentUI = EditionGetTopLevelWindowWithComponentUI(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x11u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return TopLevelWindowWithComponentUI;
}

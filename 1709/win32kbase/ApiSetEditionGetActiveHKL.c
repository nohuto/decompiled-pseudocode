/*
 * XREFs of ApiSetEditionGetActiveHKL @ 0x1C001171C
 * Callers:
 *     VKFromVSC @ 0x1C000FE60 (VKFromVSC.c)
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C012ECFC (-RemoteSyncToggleKeys@@YAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionGetActiveHKL()
{
  __int64 ActiveHKL; // rbx

  ActiveHKL = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      266,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionGetActiveHKLSupported() >= 0 )
    ActiveHKL = EditionGetActiveHKL();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      267,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return ActiveHKL;
}

/*
 * XREFs of ApiSetEditionGetActiveHKL @ 0x1C004DE9C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 *     VKFromVSC @ 0x1C0088360 (VKFromVSC.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C012F65C (-RemoteSyncToggleKeys@@YAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
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
      254,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsEditionGetActiveHKLSupported() >= 0 )
    ActiveHKL = EditionGetActiveHKL();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      255,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return ActiveHKL;
}

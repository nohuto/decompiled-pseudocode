/*
 * XREFs of ApiSetEditionKillAccessibilityTimer @ 0x1C013A708
 * Callers:
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C0092420 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C009B790 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01174C0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0117630 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0117A80 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C0117C60 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0117CB0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionKillAccessibilityTimer(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x3Au,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionKillAccessibilityTimerSupported() >= 0 )
    v3 = EditionKillAccessibilityTimer(0LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x3Bu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v3;
}

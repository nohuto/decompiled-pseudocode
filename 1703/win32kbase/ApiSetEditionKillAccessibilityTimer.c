/*
 * XREFs of ApiSetEditionKillAccessibilityTimer @ 0x1C013B444
 * Callers:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C0074940 (-AccessTimeOutReset@@YAXXZ.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C008BA50 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118630 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01187B0 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0118C10 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C0118DF0 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0118E40 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionKillAccessibilityTimer(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v4; // edx

  v2 = a2;
  v3 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      54,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionKillAccessibilityTimerSupported() >= 0 )
    v3 = EditionKillAccessibilityTimer(0LL, v2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      14,
      55,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v3;
}

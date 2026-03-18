/*
 * XREFs of ApiSetEditionSetAccessibilityTimer @ 0x1C013B86C
 * Callers:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C009B790 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C0117470 (-AccessTimeOut@@YAXXZ.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01174C0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0117630 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0117CB0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0117FA0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118060 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01181F0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01183A0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionSetAccessibilityTimer(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx

  v5 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x38u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionSetAccessibilityTimerSupported() >= 0 )
    v5 = EditionSetAccessibilityTimer(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x39u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v5;
}

/*
 * XREFs of ApiSetEditionPostAccessibility @ 0x1C013BE54
 * Callers:
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118630 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x1C0118B80 (-MKButtonSelect@@YAHG@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C0118FD0 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0119030 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01192F0 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C0119A50 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0119B70 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C011A090 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C011A0F0 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C011A180 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostAccessibility(unsigned int a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      50,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  result = IsEditionPostAccessibilitySupported();
  if ( (int)result >= 0 )
    result = EditionPostAccessibility(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             14,
             51,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return result;
}

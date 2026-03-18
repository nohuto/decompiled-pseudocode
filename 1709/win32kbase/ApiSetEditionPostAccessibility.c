/*
 * XREFs of ApiSetEditionPostAccessibility @ 0x1C013AFC4
 * Callers:
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01174C0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x1C01179F0 (-MKButtonSelect@@YAHG@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C0117E40 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0117EA0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C0118160 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01186B0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01187D0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0118CC0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C0118D20 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C0118DB0 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostAccessibility(unsigned int a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x36u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = IsEditionPostAccessibilitySupported();
  if ( (int)result >= 0 )
    result = EditionPostAccessibility(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xEu,
             0x37u,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return result;
}

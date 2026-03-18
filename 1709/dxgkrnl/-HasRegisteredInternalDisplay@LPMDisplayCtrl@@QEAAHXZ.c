/*
 * XREFs of ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C00286E4
 * Callers:
 *     DxgkEnableHighPrecisionBrightness @ 0x1C01AE380 (DxgkEnableHighPrecisionBrightness.c)
 *     DxgkLPMDisplayControl @ 0x1C01AE410 (DxgkLPMDisplayControl.c)
 *     DxgkSetHighPrecisionBrightness @ 0x1C01AE510 (DxgkSetHighPrecisionBrightness.c)
 *     LPMSetTTMDisplayPowerState @ 0x1C01AE69C (LPMSetTTMDisplayPowerState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall LPMDisplayCtrl::HasRegisteredInternalDisplay(LPMDisplayCtrl *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( FileObject[2] )
    return *((_DWORD *)FileObject + 6) != -1;
  return result;
}

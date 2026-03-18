/*
 * XREFs of ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C0038554
 * Callers:
 *     DxgkEnableHighPrecisionBrightness @ 0x1C0198520 (DxgkEnableHighPrecisionBrightness.c)
 *     DxgkLPMDisplayControl @ 0x1C01985B0 (DxgkLPMDisplayControl.c)
 *     DxgkSetHighPrecisionBrightness @ 0x1C01986B0 (DxgkSetHighPrecisionBrightness.c)
 *     LPMSetTTMDisplayPowerState @ 0x1C019883C (LPMSetTTMDisplayPowerState.c)
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

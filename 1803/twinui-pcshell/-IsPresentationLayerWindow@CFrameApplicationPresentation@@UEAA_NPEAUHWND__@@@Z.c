/*
 * XREFs of ?IsPresentationLayerWindow@CFrameApplicationPresentation@@UEAA_NPEAUHWND__@@@Z @ 0x180013CC0
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180049A20 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFrameApplicationPresentation::IsPresentationLayerWindow(HWND *this, HWND a2)
{
  return a2 == this[16];
}

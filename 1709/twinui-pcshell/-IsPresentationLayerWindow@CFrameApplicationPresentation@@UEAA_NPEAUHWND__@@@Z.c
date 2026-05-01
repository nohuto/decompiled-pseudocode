/*
 * XREFs of ?IsPresentationLayerWindow@CFrameApplicationPresentation@@UEAA_NPEAUHWND__@@@Z @ 0x18006A690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFrameApplicationPresentation::IsPresentationLayerWindow(HWND *this, HWND a2)
{
  return a2 == this[17];
}

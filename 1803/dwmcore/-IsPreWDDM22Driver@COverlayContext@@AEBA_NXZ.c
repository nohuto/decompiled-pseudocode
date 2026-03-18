/*
 * XREFs of ?IsPreWDDM22Driver@COverlayContext@@AEBA_NXZ @ 0x18016700C
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007A730 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::IsPreWDDM22Driver(COverlayContext *this)
{
  return *((_DWORD *)this + 295) < 2200;
}

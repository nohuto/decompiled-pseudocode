/*
 * XREFs of ?ResetDisplayOverlapCount@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x180028D90
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005D170 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::ResetDisplayOverlapCount(CCompositionSurfaceBitmap *this)
{
  *((_DWORD *)this + 21) = 0;
}

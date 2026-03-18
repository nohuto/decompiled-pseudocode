/*
 * XREFs of ?ResetDisplayOverlapCount@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x180037A80
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D8EC (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::ResetDisplayOverlapCount(CCompositionSurfaceBitmap *this)
{
  *((_DWORD *)this + 115) = 0;
}

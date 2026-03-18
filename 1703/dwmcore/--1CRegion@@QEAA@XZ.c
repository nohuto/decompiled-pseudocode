/*
 * XREFs of ??1CRegion@@QEAA@XZ @ 0x180132A48
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D100 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRegion::~CRegion(void **this)
{
  FastRegion::CRegion::FreeMemory(this);
}

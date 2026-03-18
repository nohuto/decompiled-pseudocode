/*
 * XREFs of ?NeedsSwapChainFullScreenNotification@COverlayContext@@QEBA_NXZ @ 0x1800D4D2C
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D100 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::NeedsSwapChainFullScreenNotification(COverlayContext *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 448LL))(*((_QWORD *)this + 2));
}

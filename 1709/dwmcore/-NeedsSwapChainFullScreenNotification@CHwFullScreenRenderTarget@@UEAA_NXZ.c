/*
 * XREFs of ?NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x18002EB60
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005CFC0 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwFullScreenRenderTarget::NeedsSwapChainFullScreenNotification(CHwFullScreenRenderTarget *this)
{
  CDWMSwapChain *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (CDWMSwapChain *)*((_QWORD *)this + 5);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 240LL);
  if ( (char *)v2 == (char *)CDWMSwapChain::NeedsSwapChainFullScreenNotification )
    return CDWMSwapChain::NeedsSwapChainFullScreenNotification(v1);
  else
    return v2();
}

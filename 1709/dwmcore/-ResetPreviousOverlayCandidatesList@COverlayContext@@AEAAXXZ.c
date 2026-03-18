/*
 * XREFs of ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180066F4C
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x180143F0C (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 * Callees:
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180144770 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

void __fastcall COverlayContext::ResetPreviousOverlayCandidatesList(COverlayContext *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 60); ++i )
    COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*((_QWORD *)this + 27) + 248LL * i));
  *((_DWORD *)this + 60) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 216, 248LL);
}

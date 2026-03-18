/*
 * XREFs of ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x180066F10
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1801448F0 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180144770 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

void __fastcall COverlayContext::ResetOverlayPlanesList(COverlayContext *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 68); ++i )
    COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*((_QWORD *)this + 31) + 248LL * i));
  *((_DWORD *)this + 68) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 248, 248LL);
}

/*
 * XREFs of ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801A4AB0
 * Callers:
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801A84D0 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801A85B8 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1801A8700 (-ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z.c)
 * Callees:
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801A4A58 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?OnExclusiveViewDeactivate@CHolographicClient@@QEAAXIPEAPEAX@Z @ 0x1801A7F70 (-OnExclusiveViewDeactivate@CHolographicClient@@QEAAXIPEAPEAX@Z.c)
 */

void __fastcall CHolographicExclusiveView::DeactivateView(
        CHolographicExclusiveView *this,
        struct CHolographicClient *a2)
{
  if ( *((_BYTE *)this + 72) )
  {
    CHolographicClient::OnExclusiveViewDeactivate(a2, *((_DWORD *)this + 32), (void **)this + 17);
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
}

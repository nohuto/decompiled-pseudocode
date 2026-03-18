/*
 * XREFs of ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801BD8E0
 * Callers:
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C35B8 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C36A4 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1801C37E4 (-ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z.c)
 * Callees:
 *     ?OnExclusiveViewDeactivate@CHolographicClient@@QEAAXIPEAPEAX@Z @ 0x1801C2E98 (-OnExclusiveViewDeactivate@CHolographicClient@@QEAAXIPEAPEAX@Z.c)
 */

void __fastcall CHolographicExclusiveView::DeactivateView(
        CHolographicExclusiveView *this,
        struct CHolographicClient *a2)
{
  if ( !*((_BYTE *)this + 72) || *((_BYTE *)this + 75) )
  {
    *((_BYTE *)this + 72) = 0;
  }
  else
  {
    CHolographicClient::OnExclusiveViewDeactivate(a2, *((_DWORD *)this + 36), (void **)this + 19);
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
}

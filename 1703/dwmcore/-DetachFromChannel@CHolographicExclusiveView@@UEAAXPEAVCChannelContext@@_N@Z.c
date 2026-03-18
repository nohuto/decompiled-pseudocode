/*
 * XREFs of ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A4AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801A4CFC (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1801A63B0 (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 */

void __fastcall CHolographicExclusiveView::DetachFromChannel(struct IUnknown *this, struct CChannelContext *a2)
{
  struct IUnknownVtbl *lpVtbl; // rcx
  CHolographicManager *v4; // rcx

  CHolographicExclusiveView::ReleaseSwapChain(this);
  lpVtbl = this[11].lpVtbl;
  if ( lpVtbl )
  {
    CloseHandle(lpVtbl);
    this[11].lpVtbl = 0LL;
  }
  v4 = (CHolographicManager *)this[7].lpVtbl;
  if ( v4 )
    CHolographicManager::RemoveExclusiveView(v4, (struct CHolographicExclusiveView *)this);
}

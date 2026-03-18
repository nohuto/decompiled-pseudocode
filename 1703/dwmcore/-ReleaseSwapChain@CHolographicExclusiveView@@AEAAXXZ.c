/*
 * XREFs of ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801A4CFC
 * Callers:
 *     ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x18012FE5C (-ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICE.c)
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A4AF0 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicExclusiveView::ReleaseSwapChain(struct IUnknown *this)
{
  struct IUnknownVtbl *lpVtbl; // rax
  CHolographicInteropTaskQueue *Release; // rcx

  if ( BYTE2(this[9].lpVtbl) )
  {
    lpVtbl = this[7].lpVtbl;
    if ( lpVtbl )
    {
      Release = (CHolographicInteropTaskQueue *)lpVtbl[1].Release;
      if ( Release )
        CHolographicInteropTaskQueue::PostMessageW(Release, 0xEu, this, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, (struct CResource *)this[10].lpVtbl);
    this[10].lpVtbl = 0LL;
    this[10].lpVtbl = 0LL;
  }
}

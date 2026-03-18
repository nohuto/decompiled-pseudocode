/*
 * XREFs of ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1801BDCE4
 * Callers:
 *     ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x1801BDC28 (-ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEX.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1801C0B3C (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 * Callees:
 *     ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1801BFF30 (-AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicExclusiveView::PublishPresentData(CHolographicExclusiveView *this)
{
  struct IUnknown *v1; // r8
  __int64 v2; // rax
  CHolographicInteropTaskQueue *v3; // rcx

  v1 = (struct IUnknown *)*((_QWORD *)this + 14);
  if ( v1 )
  {
    v2 = *((_QWORD *)this + 7);
    v3 = *(CHolographicInteropTaskQueue **)(v2 + 40);
    if ( v3 )
    {
      if ( *(_BYTE *)(v2 + 192) )
        CHolographicInteropTaskQueue::PostMessageW(v3, 0x16u, v1, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else if ( *((_QWORD *)this + 10) )
  {
    CHolographicManager::AttachExclusiveSwapChain(*((CHolographicManager **)this + 7), this);
  }
}

/*
 * XREFs of ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1801BFF30
 * Callers:
 *     ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x1801BD788 (-AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1801BDCE4 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AttachExclusiveSwapChain(CHolographicInteropTaskQueue **this, struct IUnknown *a2)
{
  bool result; // al

  result = 0;
  if ( this[5] )
  {
    if ( *((_BYTE *)this + 192) )
      return CHolographicInteropTaskQueue::PostMessageW(this[5], 0xEu, a2, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}

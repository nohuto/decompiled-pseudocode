/*
 * XREFs of ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x1801F92E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1801F8BFC (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::SetActiveExclusiveView(CHolographicManager *this, unsigned int a2)
{
  *((_DWORD *)this + 18) = a2;
  if ( *((_QWORD *)this + 5) )
  {
    if ( *((_BYTE *)this + 224) )
      CHolographicInteropTaskQueue::PostMessageW(
        *((CHolographicInteropTaskQueue **)this + 5),
        0x10u,
        0LL,
        (void *)a2,
        0LL,
        0LL,
        0LL);
  }
}

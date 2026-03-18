/*
 * XREFs of ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x1801C13B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1801C0B3C (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::SetActiveExclusiveView(CHolographicManager *this, unsigned int a2)
{
  *((_DWORD *)this + 18) = a2;
  if ( *((_QWORD *)this + 5) )
  {
    if ( *((_BYTE *)this + 192) )
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

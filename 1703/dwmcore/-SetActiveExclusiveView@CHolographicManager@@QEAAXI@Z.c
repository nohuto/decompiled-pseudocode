/*
 * XREFs of ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x1801A653C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::SetActiveExclusiveView(CHolographicManager *this, unsigned int a2)
{
  CHolographicInteropTaskQueue *v2; // rcx

  v2 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
  if ( v2 )
    CHolographicInteropTaskQueue::PostMessageW(v2, 0xFu, 0LL, (void *)a2, 0LL, 0LL, 0LL);
}

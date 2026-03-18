/*
 * XREFs of ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801BD930
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801BDD40 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x1801C0D20 (-ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1801C0DFC (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 */

void __fastcall CHolographicExclusiveView::DetachFromChannel(
        CHolographicExclusiveView *this,
        struct CChannelContext *a2)
{
  void *v3; // rcx
  CHolographicManager *v4; // rcx

  CHolographicExclusiveView::ReleaseSwapChain(this);
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 12) = 0LL;
  }
  v4 = (CHolographicManager *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    CHolographicManager::ReleaseExclusivePresentData(v4, *((_DWORD *)this + 16));
    CHolographicManager::RemoveExclusiveView(*((CHolographicManager **)this + 7), this);
  }
}

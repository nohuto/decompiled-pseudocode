/*
 * XREFs of ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x1801C0D20
 * Callers:
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801BD930 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x1801BDC28 (-ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEX.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ReleaseExclusivePresentData(CHolographicInteropTaskQueue **this, unsigned int a2)
{
  if ( this[5] )
  {
    if ( *((_BYTE *)this + 192) )
      CHolographicInteropTaskQueue::PostMessageW(this[5], 0x17u, 0LL, (void *)a2, 0LL, 0LL, 0LL);
  }
}

/*
 * XREFs of ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801BDD40
 * Callers:
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801BD930 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1801BDB88 (-ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICE.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicExclusiveView::ReleaseSwapChain(CHolographicExclusiveView *this)
{
  RTL_SRWLOCK *v1; // rbx
  __int64 v3; // rax
  CHolographicInteropTaskQueue *v4; // rcx

  v1 = (RTL_SRWLOCK *)((char *)this + 400);
  AcquireSRWLockExclusive((PSRWLOCK)this + 50);
  if ( *((_QWORD *)this + 10) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    ReleaseSRWLockExclusive(v1);
    v3 = *((_QWORD *)this + 7);
    if ( v3 )
    {
      v4 = *(CHolographicInteropTaskQueue **)(v3 + 40);
      if ( v4 )
      {
        if ( *(_BYTE *)(v3 + 192) )
          CHolographicInteropTaskQueue::PostMessageW(v4, 0xFu, (struct IUnknown *)this, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    ReleaseSRWLockExclusive(v1);
  }
}

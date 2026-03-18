/*
 * XREFs of ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x1801BD788
 * Callers:
 *     ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1801BDB88 (-ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1801BFF30 (-AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::AttachSwapChain(RTL_SRWLOCK *this, struct CResource *a2)
{
  int v2; // esi
  RTL_SRWLOCK *v5; // rbx
  signed int v6; // eax
  CHolographicManager *Ptr; // rcx

  v2 = 0;
  if ( a2 )
  {
    v5 = this + 50;
    AcquireSRWLockExclusive(this + 50);
    this[10].Ptr = a2;
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x17Cu);
    }
    else
    {
      Ptr = (CHolographicManager *)this[7].Ptr;
      if ( Ptr )
        CHolographicManager::AttachExclusiveSwapChain(Ptr, (struct CHolographicExclusiveView *)this);
    }
    ReleaseSRWLockExclusive(v5);
    if ( v2 < 0 )
      this[10].Ptr = 0LL;
  }
  return (unsigned int)v2;
}

/*
 * XREFs of ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C35B8
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801C3278 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x1801C3974 (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801BD884 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801BD8E0 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessReleaseExclusiveSwapChain(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 *v3; // rdi
  CHolographicExclusiveView *v5; // rcx

  v3 = (__int64 *)((char *)this + 152);
  v5 = (CHolographicExclusiveView *)*((_QWORD *)this + 19);
  if ( v5 == (CHolographicExclusiveView *)a2 && !*((_BYTE *)v5 + 75) )
  {
    CHolographicExclusiveView::DeactivateView(v5, this);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
  }
  if ( a2[11].lpVtbl )
  {
    CHolographicExclusiveView::DeactivateSwapChain((CHolographicExclusiveView *)a2);
    (*((void (__fastcall **)(struct IUnknownVtbl *))a2[11].lpVtbl->QueryInterface + 2))(a2[11].lpVtbl);
    a2[11].lpVtbl = 0LL;
    BYTE2(a2[9].lpVtbl) = 0;
  }
}

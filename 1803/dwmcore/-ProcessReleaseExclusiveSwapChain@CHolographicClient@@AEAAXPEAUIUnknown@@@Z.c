/*
 * XREFs of ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFD34
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801FF9B0 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFD9C (-ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801F9E98 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801F9EF4 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessReleaseExclusiveSwapChain(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 *v3; // rdi
  CHolographicExclusiveView *v5; // rcx

  v3 = (__int64 *)((char *)this + 184);
  v5 = (CHolographicExclusiveView *)*((_QWORD *)this + 23);
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

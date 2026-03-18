/*
 * XREFs of ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C36A4
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801C3278 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x1801C3974 (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180155FC4 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801BD8E0 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessRemoveExclusiveView(CHolographicClient *this, struct IUnknown *a2)
{
  CHolographicExclusiveView **v2; // rsi
  struct IUnknown *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CHolographicExclusiveView **)((char *)this + 152);
  v5 = a2;
  if ( *((struct IUnknown **)this + 19) == a2 )
  {
    CHolographicExclusiveView::DeactivateView(*v2, this);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v2);
  }
  if ( (unsigned int)DynArray<CBaseExpression *,1>::Remove((__int64 *)this + 9, (__int64 *)&v5) )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->Release)(a2);
}

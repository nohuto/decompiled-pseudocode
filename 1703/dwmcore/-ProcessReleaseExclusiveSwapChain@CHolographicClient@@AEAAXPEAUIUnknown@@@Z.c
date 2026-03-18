/*
 * XREFs of ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801A84D0
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801A82E4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801A4AB0 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?ThawTextures@CHolographicClient@@AEAAXXZ @ 0x1801A8948 (-ThawTextures@CHolographicClient@@AEAAXXZ.c)
 */

void __fastcall CHolographicClient::ProcessReleaseExclusiveSwapChain(CHolographicClient *this, struct IUnknown *a2)
{
  CHolographicExclusiveView **v2; // rsi

  v2 = (CHolographicExclusiveView **)((char *)this + 152);
  if ( *((struct IUnknown **)this + 19) == a2 )
  {
    CHolographicExclusiveView::DeactivateView(*v2, this);
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)v2);
    CHolographicClient::ThawTextures(this);
  }
  BYTE2(a2[9].lpVtbl) = 0;
  CResource::UnRegisterNotifierInternal((CResource *)a2, (struct CResource *)a2[10].lpVtbl);
  a2[10].lpVtbl = 0LL;
}

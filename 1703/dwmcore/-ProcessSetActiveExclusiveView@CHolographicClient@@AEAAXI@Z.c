/*
 * XREFs of ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1801A8700
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801A82E4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1801A4968 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801A4AB0 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x1801A7608 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     ?FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z @ 0x1801A7A78 (-FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z.c)
 *     ?FreezeTextures@CHolographicClient@@AEAAXXZ @ 0x1801A7BC8 (-FreezeTextures@CHolographicClient@@AEAAXXZ.c)
 *     ?ThawTextures@CHolographicClient@@AEAAXXZ @ 0x1801A8948 (-ThawTextures@CHolographicClient@@AEAAXXZ.c)
 */

void __fastcall CHolographicClient::ProcessSetActiveExclusiveView(CHolographicClient *this, int a2)
{
  CHolographicExclusiveView *ExclusiveViewByViewId; // rdi
  CHolographicExclusiveView *v4; // rcx

  *((_DWORD *)this + 34) = a2;
  ExclusiveViewByViewId = CHolographicClient::FindExclusiveViewByViewId(this, a2);
  v4 = (CHolographicExclusiveView *)*((_QWORD *)this + 19);
  if ( ExclusiveViewByViewId != v4 )
  {
    if ( v4 )
    {
      CHolographicExclusiveView::DeactivateView(v4, this);
      Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 19);
      CHolographicClient::ThawTextures(this);
    }
    if ( ExclusiveViewByViewId )
    {
      if ( CHolographicExclusiveView::ActivateView(ExclusiveViewByViewId, this) )
      {
        Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=(
          (__int64 *)this + 19,
          (__int64)ExclusiveViewByViewId);
        CHolographicClient::FreezeTextures(this);
      }
    }
  }
}

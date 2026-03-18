/*
 * XREFs of ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1801BD6EC
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJII@Z @ 0x1801C2C90 (-FrameUpdate@CHolographicClient@@UEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x1801BD650 (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801BD884 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?OnExclusiveViewActivate@CHolographicClient@@QEAA_NIPEAPEAX@Z @ 0x1801C2E2C (-OnExclusiveViewActivate@CHolographicClient@@QEAA_NIPEAPEAX@Z.c)
 */

bool __fastcall CHolographicExclusiveView::ActivateView(CHolographicExclusiveView *this, struct CHolographicClient *a2)
{
  int v2; // edi
  signed int v5; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 75) )
  {
    *((_BYTE *)this + 72) = 1;
  }
  else
  {
    v5 = CHolographicExclusiveView::ActivateSwapChain(this);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xCDu);
    }
    else if ( !CHolographicClient::OnExclusiveViewActivate(a2, *((_DWORD *)this + 36), (void **)this + 19) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0xD0u);
LABEL_8:
      CHolographicExclusiveView::DeactivateSwapChain(this);
      return *((_BYTE *)this + 72);
    }
  }
  if ( v2 < 0 )
    goto LABEL_8;
  return *((_BYTE *)this + 72);
}

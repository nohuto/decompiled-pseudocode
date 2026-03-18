/*
 * XREFs of ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1801A4968
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJI@Z @ 0x1801A7AB0 (-FrameUpdate@CHolographicClient@@UEAAJI@Z.c)
 *     ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1801A8700 (-ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x1801A48CC (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801A4A58 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?OnExclusiveViewActivate@CHolographicClient@@QEAA_NIPEAPEAX@Z @ 0x1801A7F20 (-OnExclusiveViewActivate@CHolographicClient@@QEAA_NIPEAPEAX@Z.c)
 */

bool __fastcall CHolographicExclusiveView::ActivateView(CHolographicExclusiveView *this, struct CHolographicClient *a2)
{
  int v4; // eax
  int v5; // edi

  v4 = CHolographicExclusiveView::ActivateSwapChain(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x9Bu);
  }
  else if ( !CHolographicClient::OnExclusiveViewActivate(a2, *((_DWORD *)this + 32), (void **)this + 17) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x9Eu);
LABEL_6:
    CHolographicExclusiveView::DeactivateSwapChain(this);
    return *((_BYTE *)this + 72);
  }
  if ( v5 < 0 )
    goto LABEL_6;
  return *((_BYTE *)this + 72);
}

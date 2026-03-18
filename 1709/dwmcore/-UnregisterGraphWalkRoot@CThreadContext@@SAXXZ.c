/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800B3330
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18005CD64 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800B31C8 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180035760 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  signed int Current; // eax
  __int64 v1; // rdx
  CPtrArrayBase *v2; // [rsp+40h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v2);
  if ( Current < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Current, 0x8Du);
  }
  else
  {
    if ( (*(_QWORD *)v2 & 2) != 0 )
      v1 = *(_QWORD *)(*(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v1 = *(_QWORD *)v2 & 1LL;
    CPtrArrayBase::RemoveAt(v2, v1 - 1);
  }
}

/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800BEDE4
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x1800A8E44 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800BECE0 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x1802103C8 (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18008BA48 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  int Current; // eax
  __int64 v1; // rdx
  CPtrArrayBase *v2; // [rsp+40h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v2);
  if ( Current < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Current, 0x8Du);
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

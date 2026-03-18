/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800C6210
 * Callers:
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x1800139FC (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18009F054 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  int Current; // eax
  __int64 v1; // rdx
  CPtrArrayBase *v2; // [rsp+40h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v2);
  if ( Current < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Current, 0x8Du);
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

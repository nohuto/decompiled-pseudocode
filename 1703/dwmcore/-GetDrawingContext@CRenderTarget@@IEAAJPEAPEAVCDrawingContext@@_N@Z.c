/*
 * XREFs of ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800B4CD8
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006D2A4 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z @ 0x180128FEC (-SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801A70E4 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTarget::GetDrawingContext(CRenderTarget *this, struct CDrawingContext **a2)
{
  unsigned int v2; // ebx
  int v6; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 13)
    || (v6 = (*(__int64 (__fastcall **)(CRenderTarget *))(*(_QWORD *)this + 40LL))(this), v2 = v6, v6 >= 0) )
  {
    *a2 = (struct CDrawingContext *)*((_QWORD *)this + 13);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x62u);
  }
  return v2;
}

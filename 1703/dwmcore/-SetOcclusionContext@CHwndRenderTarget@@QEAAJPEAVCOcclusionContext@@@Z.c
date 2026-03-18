/*
 * XREFs of ?SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z @ 0x180128FEC
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800B4CD8 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C77EC (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::SetOcclusionContext(CHwndRenderTarget *this, struct COcclusionContext *a2)
{
  int DrawingContext; // eax
  unsigned int v4; // edx
  unsigned int v5; // ebx
  COcclusionContext **v6; // rdi
  COcclusionContext **v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  DrawingContext = CRenderTarget::GetDrawingContext(this, (struct CDrawingContext **)&v8);
  v5 = DrawingContext;
  if ( DrawingContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x2BDu);
  }
  else
  {
    v6 = v8;
    if ( v8[836] )
      SAFE_DELETE<COcclusionContext>(v8 + 836, v4);
    v6[835] = a2;
  }
  return v5;
}

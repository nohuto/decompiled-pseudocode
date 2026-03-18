/*
 * XREFs of ?SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z @ 0x18011A128
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015570 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x180079258 (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800BEA04 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::SetOcclusionContext(CHwndRenderTarget *this, struct COcclusionContext *a2)
{
  signed int DrawingContext; // eax
  unsigned int v4; // ebx
  COcclusionContext **v5; // rdi
  COcclusionContext **v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  DrawingContext = CRenderTarget::GetDrawingContext(this, (struct CDrawingContext **)&v7);
  v4 = DrawingContext;
  if ( DrawingContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DrawingContext, 0x26Bu);
  }
  else
  {
    v5 = v7;
    if ( v7[844] )
      SAFE_DELETE<COcclusionContext>(v7 + 844);
    v5[843] = a2;
  }
  return v4;
}

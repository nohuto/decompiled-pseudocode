/*
 * XREFs of ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180062EB0
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A670 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     _lambda_e895dadb580e6fc31ae2a2922a07237f_::operator() @ 0x18009EF8C (_lambda_e895dadb580e6fc31ae2a2922a07237f_--operator().c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18015C540 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800618C0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::End(CDrawListEntryBuilder *this)
{
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v3; // ebx

  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, 0, 0LL, 0LL);
  v3 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x2F4u);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 32);
  return v3;
}

/*
 * XREFs of ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800AF094
 * Callers:
 *     _lambda_59bf99de1785f265d3dfac0583631066_::operator() @ 0x180005CFC (_lambda_59bf99de1785f265d3dfac0583631066_--operator().c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B35A0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180185584 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800ADB70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1E10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDrawListEntryBuilder::End(CDrawListEntryBuilder *this)
{
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v3; // ebx

  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, 0, 0LL, 0LL);
  v3 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x2F4u);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((char *)this + 32);
  return v3;
}

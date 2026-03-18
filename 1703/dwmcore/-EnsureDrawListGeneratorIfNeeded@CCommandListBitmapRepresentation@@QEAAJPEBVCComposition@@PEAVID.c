/*
 * XREFs of ?EnsureDrawListGeneratorIfNeeded@CCommandListBitmapRepresentation@@QEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@@Z @ 0x180009EA0
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000AD30 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180164870 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180009ED0 (-CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwne.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCommandListBitmapRepresentation::EnsureDrawListGeneratorIfNeeded(
        struct CPrimitiveGroupDrawListGenerator **this,
        const struct CComposition *a2,
        struct ID2DContextOwner *a3,
        struct ID2DContext *a4)
{
  unsigned int v4; // ebx
  int NewGenerator; // eax

  v4 = 0;
  if ( !this[38] )
  {
    NewGenerator = CCommandListBitmapRepresentation::CreateNewGenerator(
                     (CCommandListBitmapRepresentation *)this,
                     a2,
                     a3,
                     a4,
                     this + 38);
    v4 = NewGenerator;
    if ( NewGenerator < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, NewGenerator, 0x130u);
  }
  return v4;
}

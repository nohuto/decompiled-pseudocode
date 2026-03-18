/*
 * XREFs of ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180164870
 * Callers:
 *     <none>
 * Callees:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?EnsureDrawListGeneratorIfNeeded@CCommandListBitmapRepresentation@@QEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@@Z @ 0x180009EA0 (-EnsureDrawListGeneratorIfNeeded@CCommandListBitmapRepresentation@@QEAAJPEBVCComposition@@PEAVID.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndBitmap::GenerateDrawList(
        struct CPrimitiveGroupDrawListGenerator **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  CPrimitiveGroupDrawListGenerator *v9; // rcx
  int DrawList; // eax

  v7 = CCommandListBitmapRepresentation::EnsureDrawListGeneratorIfNeeded(
         this + 9,
         this[2],
         (struct ID2DContextOwner *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)),
         a4);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x170u);
  }
  else
  {
    v9 = this[47];
    if ( v9
      && (DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(v9, a2, 0LL, a4), v8 = DrawList, DrawList < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawList, 0x176u);
    }
    else
    {
      return 0;
    }
  }
  return v8;
}

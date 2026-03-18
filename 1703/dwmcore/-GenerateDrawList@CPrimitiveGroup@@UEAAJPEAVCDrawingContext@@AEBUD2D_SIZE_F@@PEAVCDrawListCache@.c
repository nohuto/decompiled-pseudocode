/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000C3B0
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@QEAAJXZ @ 0x18000C334 (-EnsureDrawListGenerator@CPrimitiveGroup@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::GenerateDrawList(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  int DrawList; // eax

  if ( !*((_QWORD *)this + 47) )
    return 0;
  v7 = CPrimitiveGroup::EnsureDrawListGenerator(this);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA3u);
    return v8;
  }
  DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(
               *((CPrimitiveGroupDrawListGenerator **)this + 20),
               a2,
               0LL,
               a4);
  v8 = DrawList;
  if ( DrawList < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawList, 0xA5u);
  else
    return 0;
  return v8;
}

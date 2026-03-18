/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180174EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18002721C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::GenerateDrawList(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  signed int DrawList; // eax
  unsigned int v8; // ebx
  const struct D2D_MATRIX_3X2_F *v9; // r8
  unsigned int v11; // [rsp+20h] [rbp-18h]

  if ( !*((_QWORD *)this + 63) )
    return 0;
  DrawList = CPrimitiveGroup::EnsureDrawListGenerator(this);
  v8 = DrawList;
  if ( DrawList < 0 )
  {
    v11 = 163;
    goto LABEL_8;
  }
  DrawList = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(*((CPrimitiveGroupDrawListGenerator **)this + 20), a2, 0);
  v8 = DrawList;
  if ( DrawList < 0 )
  {
    v11 = 164;
    goto LABEL_8;
  }
  DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(
               *((CPrimitiveGroupDrawListGenerator **)this + 20),
               (const struct CVisualTree **)a2,
               v9,
               a4);
  v8 = DrawList;
  if ( DrawList >= 0 )
    return 0;
  v11 = 165;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DrawList, v11);
  return v8;
}

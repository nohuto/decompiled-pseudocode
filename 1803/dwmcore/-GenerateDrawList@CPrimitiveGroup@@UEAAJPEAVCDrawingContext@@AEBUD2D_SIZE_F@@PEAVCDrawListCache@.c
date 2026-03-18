/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180097330
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x180072BEC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x180097C3C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::GenerateDrawList(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int DrawList; // eax
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
    goto LABEL_10;
  }
  DrawList = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(*((CPrimitiveGroupDrawListGenerator **)this + 20), a2, 0);
  v8 = DrawList;
  if ( DrawList < 0 )
  {
    v11 = 164;
    goto LABEL_10;
  }
  DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(
               *((CPrimitiveGroupDrawListGenerator **)this + 20),
               a2,
               v9,
               a4);
  v8 = DrawList;
  if ( DrawList < 0 )
  {
    v11 = 165;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, v11);
    return v8;
  }
  return 0;
}

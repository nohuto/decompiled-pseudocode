/*
 * XREFs of ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180027268
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180025250 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18002721C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::GetDrawListGeneratorNoRef(
        CPrimitiveGroupDrawListGenerator **this,
        struct CDrawingContext *a2,
        struct CPrimitiveGroupDrawListGenerator **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  v6 = CPrimitiveGroup::EnsureDrawListGenerator((CPrimitiveGroup *)this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x253u);
  }
  else
  {
    v8 = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(this[20], a2, 0);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x254u);
    else
      *a3 = this[20];
  }
  return v7;
}

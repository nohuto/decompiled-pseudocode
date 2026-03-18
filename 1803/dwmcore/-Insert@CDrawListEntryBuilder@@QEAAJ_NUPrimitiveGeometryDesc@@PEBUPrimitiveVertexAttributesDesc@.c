/*
 * XREFs of ?Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AF270
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B35A0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x18018591C (-CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AF0D0 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017AEE0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Insert(
        CDrawListEntryBuilder *a1,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        __int64 a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  unsigned int v6; // ebx
  char v7; // dl
  __int128 *v8; // r8
  const struct PrimitiveGeometryDesc *v9; // r10
  const struct PrimitiveVertexAttributesDesc *v10; // r11
  __int64 v12; // xmm1_8
  int v13; // eax
  int inserted; // eax
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  v6 = 0;
  if ( !IsEmpty(a3) && (*((_BYTE *)v8 + 20) & 3) != 0 )
  {
    if ( v7 )
    {
      inserted = CDrawListEntryBuilder::InsertWARP(a1, v9, v10, a5);
      v6 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1E4u);
    }
    else
    {
      v12 = *((_QWORD *)v8 + 2);
      v15 = *v8;
      v16 = v12;
      v13 = CDrawListEntryBuilder::InsertHW((__int64)a1, (__int64)&v15, (__int64)v10, (D2DMatrixHelper *)a5);
      v6 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1E8u);
    }
  }
  return v6;
}

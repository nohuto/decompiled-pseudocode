/*
 * XREFs of ?Insert@CDrawListPrimitiveBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800412E8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?InsertHW@CDrawListPrimitiveBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180041158 (-InsertHW@CDrawListPrimitiveBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesD.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18015BF50 (-InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::Insert(
        CDrawListPrimitiveBuilder *a1,
        char a2,
        const struct PrimitiveGeometryDesc *a3,
        const struct PrimitiveVertexAttributesDesc *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // xmm1_8
  int v8; // eax
  int inserted; // eax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v5 = 0;
  if ( *((float *)a3 + 2) > *(float *)a3 && *((float *)a3 + 3) > *((float *)a3 + 1) && (*((_BYTE *)a3 + 20) & 3) != 0 )
  {
    if ( a2 )
    {
      inserted = CDrawListPrimitiveBuilder::InsertWARP(a1, a3, a4, a5);
      v5 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x1DAu);
    }
    else
    {
      v7 = *((_QWORD *)a3 + 2);
      v10 = *(_OWORD *)a3;
      v11 = v7;
      v8 = CDrawListPrimitiveBuilder::InsertHW((__int64)a1, (__int64)&v10, (__int64)a4, a5);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1DEu);
    }
  }
  return v5;
}

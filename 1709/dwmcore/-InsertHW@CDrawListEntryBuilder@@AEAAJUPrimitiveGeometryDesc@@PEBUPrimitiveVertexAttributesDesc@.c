/*
 * XREFs of ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180062EEC
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180063054 (-Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800618C0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180061E80 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B3630 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800B6FE8 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?EstimatedArea@CDrawListEntryBuilder@@CAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B97A8 (-EstimatedArea@CDrawListEntryBuilder@@CAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertHW(__int64 a1, __int64 a2, __int64 a3, D2DMatrixHelper *a4)
{
  char v8; // r12
  char v9; // r13
  struct CPrimitiveColor *v10; // r15
  int appended; // eax
  unsigned int v12; // ebx
  CCpuClip *v14; // rcx
  int v15; // eax
  int v16; // eax
  const struct D2D_MATRIX_3X2_F *v17; // rdx
  int BuiltHWPrimitiveEntry; // eax

  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( a3 )
    v10 = *(struct CPrimitiveColor **)(a3 + 24);
  if ( CCommonRegistryData::m_fEnableMegaRects
    && (*(_BYTE *)(a1 + 24) & 1) != 0
    && CDrawListEntryBuilder::EstimatedArea((const struct D2D_RECT_F *)a2, (const struct D2D_MATRIX_3X2_F *)a4) > (float)(int)CCommonRegistryData::m_dwMegaRectSize )
  {
    if ( (v14 = *(CCpuClip **)(a1 + 16), !*(_QWORD *)v14) && !*((_QWORD *)v14 + 2)
      || CCpuClip::IsAxisAlignedRectangle(v14) && (!a4 || D2DMatrixHelper::Is2DAxisAlignedPreserving(a4, v17)) )
    {
      if ( *(_DWORD *)(a1 + 2376) )
      {
        BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                                  (CDrawListEntryBuilder *)a1,
                                  0,
                                  0LL,
                                  0LL);
        v12 = BuiltHWPrimitiveEntry;
        if ( BuiltHWPrimitiveEntry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x223u);
          return v12;
        }
      }
      v8 = 1;
      if ( (*(_BYTE *)(a2 + 20) & 3) == 3 )
      {
        v9 = 1;
        *(_BYTE *)(a2 + 20) = *(_BYTE *)(a2 + 20) & 0xFC | 1;
      }
    }
  }
  appended = CDrawListEntryBuilder::AppendHWPrimitive(
               (CDrawListEntryBuilder *)a1,
               (const struct PrimitiveGeometryDesc *)a2,
               (const struct PrimitiveVertexAttributesDesc *)a3,
               a4);
  v12 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x233u);
  }
  else if ( (*(_DWORD *)(a1 + 2448) >= 0xC8u || v10 || v8)
         && (v15 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                     (CDrawListEntryBuilder *)a1,
                     v8,
                     v10,
                     (const struct _D3DCOLORVALUE *)(a3 & -(__int64)(v10 != 0LL))),
             v12 = v15,
             v15 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x243u);
  }
  else if ( v9 )
  {
    *(_BYTE *)(a2 + 20) &= ~1u;
    *(_BYTE *)(a2 + 20) |= 2u;
    v16 = CDrawListEntryBuilder::AppendHWPrimitive(
            (CDrawListEntryBuilder *)a1,
            (const struct PrimitiveGeometryDesc *)a2,
            (const struct PrimitiveVertexAttributesDesc *)a3,
            a4);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x24Bu);
  }
  return v12;
}

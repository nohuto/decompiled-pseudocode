/*
 * XREFs of ?InsertHW@CDrawListPrimitiveBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180041158
 * Callers:
 *     ?Insert@CDrawListPrimitiveBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800412E8 (-Insert@CDrawListPrimitiveBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesD.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180024080 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18003FC4C (-ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOL.c)
 *     ?AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180040260 (-AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVerte.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800C1278 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1800C12CC (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     ?EstimatedArea@CDrawListPrimitiveBuilder@@CAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C44C0 (-EstimatedArea@CDrawListPrimitiveBuilder@@CAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::InsertHW(__int64 a1, __int64 a2, __int64 a3, struct D2D_MATRIX_3X2_F *a4)
{
  char v4; // r12
  char v5; // r13
  struct CPrimitiveColor *v10; // r15
  int appended; // eax
  unsigned int v12; // ebx
  CCpuClip *v14; // rcx
  int v15; // eax
  int v16; // eax
  const struct D2D_MATRIX_3X2_F *v17; // rdx
  int BuiltHWPrimitiveEntry; // eax

  v4 = 0;
  v5 = 0;
  if ( a3 )
    v10 = *(struct CPrimitiveColor **)(a3 + 24);
  else
    v10 = 0LL;
  if ( CCommonRegistryData::m_fEnableMegaRects
    && (*(_BYTE *)(a1 + 24) & 1) != 0
    && CDrawListPrimitiveBuilder::EstimatedArea((const struct D2D_RECT_F *)a2, a4) > (float)(int)CCommonRegistryData::m_dwMegaRectSize
    && (!CCpuClip::HasClip(*(CCpuClip **)(a1 + 16))
     || CCpuClip::IsAxisAlignedRectangle(v14)
     && (!a4 || D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)a4, v17))) )
  {
    if ( *(_DWORD *)(a1 + 2376) )
    {
      BuiltHWPrimitiveEntry = CDrawListPrimitiveBuilder::ExtractBuiltHWPrimitiveEntry(
                                (CDrawListPrimitiveBuilder *)a1,
                                0,
                                0LL,
                                0LL);
      v12 = BuiltHWPrimitiveEntry;
      if ( BuiltHWPrimitiveEntry < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x219u);
        return v12;
      }
    }
    v4 = 1;
    if ( (*(_BYTE *)(a2 + 20) & 3) == 3 )
    {
      v5 = 1;
      *(_BYTE *)(a2 + 20) = *(_BYTE *)(a2 + 20) & 0xFC | 1;
    }
  }
  appended = CDrawListPrimitiveBuilder::AppendHWPrimitive(
               (CDrawListPrimitiveBuilder *)a1,
               (const struct PrimitiveGeometryDesc *)a2,
               (const struct PrimitiveVertexAttributesDesc *)a3,
               (const struct D2D1::Matrix3x2F *)a4);
  v12 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x229u);
  }
  else if ( (*(_DWORD *)(a1 + 2448) >= 0xC8u || v10 || v4)
         && (v15 = CDrawListPrimitiveBuilder::ExtractBuiltHWPrimitiveEntry(
                     (CDrawListPrimitiveBuilder *)a1,
                     v4,
                     v10,
                     (const struct _D3DCOLORVALUE *)(a3 & -(__int64)(v10 != 0LL))),
             v12 = v15,
             v15 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x239u);
  }
  else if ( v5 )
  {
    *(_BYTE *)(a2 + 20) &= ~1u;
    *(_BYTE *)(a2 + 20) |= 2u;
    v16 = CDrawListPrimitiveBuilder::AppendHWPrimitive(
            (CDrawListPrimitiveBuilder *)a1,
            (const struct PrimitiveGeometryDesc *)a2,
            (const struct PrimitiveVertexAttributesDesc *)a3,
            (const struct D2D1::Matrix3x2F *)a4);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x241u);
  }
  return v12;
}

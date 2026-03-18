/*
 * XREFs of ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z @ 0x1800ADF68
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800AE120 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?EndFigure@GeometrySink@CDrawListEntryBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18017AAF0 (-EndFigure@GeometrySink@CDrawListEntryBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x1800B2214 (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x1800B2340 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV-$S.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendHWGeometry(CDrawListEntryBuilder *this, bool a2, bool a3)
{
  int GeometryCount; // eax
  unsigned int v5; // ebx
  int v6; // r14d
  int v7; // r15d
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int Geometry; // eax
  int v15; // ecx
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+5Ch] [rbp-14h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+68h] [rbp-8h]
  int v22; // [rsp+6Ch] [rbp-4h]
  __int64 v23; // [rsp+B0h] [rbp+40h] BYREF
  bool v24; // [rsp+B8h] [rbp+48h]
  __int64 v25; // [rsp+C8h] [rbp+58h] BYREF

  v24 = a2;
  LODWORD(v23) = 0;
  LODWORD(v25) = 0;
  GeometryCount = Mesh::GetGeometryCount(
                    (CDrawListEntryBuilder *)((char *)this + 112),
                    a2,
                    a3,
                    (int *)&v23,
                    (int *)&v25);
  v5 = GeometryCount;
  if ( GeometryCount < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, GeometryCount, 0x50Bu);
    return v5;
  }
  v6 = v25;
  if ( (int)v25 > 0 )
  {
    v7 = v23;
    v8 = 8 * *(_DWORD *)this + 16;
    v9 = DynArrayImpl<0>::Grow((__int64)this + 360, 1u, (int)v23 * v8, 0, 0LL);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x512u);
      return v5;
    }
    v10 = DynArrayImpl<0>::Grow((__int64)this + 1352, 1u, v7 * v8, 0, 0LL);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x513u);
      return v5;
    }
    v11 = DynArrayImpl<0>::Grow((__int64)this + 2352, 2u, v6, 0, 0LL);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x514u);
      return v5;
    }
    v12 = *((_QWORD *)this + 294);
    v20 = *((_QWORD *)this + 45) + *((unsigned int *)this + 96);
    v17 = *((_QWORD *)this + 169) + *((unsigned int *)this + 344);
    v13 = *((unsigned int *)this + 594);
    v21 = v8;
    v22 = v7;
    v18 = v8;
    v19 = v7;
    Geometry = Mesh::GenerateGeometry(
                 (CDrawListEntryBuilder *)((char *)this + 112),
                 (__int64)&v17,
                 *(_DWORD *)this,
                 (__int64)&v23,
                 *((_WORD *)this + 1172),
                 (unsigned __int16 *)(v12 + 2 * v13),
                 (__int64)&v25);
    v5 = Geometry;
    if ( Geometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Geometry, 0x529u);
      return v5;
    }
    v15 = v23;
    *((_DWORD *)this + 586) += v23;
    *((_DWORD *)this + 96) += v15 * v8;
    *((_DWORD *)this + 344) += v15 * v8;
    *((_DWORD *)this + 594) += v25;
  }
  return 0;
}

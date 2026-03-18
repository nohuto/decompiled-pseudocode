/*
 * XREFs of ?AppendHWGeometry@CDrawListPrimitiveBuilder@@AEAAJ_N0@Z @ 0x18004009C
 * Callers:
 *     ?AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180040260 (-AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVerte.c)
 *     ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18015BB70 (-EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x18003D118 (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x18003D250 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV-$S.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::AppendHWGeometry(CDrawListPrimitiveBuilder *this, char a2, char a3)
{
  int GeometryCount; // eax
  unsigned int v6; // ebx
  int v7; // r14d
  int v8; // r15d
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // ecx
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]
  __int64 v21; // [rsp+60h] [rbp-10h] BYREF
  int v22; // [rsp+68h] [rbp-8h]
  int v23; // [rsp+6Ch] [rbp-4h]
  __int64 v24; // [rsp+B0h] [rbp+40h] BYREF
  char v25; // [rsp+B8h] [rbp+48h]
  __int64 v26; // [rsp+C8h] [rbp+58h] BYREF

  v25 = a2;
  LODWORD(v24) = 0;
  LODWORD(v26) = 0;
  GeometryCount = Mesh::GetGeometryCount(
                    (CDrawListPrimitiveBuilder *)((char *)this + 112),
                    a2,
                    a3,
                    (int *)&v24,
                    (int *)&v26);
  v6 = GeometryCount;
  if ( GeometryCount < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, GeometryCount, 0x547u);
    return v6;
  }
  v7 = v26;
  if ( (int)v26 > 0 )
  {
    v8 = v24;
    v9 = 8 * *(_DWORD *)this + 16;
    v10 = DynArrayImpl<0>::Grow((int)this + 360, 1, (int)v24 * v9, 0, 0LL);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x54Eu);
      return v6;
    }
    v11 = DynArrayImpl<0>::Grow((int)this + 1352, 1, v8 * v9, 0, 0LL);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x54Fu);
      return v6;
    }
    v12 = DynArrayImpl<0>::Grow((int)this + 2352, 2, v7, 0, 0LL);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x550u);
      return v6;
    }
    v13 = *((_QWORD *)this + 294);
    v21 = *((_QWORD *)this + 45) + *((unsigned int *)this + 96);
    v18 = *((_QWORD *)this + 169) + *((unsigned int *)this + 344);
    v14 = *((unsigned int *)this + 594);
    v22 = v9;
    v23 = v8;
    v19 = v9;
    v20 = v8;
    v15 = Mesh::GenerateGeometry(
            (CDrawListPrimitiveBuilder *)((char *)this + 112),
            v25,
            a3,
            (__int64)&v21,
            (__int64)&v18,
            *(_DWORD *)this,
            &v24,
            *((_WORD *)this + 1172),
            (unsigned __int16 *)(v13 + 2 * v14),
            (int *)&v26);
    v6 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x565u);
      return v6;
    }
    v16 = v24;
    *((_DWORD *)this + 586) += v24;
    *((_DWORD *)this + 96) += v16 * v9;
    *((_DWORD *)this + 344) += v16 * v9;
    *((_DWORD *)this + 594) += v26;
  }
  return 0;
}

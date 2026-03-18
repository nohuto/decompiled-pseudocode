/*
 * XREFs of ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x18015E560
 * Callers:
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x18003D118 (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x18003D250 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV-$S.c)
 * Callees:
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x18003BD00 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z @ 0x18015E6CC (-RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z.c)
 */

__int64 __fastcall Mesh::InitMeshGraph(Mesh *this)
{
  const struct Mesh::MeshGraph *v2; // rdx
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  int *v7; // rdx
  int v8; // eax

  if ( (*((_BYTE *)this + 236) & 2) != 0 )
  {
    v2 = (const struct Mesh::MeshGraph *)*((_QWORD *)this + 23);
    if ( v2 )
    {
      v3 = Mesh::RestoreCachedGraph(this, v2);
      v4 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x22Cu);
        return v4;
      }
    }
    else
    {
      v5 = Mesh::BuildGrid(this, 0LL, *((_DWORD *)this + 52), *((_DWORD *)this + 53));
      v4 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x230u);
        return v4;
      }
    }
    if ( (*((_BYTE *)this + 236) & 0x40) != 0 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 22) + 64LL);
      if ( v6 )
      {
        v7 = (int *)((char *)this + 220);
        do
        {
          v8 = *v7++;
          *(_DWORD *)(v6 + 28) |= v8;
          v6 = *(_QWORD *)(v6 + 80);
        }
        while ( v6 != *(_QWORD *)(*((_QWORD *)this + 22) + 64LL) && v6 );
      }
    }
    *((_BYTE *)this + 236) &= ~2u;
  }
  return 0;
}

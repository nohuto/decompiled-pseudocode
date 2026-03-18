/*
 * XREFs of ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x18017DC84
 * Callers:
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x1800B2214 (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@UVertexAAFixup_UVxN@@@@HPEAHGPEAG3@Z @ 0x1800B2340 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV-$S.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800B0CF0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 *     ?RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z @ 0x18017DDF4 (-RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z.c)
 */

__int64 __fastcall Mesh::InitMeshGraph(Mesh *this)
{
  const struct Mesh::MeshGraph *v2; // rdx
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  char v6; // cl
  __int64 v7; // rdx
  int *v8; // rcx
  int v9; // eax

  if ( (*((_BYTE *)this + 236) & 2) != 0 )
  {
    v2 = (const struct Mesh::MeshGraph *)*((_QWORD *)this + 23);
    if ( v2 )
    {
      v3 = Mesh::RestoreCachedGraph(this, v2);
      v4 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1E0u);
        return v4;
      }
    }
    else
    {
      v5 = Mesh::BuildGrid(this, 0LL, *((_DWORD *)this + 52), *((_DWORD *)this + 53));
      v4 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1E4u);
        return v4;
      }
    }
    v6 = *((_BYTE *)this + 236);
    if ( (v6 & 0x40) != 0 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 22) + 64LL);
      if ( v7 )
      {
        v8 = (int *)((char *)this + 220);
        do
        {
          v9 = *v8++;
          *(_DWORD *)(v7 + 28) |= v9;
          v7 = *(_QWORD *)(v7 + 80);
        }
        while ( v7 != *(_QWORD *)(*((_QWORD *)this + 22) + 64LL) && v7 );
        v6 = *((_BYTE *)this + 236);
      }
    }
    *((_BYTE *)this + 236) = v6 & 0xFD;
  }
  return 0;
}

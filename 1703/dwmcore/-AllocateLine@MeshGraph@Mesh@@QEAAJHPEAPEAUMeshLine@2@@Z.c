/*
 * XREFs of ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x1801335C0
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x18015D704 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MeshGraph::AllocateLine(Mesh::MeshGraph *this, int a2, struct Mesh::MeshLine **a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v6; // rcx

  v3 = *((int *)this + 14);
  if ( (int)v3 + a2 > *((_DWORD *)this + 12) )
    return 2147942414LL;
  v6 = 88 * v3;
  *((_DWORD *)this + 14) = v3 + a2;
  result = 0LL;
  *a3 = (struct Mesh::MeshLine *)(*((_QWORD *)this + 5) + v6);
  return result;
}

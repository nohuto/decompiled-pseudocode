/*
 * XREFs of ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x18011CA04
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801538A0 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MeshGraph::AllocateLine(Mesh::MeshGraph *this, int a2, struct Mesh::MeshLine **a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *((int *)this + 14);
  if ( (int)v4 + a2 > *((_QWORD *)this + 6) )
    return 2147942414LL;
  *((_DWORD *)this + 14) = v4 + a2;
  result = 0LL;
  *a3 = (struct Mesh::MeshLine *)(*((_QWORD *)this + 5) + 88 * v4);
  return result;
}

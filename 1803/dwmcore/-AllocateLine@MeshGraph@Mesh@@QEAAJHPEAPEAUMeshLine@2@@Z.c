/*
 * XREFs of ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x18013F758
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x18017CF78 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MeshGraph::AllocateLine(Mesh::MeshGraph *this, int a2, struct Mesh::MeshLine **a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *((int *)this + 14);
  if ( (int)v4 + a2 > *((_QWORD *)this + 5) )
    return 2147942414LL;
  result = 0LL;
  *a3 = (struct Mesh::MeshLine *)(*((_QWORD *)this + 6) + 88 * v4);
  *((_DWORD *)this + 14) = v4 + a2;
  return result;
}

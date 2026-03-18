/*
 * XREFs of ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x18013F72C
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x18017CF78 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MeshGraph::AllocateEdge(Mesh::MeshGraph *this, int a2, struct Mesh::MeshEdge **a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *((int *)this + 22);
  if ( (int)v4 + a2 > *((_QWORD *)this + 9) )
    return 2147942414LL;
  result = 0LL;
  *a3 = (struct Mesh::MeshEdge *)(*((_QWORD *)this + 10) + 88 * v4);
  *((_DWORD *)this + 22) = v4 + a2;
  return result;
}

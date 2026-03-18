/*
 * XREFs of ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x18013F784
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x18017CF78 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::MeshGraph::AllocateVertex(Mesh::MeshGraph *this, int a2, struct Mesh::MeshVertex **a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = *((int *)this + 8);
  if ( (int)v3 + a2 > *((_QWORD *)this + 2) )
    return 2147942414LL;
  *a3 = (struct Mesh::MeshVertex *)(*((_QWORD *)this + 3) + (v3 << 6));
  result = 0LL;
  *((_DWORD *)this + 8) = v3 + a2;
  return result;
}

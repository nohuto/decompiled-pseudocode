/*
 * XREFs of ?IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z @ 0x18017DDD4
 * Callers:
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x1800B0850 (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 *     ?GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ @ 0x1800B2DA4 (-GetNext@PolygonPathIterator@Mesh@@QEAAPEAUMeshVertex@2@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Mesh::PolygonPathIterator::IsCycle(const struct Mesh::MeshEdge *a1, const struct Mesh::MeshEdge *a2)
{
  return **((_QWORD **)a1 + 8) == *(_QWORD *)a2 && **((_QWORD **)a2 + 8) == *(_QWORD *)a1;
}

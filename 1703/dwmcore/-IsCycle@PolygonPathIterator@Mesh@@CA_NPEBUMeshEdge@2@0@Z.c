/*
 * XREFs of ?IsCycle@PolygonPathIterator@Mesh@@CA_NPEBUMeshEdge@2@0@Z @ 0x18015E6A8
 * Callers:
 *     ?GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z @ 0x18003B8AC (-GenerateTriangles@Mesh@@AEBAJPEAGHPEAH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Mesh::PolygonPathIterator::IsCycle(const struct Mesh::MeshEdge *a1, const struct Mesh::MeshEdge *a2)
{
  return **((_QWORD **)a1 + 8) == *(_QWORD *)a2 && **((_QWORD **)a2 + 8) == *(_QWORD *)a1;
}

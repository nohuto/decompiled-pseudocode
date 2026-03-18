/*
 * XREFs of ?GetNode@LinearEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x180066BC0
 * Callers:
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x180065CF0 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     <none>
 */

struct Mesh::MeshEdge::MeshEdgeNode *__fastcall Mesh::LinearEdgeList::GetNode(
        Mesh::LinearEdgeList *this,
        const struct Mesh::MeshEdge *a2)
{
  return (const struct Mesh::MeshEdge *)((char *)a2 + 56);
}

/*
 * XREFs of ?GetNode@RadialEdgeList@Mesh@@MEBAPEAUMeshEdgeNode@MeshEdge@2@PEBU42@@Z @ 0x18003DA60
 * Callers:
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x18003BD00 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     <none>
 */

struct Mesh::MeshEdge::MeshEdgeNode *__fastcall Mesh::RadialEdgeList::GetNode(
        Mesh::RadialEdgeList *this,
        const struct Mesh::MeshEdge *a2)
{
  return (const struct Mesh::MeshEdge *)((char *)a2 + 72);
}

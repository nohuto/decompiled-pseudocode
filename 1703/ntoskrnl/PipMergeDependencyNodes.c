/*
 * XREFs of PipMergeDependencyNodes @ 0x140693318
 * Callers:
 *     IoResolveDependency @ 0x14015F160 (IoResolveDependency.c)
 * Callees:
 *     PipMoveListEntries @ 0x1401F7DDC (PipMoveListEntries.c)
 *     PipDeleteDependencyNode @ 0x140693018 (PipDeleteDependencyNode.c)
 *     PipMergeDependencyEdgeList @ 0x1406931B0 (PipMergeDependencyEdgeList.c)
 */

void __fastcall PipMergeDependencyNodes(__int64 a1, __int64 a2)
{
  bool v4; // zf

  ++*(_DWORD *)(a1 + 88);
  ++*(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) |= *(_DWORD *)(a2 + 92);
  PipMoveListEntries((_QWORD *)(a1 + 56), a2 + 56);
  PipMergeDependencyEdgeList(a1, a2, 0);
  PipMergeDependencyEdgeList(a1, a2, 1);
  v4 = (*(_DWORD *)(a1 + 88))-- == 1;
  if ( v4 )
    PipDeleteDependencyNode((_QWORD *)a1);
  v4 = (*(_DWORD *)(a2 + 88))-- == 1;
  if ( v4 )
    PipDeleteDependencyNode((_QWORD *)a2);
}

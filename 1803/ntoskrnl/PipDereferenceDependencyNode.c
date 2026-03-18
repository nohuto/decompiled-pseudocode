/*
 * XREFs of PipDereferenceDependencyNode @ 0x14063BAD0
 * Callers:
 *     IoResolveDependency @ 0x14017D9C0 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x14023A6FC (PipFreeDependencyEdge.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x14064F7AC (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}

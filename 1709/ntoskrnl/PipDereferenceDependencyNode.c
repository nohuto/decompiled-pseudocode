/*
 * XREFs of PipDereferenceDependencyNode @ 0x1405D2398
 * Callers:
 *     IoResolveDependency @ 0x14014E140 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1401FDDC4 (PipFreeDependencyEdge.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1406BECC8 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}

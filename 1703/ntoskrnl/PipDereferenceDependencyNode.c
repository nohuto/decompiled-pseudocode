/*
 * XREFs of PipDereferenceDependencyNode @ 0x1405BF2A8
 * Callers:
 *     IoResolveDependency @ 0x14015F160 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x1401F7C98 (PipFreeDependencyEdge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipDereferenceDependencyNode(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 88))-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}

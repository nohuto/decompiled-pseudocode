/*
 * XREFs of PipCheckValidNewDependencyEdge @ 0x140723A14
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x14023A538 (PipAddDependencyEdgeBetweenNodes.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14023A524 (PiListEntryToDependencyEdge.c)
 */

char __fastcall PipCheckValidNewDependencyEdge(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 *v11; // r8
  __int64 v12; // r10

  if ( a1 == a2 )
    return 0;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  if ( v5 && v7 )
  {
    do
    {
      v7 = *(_QWORD *)(v7 + 16);
      if ( v7 == v5 )
        return 0;
    }
    while ( v7 != IopRootDeviceNode );
  }
  v8 = (__int64 *)(a2 + 16);
  v9 = *v8;
  while ( (__int64 *)v9 != v8 )
  {
    v10 = PiListEntryToDependencyEdge(v9, 0);
    v9 = *v11;
    if ( *(_QWORD *)(v10 + 32) == v12 )
      return 0;
  }
  return 1;
}

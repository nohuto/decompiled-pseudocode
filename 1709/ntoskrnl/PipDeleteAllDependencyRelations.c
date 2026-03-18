/*
 * XREFs of PipDeleteAllDependencyRelations @ 0x1406BEAEC
 * Callers:
 *     PnpDeleteAllDependencyRelations @ 0x1405888B0 (PnpDeleteAllDependencyRelations.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401FDADC (PiListEntryToDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401FDDC4 (PipFreeDependencyEdge.c)
 *     PipAttemptDependentStart @ 0x1406BE920 (PipAttemptDependentStart.c)
 *     PipConvertResolutionsToReservations @ 0x1406BEA40 (PipConvertResolutionsToReservations.c)
 *     PipDeleteDependencyNode @ 0x1406BECC8 (PipDeleteDependencyNode.c)
 */

_UNKNOWN **__fastcall PipDeleteAllDependencyRelations(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  bool v11; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a1 )
  {
    result = *(_UNKNOWN ***)(a1 + 312);
    v3 = (__int64)result[10];
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    ++*(_DWORD *)(v3 + 88);
    PipConvertResolutionsToReservations(v3);
    v4 = *(_QWORD **)(v3 + 16);
    while ( v4 != (_QWORD *)(v3 + 16) )
    {
      v5 = (_DWORD *)PiListEntryToDependencyEdge((__int64)v4, 0);
      v4 = (_QWORD *)*v4;
      PipFreeDependencyEdge(v5, v6);
    }
    v7 = *(_QWORD **)(v3 + 32);
    while ( v7 != (_QWORD *)(v3 + 32) )
    {
      v8 = PiListEntryToDependencyEdge((__int64)v7, 1);
      v7 = (_QWORD *)*v7;
      v9 = *(_QWORD *)(v8 + 40);
      ++*(_DWORD *)(v9 + 88);
      PipFreeDependencyEdge((_DWORD *)v8, 0LL);
      v10 = *(_QWORD **)(v9 + 48);
      if ( v10 && *(_QWORD *)(v9 + 16) != v9 + 16 )
        PipAttemptDependentStart(v10);
      v11 = (*(_DWORD *)(v9 + 88))-- == 1;
      if ( v11 )
        PipDeleteDependencyNode((PVOID)v9);
    }
    result = *(_UNKNOWN ***)(a1 + 312);
    result[10] = 0LL;
    *(_QWORD *)(v3 + 48) = 0LL;
    v11 = (*(_DWORD *)(v3 + 88))-- == 1;
    if ( v11 )
      result = (_UNKNOWN **)PipDeleteDependencyNode((PVOID)v3);
    v11 = (*(_DWORD *)(v3 + 88))-- == 1;
    if ( v11 )
      return (_UNKNOWN **)PipDeleteDependencyNode((PVOID)v3);
  }
  return result;
}

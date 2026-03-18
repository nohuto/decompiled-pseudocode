/*
 * XREFs of PipDeleteDependencyNode @ 0x140693018
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404D9F20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDereferenceDependencyNode @ 0x1405BF2A8 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x1405BF2BC (PipCreateDependencyNode.c)
 *     IoDuplicateDependency @ 0x140692840 (IoDuplicateDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x140692E3C (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x1406931B0 (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x140693318 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x140693418 (PipSetDependency.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x1406934C8 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     PipDeleteBindingIds @ 0x140692FD4 (PipDeleteBindingIds.c)
 */

void __fastcall PipDeleteDependencyNode(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  PipDeleteBindingIds((__int64)a1);
  v2 = *a1;
  v3 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v3 != a1 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = a1[9];
  v5 = (_QWORD *)a1[10];
  if ( *(_QWORD **)(v4 + 8) != a1 + 9 || (_QWORD *)*v5 != a1 + 9 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  ExFreePoolWithTag(a1, 0x53706E50u);
}

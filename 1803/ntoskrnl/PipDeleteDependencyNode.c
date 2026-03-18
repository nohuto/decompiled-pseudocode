/*
 * XREFs of PipDeleteDependencyNode @ 0x14064F7AC
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405CABD8 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDereferenceDependencyNode @ 0x14063BAD0 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x14063BAEC (PipCreateDependencyNode.c)
 *     PipDeleteAllDependencyRelations @ 0x14064F6FC (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140723570 (IoDuplicateDependency.c)
 *     PipMergeDependencyEdgeList @ 0x140723C40 (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x140723DB0 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x140723EB0 (PipSetDependency.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x140723F60 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PipDeleteBindingIds @ 0x14064F878 (PipDeleteBindingIds.c)
 */

void __fastcall PipDeleteDependencyNode(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  _QWORD **v4; // rdx
  PVOID *v5; // rcx

  PipDeleteBindingIds();
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v3 = (PVOID *)P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  v4 = (_QWORD **)P[9];
  if ( v4[1] != P + 9 || (v5 = (PVOID *)P[10], *v5 != P + 9) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  ExFreePoolWithTag(P, 0x53706E50u);
}

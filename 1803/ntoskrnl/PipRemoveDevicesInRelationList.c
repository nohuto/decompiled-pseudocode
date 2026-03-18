/*
 * XREFs of PipRemoveDevicesInRelationList @ 0x1405C7188
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x1405C86A0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopSortRelationListForRemove @ 0x1405C80DC (IopSortRelationListForRemove.c)
 *     IopFreeRelationList @ 0x1405C8518 (IopFreeRelationList.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1405C9074 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1405C9760 (PnpDeleteLockedDeviceNodes.c)
 *     IopRemoveRelationFromList @ 0x140739F10 (IopRemoveRelationFromList.c)
 */

__int64 __fastcall PipRemoveDevicesInRelationList(PVOID P)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  bool v4; // si
  unsigned int v5; // ebp
  __int64 v6; // rcx

  v1 = *((_QWORD *)P + 7);
  if ( v1 )
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = 0;
    if ( (*(_DWORD *)(v3 + 396) & 0x10) == 0 )
      v4 = *(_QWORD *)(v3 + 16) != 0LL;
    v5 = IopSortRelationListForRemove(*((_QWORD *)P + 8));
    PnpDeleteLockedDeviceNodes(*((_QWORD *)P + 7), *((_QWORD *)P + 8), 2, 0, *((_DWORD *)P + 21), 0, 0LL, 0LL);
    if ( v4 )
    {
      if ( *(_DWORD *)(v3 + 300) == 782 )
        IopRemoveRelationFromList(*((_QWORD *)P + 8), *((_QWORD *)P + 7));
      PnpUnlinkDeviceRemovalRelations(v6, *((_QWORD *)P + 8));
    }
  }
  else
  {
    v5 = -1073741823;
  }
  IopFreeRelationList(*((PVOID *)P + 8));
  ExFreePoolWithTag(P, 0);
  return v5;
}

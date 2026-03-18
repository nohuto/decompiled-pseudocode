/*
 * XREFs of PipNotifyDeviceDependencyList @ 0x1405CC14C
 * Callers:
 *     PnpNewDeviceNodeDependencyCheck @ 0x1405CC0D8 (PnpNewDeviceNodeDependencyCheck.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PiListEntryToDependencyEdge @ 0x14023A524 (PiListEntryToDependencyEdge.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14050D26C (PnpAcquireDependencyRelationsLock.c)
 *     PiGetDependentList @ 0x1405CC0AC (PiGetDependentList.c)
 *     PiGetProviderList @ 0x1405CE3EC (PiGetProviderList.c)
 *     PipNotifyDependenciesChanged @ 0x140723E28 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipNotifyDeviceDependencyList(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 *DependentList; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  PnpAcquireDependencyRelationsLock(0);
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_5;
    DependentList = PiGetDependentList(v2);
  }
  else
  {
    DependentList = (__int64 *)PiGetProviderList(v2);
  }
  v5 = (__int64 *)*DependentList;
  v6 = DependentList;
  while ( v5 != v6 )
  {
    v7 = PiListEntryToDependencyEdge((__int64)v5, a2);
    v5 = (__int64 *)*v5;
    if ( a2 )
    {
      v9 = *(_QWORD *)(v7 + 40);
      v8 = 0LL;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 32);
      v9 = 0LL;
    }
    PipNotifyDependenciesChanged(v9, v8);
  }
LABEL_5:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}

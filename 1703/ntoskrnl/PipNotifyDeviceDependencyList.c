/*
 * XREFs of PipNotifyDeviceDependencyList @ 0x1404D9E84
 * Callers:
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404D9E10 (PnpNewDeviceNodeDependencyCheck.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PiListEntryToDependencyEdge @ 0x1401F7AC0 (PiListEntryToDependencyEdge.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14048AC20 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x14048C0EC (PiGetProviderList.c)
 *     PiGetDependentList @ 0x1404D9EF4 (PiGetDependentList.c)
 *     PipNotifyDependenciesChanged @ 0x140693390 (PipNotifyDependenciesChanged.c)
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
    DependentList = (__int64 *)PiGetDependentList(v2);
  }
  else
  {
    DependentList = PiGetProviderList(v2);
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

/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x1404D9F20
 * Callers:
 *     IoResolveDependency @ 0x14015F160 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14044C29C (PnpDeleteAllDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404D9E10 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14056D768 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x140692840 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x140692A00 (IoSetDependency.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14048AC20 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x14048C0EC (PiGetProviderList.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x1404DA0B0 (PipIsDeviceReadyForPowerRelations.c)
 *     PiQueryPowerRelations @ 0x1405C27A4 (PiQueryPowerRelations.c)
 *     PiEnumerateProviderListEntry @ 0x140692AE0 (PiEnumerateProviderListEntry.c)
 *     PipDeleteDependencyNode @ 0x140693018 (PipDeleteDependencyNode.c)
 */

void PipProcessRebuildPowerRelationsQueue()
{
  __int64 *v0; // rbx
  __int64 *v1; // r11
  _QWORD *v2; // rsi
  __int64 v3; // r11
  __int64 *ProviderList; // r14
  __int64 *v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  bool v9; // zf
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  PnpAcquireDependencyRelationsLock(1);
LABEL_2:
  v0 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( v0 != &PiRebuildPowerRelationsQueue )
  {
    v1 = v0 - 9;
    v0 = (__int64 *)*v0;
    v2 = (_QWORD *)v1[6];
    if ( !v2 )
    {
      v11 = v1 + 9;
      v12 = v1[9];
      v13 = (__int64 *)v1[10];
      if ( *(__int64 **)(v12 + 8) != v1 + 9 || (_QWORD *)*v13 != v11 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v1[10] = (__int64)(v1 + 9);
      *v11 = v11;
      v9 = (*((_DWORD *)v1 + 22))-- == 1;
      if ( v9 )
        PipDeleteDependencyNode(v1);
      break;
    }
    if ( (unsigned __int8)PipIsDeviceReadyForPowerRelations(v1[6]) )
    {
      ProviderList = PiGetProviderList((__int64)v2);
      v5 = (__int64 *)*ProviderList;
      if ( (__int64 *)*ProviderList == ProviderList )
      {
LABEL_8:
        v6 = (_QWORD *)(v3 + 72);
        v7 = *(_QWORD *)(v3 + 72);
        v8 = *(_QWORD **)(v3 + 80);
        if ( *(_QWORD *)(v7 + 8) != v3 + 72 || (_QWORD *)*v8 != v6 )
          __fastfail(3u);
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        *(_QWORD *)(v3 + 80) = v3 + 72;
        *v6 = v6;
        v9 = (*(_DWORD *)(v3 + 88))-- == 1;
        if ( v9 )
          PipDeleteDependencyNode(v3);
        ExReleaseResourceLite(&PiDependencyRelationsLock);
        PpDevNodeUnlockTree(0);
        LOBYTE(v10) = 1;
        PiQueryPowerRelations(*(_QWORD *)(v2[39] + 40LL), v10);
        ObfDereferenceObjectWithTag(v2, 0x44706E50u);
        PnpAcquireDependencyRelationsLock(1);
        goto LABEL_2;
      }
      while ( 1 )
      {
        PiEnumerateProviderListEntry(v5, &v14, 0LL);
        if ( !(unsigned __int8)PipIsDeviceReadyForPowerRelations(v14) )
          break;
        v5 = (__int64 *)*v5;
        if ( v5 == ProviderList )
          goto LABEL_8;
      }
    }
  }
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}

/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x1405529D8
 * Callers:
 *     IoResolveDependency @ 0x14014E140 (IoResolveDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1405528C8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpDeleteAllDependencyRelations @ 0x1405888B0 (PnpDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoDuplicateDependency @ 0x1406BE4F0 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x1406BE6B0 (IoSetDependency.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x140527DB0 (PiGetProviderList.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x140552B68 (PipIsDeviceReadyForPowerRelations.c)
 *     PiQueryPowerRelations @ 0x14055EFD0 (PiQueryPowerRelations.c)
 *     PiEnumerateProviderListEntry @ 0x1406BE790 (PiEnumerateProviderListEntry.c)
 *     PipDeleteDependencyNode @ 0x1406BECC8 (PipDeleteDependencyNode.c)
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
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  bool v9; // zf
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdx
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
      if ( *(__int64 **)(v12 + 8) != v1 + 9 || (v13 = (__int64 *)v1[10], (_QWORD *)*v13 != v11) )
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
        if ( *(_QWORD *)(v7 + 8) != v3 + 72 || (v8 = *(_QWORD **)(v3 + 80), (_QWORD *)*v8 != v6) )
          __fastfail(3u);
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        *(_QWORD *)(v3 + 80) = v3 + 72;
        *v6 = v6;
        v9 = (*(_DWORD *)(v3 + 88))-- == 1;
        if ( v9 )
          PipDeleteDependencyNode((PVOID)v3);
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

/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x1405C9074
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1405C7188 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x1405C7FB4 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x140145394 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PpDevNodeRemoveFromTree @ 0x140145460 (PpDevNodeRemoveFromTree.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     IopIsDescendantNode @ 0x1405C9028 (IopIsDescendantNode.c)
 *     IopEnumerateRelations @ 0x1405C99FC (IopEnumerateRelations.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1405C9DB0 (PnpCleanupDeviceRegistryValues.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopRemoveCurrentRelationFromList @ 0x140739E90 (IopRemoveCurrentRelationFromList.c)
 */

void __fastcall PnpUnlinkDeviceRemovalRelations(void *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  char v5; // bl
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+98h] [rbp+38h] BYREF
  char v13; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+48h] BYREF

  Object = a1;
  P = 0LL;
  PpDevNodeLockTree(4);
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v14 = 1LL;
    while ( (unsigned __int8)IopEnumerateRelations(
                               a2,
                               (unsigned int)&v14,
                               (unsigned int)&Object,
                               (unsigned int)&v13,
                               0LL) )
    {
      v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
      IopIsDescendantNode((_QWORD *)a2, (__int64)Object);
      v9 = *(_DWORD *)(v8 + 300);
      if ( v9 == 787 || v9 == 788 )
      {
        CurrentThread = KeGetCurrentThread();
        v4 = *(_QWORD *)(v8 + 16);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PnpCleanupDeviceRegistryValues(v8 + 40);
        v5 = PpDevNodeRemoveFromTree((_QWORD *)v8);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( v5 )
        {
          v6 = *(_QWORD *)(v8 + 48) == 0LL;
          *(_QWORD *)(v8 + 648) = v4;
          if ( !v6 )
          {
            PiPnpRtlBeginOperation((__int64 **)&P);
            v10 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              PiPnpRtlCtx,
              *(_QWORD *)(v8 + 48),
              1,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v10,
              8,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(v8 + 48), 1LL);
            PnpSetDeviceInstanceRemovalEvent(v8);
            if ( P )
            {
              PiPnpRtlEndOperation((PVOID **)P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v8 + 300) == 788 )
            IopRemoveCurrentRelationFromList(a2, Object, &v14);
          ObfDereferenceObject(Object);
        }
      }
    }
  }
  PpDevNodeUnlockTree(4);
}

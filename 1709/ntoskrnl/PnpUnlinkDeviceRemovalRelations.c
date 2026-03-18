/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x14055CF88
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 *     PipRemoveDevicesInRelationList @ 0x1405E46E0 (PipRemoveDevicesInRelationList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x1405EA9BC (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PpDevNodeRemoveFromTree @ 0x1401590B4 (PpDevNodeRemoveFromTree.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14015BA6C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 *     IopEnumerateRelations @ 0x14055D5A0 (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x14055D918 (IopIsDescendantNode.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140588AC8 (PnpCleanupDeviceRegistryValues.c)
 *     IopRemoveCurrentRelationFromList @ 0x1406D2440 (IopRemoveCurrentRelationFromList.c)
 */

void __fastcall PnpUnlinkDeviceRemovalRelations(void *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  char v5; // bl
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+98h] [rbp+38h] BYREF
  char v12; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+48h] BYREF

  Object = a1;
  P = 0LL;
  PpDevNodeLockTree(4);
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v13 = 1LL;
    while ( (unsigned __int8)IopEnumerateRelations(
                               a2,
                               (unsigned int)&v13,
                               (unsigned int)&Object,
                               (unsigned int)&v12,
                               0LL) )
    {
      v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
      IopIsDescendantNode(a2);
      if ( (unsigned int)(*(_DWORD *)(v8 + 300) - 787) <= 1 )
      {
        CurrentThread = KeGetCurrentThread();
        v4 = *(_QWORD *)(v8 + 16);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PnpCleanupDeviceRegistryValues(v8 + 40);
        v5 = PpDevNodeRemoveFromTree(v8);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( v5 )
        {
          v6 = *(_QWORD *)(v8 + 48) == 0LL;
          *(_QWORD *)(v8 + 648) = v4;
          if ( !v6 )
          {
            PiPnpRtlBeginOperation((__int64 **)&P);
            v9 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v8 + 48),
              1u,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v9,
              8u,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(v8 + 48), 1);
            PnpSetDeviceInstanceRemovalEvent(v8);
            if ( P )
            {
              PiPnpRtlEndOperation((PVOID **)P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v8 + 300) == 788 )
            IopRemoveCurrentRelationFromList(a2, Object, &v13);
          ObfDereferenceObject(Object);
        }
      }
    }
  }
  PpDevNodeUnlockTree(4);
}

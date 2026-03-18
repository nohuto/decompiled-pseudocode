/*
 * XREFs of PnpDelayedRemoveWorker @ 0x1405C86A0
 * Callers:
 *     PnpChainDereferenceComplete @ 0x1405C9C70 (PnpChainDereferenceComplete.c)
 * Callees:
 *     PnpFreeWatchdog @ 0x1400753C0 (PnpFreeWatchdog.c)
 *     PnpAllocateWatchdog @ 0x140075914 (PnpAllocateWatchdog.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PnpDisableDelayedRemoveWorkerWatchdog @ 0x14023C64C (PnpDisableDelayedRemoveWorkerWatchdog.c)
 *     PnpEnableDelayedRemoveWorkerWatchdog @ 0x14023C6B0 (PnpEnableDelayedRemoveWorkerWatchdog.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     PipRemoveDevicesInRelationList @ 0x1405C7188 (PipRemoveDevicesInRelationList.c)
 */

void __fastcall PnpDelayedRemoveWorker(__int64 P)
{
  PVOID **v2; // rdx
  PVOID *v3; // r8
  PVOID *v4; // rax
  PVOID *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  PVOID Pa; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_Pa; // [rsp+28h] [rbp-8h]

  p_Pa = &Pa;
  Pa = &Pa;
  PpDevNodeLockTree(1);
  PnpDelayedRemoveWorkerThread = (ULONG_PTR)KeGetCurrentThread();
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  v2 = (PVOID **)IopPendingSurpriseRemovals;
  if ( IopPendingSurpriseRemovals != &IopPendingSurpriseRemovals )
  {
    do
    {
      v3 = *v2;
      if ( *((_BYTE *)v2 + 104) )
      {
        if ( *((_DWORD *)*v2[8] + 2) == *(_DWORD *)*v2[8] )
        {
          if ( v3[1] != v2 || (v4 = v2[1], *v4 != v2) )
            __fastfail(3u);
          *v4 = v3;
          v3[1] = v4;
          v5 = p_Pa;
          if ( *p_Pa != &Pa )
            __fastfail(3u);
          v2[1] = p_Pa;
          *v2 = &Pa;
          *v5 = v2;
          p_Pa = (PVOID *)v2;
        }
        else
        {
          *((_BYTE *)v2 + 104) = 0;
        }
      }
      v2 = (PVOID **)v3;
    }
    while ( v3 != &IopPendingSurpriseRemovals );
  }
  PnpDelayedRemovePending = 0;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  while ( 1 )
  {
    v6 = Pa;
    if ( Pa == &Pa )
      break;
    if ( *((PVOID **)Pa + 1) != &Pa || (v7 = *(_QWORD *)Pa, *(PVOID *)(*(_QWORD *)Pa + 8LL) != Pa) )
      __fastfail(3u);
    Pa = *(PVOID *)Pa;
    *(_QWORD *)(v7 + 8) = &Pa;
    if ( P )
    {
      *(_QWORD *)(P + 16) = v6;
      *(_QWORD *)(P + 8) = v6[7];
      v8 = v6[7];
      if ( v8 )
        v9 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
      else
        v9 = 0LL;
      *(_QWORD *)P = v9;
      *(_QWORD *)(P + 24) = PnpAllocateWatchdog();
      PnpEnableDelayedRemoveWorkerWatchdog(P);
    }
    PipRemoveDevicesInRelationList(v6);
    if ( P )
    {
      PnpDisableDelayedRemoveWorkerWatchdog(P);
      PnpFreeWatchdog(*(void **)(P + 24));
    }
  }
  PnpDelayedRemoveWorkerThread = 0LL;
  if ( P )
    ExFreePoolWithTag((PVOID)P, 0x54706E50u);
  PpDevNodeUnlockTree(1);
}

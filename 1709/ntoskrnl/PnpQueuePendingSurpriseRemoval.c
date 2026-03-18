/*
 * XREFs of PnpQueuePendingSurpriseRemoval @ 0x1405EAA48
 * Callers:
 *     PiEventRemovalPostSurpriseRemove @ 0x1405EA9BC (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     IopEnumerateRelations @ 0x14055D5A0 (IopEnumerateRelations.c)
 *     IopAllocateRelationList @ 0x14055D6D8 (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x14055D79C (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x14055D8C8 (PnpAllocateCriticalMemory.c)
 *     IopIsDescendantNode @ 0x14055D918 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x1406D2258 (IopCheckIfMergeRequired.c)
 *     IopMergeRelationLists @ 0x1406D2358 (IopMergeRelationLists.c)
 */

_QWORD *__fastcall PnpQueuePendingSurpriseRemoval(PVOID a1, unsigned int ***a2, int a3, int a4)
{
  unsigned int **v4; // rbp
  PVOID *CriticalMemory; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int **v10; // rsi
  PVOID *v11; // r14
  PVOID **v12; // rax
  char v13; // r9
  __int64 v14; // r11
  __int64 v15; // r11
  PVOID *v17; // rdi
  __int64 v18; // r8
  unsigned int **RelationList; // rax
  PVOID *v20; // rcx
  PVOID **v21; // rax
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+78h] [rbp+10h] BYREF
  int v24; // [rsp+7Ch] [rbp+14h]

  v4 = *a2;
  CriticalMemory = 0LL;
  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v10 = v4;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  PnpAcquireDependencyRelationsLock(1);
  v11 = (PVOID *)IopPendingSurpriseRemovals;
  while ( v11 != &IopPendingSurpriseRemovals )
  {
    v17 = v11;
    v11 = (PVOID *)*v11;
    if ( v17[7] == a1 )
    {
      v10 = (unsigned int **)v17[8];
      CriticalMemory = v17;
      break;
    }
    if ( (unsigned __int8)IopCheckIfMergeRequired(v17[8], v10) )
    {
      if ( v10 == v4 )
      {
        CriticalMemory = v17;
        RelationList = (unsigned int **)IopAllocateRelationList(3LL);
        v10 = RelationList;
        if ( !RelationList )
        {
          v10 = v4;
          break;
        }
        IopMergeRelationLists(RelationList, v4, 0LL);
      }
      LOBYTE(v18) = 1;
      IopMergeRelationLists(v10, v17[8], v18);
      IopFreeRelationList(v17[8]);
      if ( CriticalMemory == v17 )
      {
        CriticalMemory[8] = 0LL;
      }
      else
      {
        v20 = (PVOID *)*v17;
        if ( *((PVOID **)*v17 + 1) != v17 || (v21 = (PVOID **)v17[1], *v21 != v17) )
          __fastfail(3u);
        *v21 = v20;
        v20[1] = v21;
        ExFreePoolWithTag(v17, 0);
      }
    }
  }
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  if ( v4 == v10 )
  {
    CriticalMemory = (PVOID *)PnpAllocateCriticalMemory(3, NonPagedPoolNx, 0x70uLL, 0x54706E50u);
    v12 = (PVOID **)qword_140383EB8;
    if ( *(PVOID **)qword_140383EB8 != &IopPendingSurpriseRemovals )
      __fastfail(3u);
    *CriticalMemory = &IopPendingSurpriseRemovals;
    CriticalMemory[1] = v12;
    *v12 = CriticalMemory;
    qword_140383EB8 = (__int64)CriticalMemory;
  }
  else
  {
    IopFreeRelationList(v4);
  }
  v23 = 0;
  v24 = 0;
  while ( IopEnumerateRelations(v10, &v23, &v22, 0LL, 0LL) )
  {
    if ( v22 )
      v14 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
    else
      v14 = 0LL;
    if ( (*(_BYTE *)(v14 + 648) & 1) != 0 && IopIsDescendantNode(v10, v22) )
    {
      *(_QWORD *)(v15 + 648) &= ~1uLL;
      --*(_DWORD *)(*(_QWORD *)(v15 + 648) + 656LL);
    }
  }
  CriticalMemory[7] = a1;
  *((_DWORD *)CriticalMemory + 21) = a3;
  *((_BYTE *)CriticalMemory + 88) = v13;
  CriticalMemory[8] = v10;
  *((_DWORD *)CriticalMemory + 27) = a4;
  *((_BYTE *)CriticalMemory + 104) = v13;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

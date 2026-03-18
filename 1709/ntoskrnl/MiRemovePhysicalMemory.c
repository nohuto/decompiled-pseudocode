/*
 * XREFs of MiRemovePhysicalMemory @ 0x1406E00F8
 * Callers:
 *     MiDeleteExtentPfns @ 0x140222AA0 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x1406E04A0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1406E09D0 (MiRemoveMdlPages.c)
 *     MiAddFileOnlyPfns @ 0x1406E388C (MiAddFileOnlyPfns.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 *     MiHotRemovePartitionPageRun @ 0x1406EE2FC (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1400B8A74 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1400B8DA0 (MiLockDynamicMemoryExclusive.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400ED79C (MiFlushEntireTbDueToAttributeChange.c)
 *     KePulseEvent @ 0x1400F0C10 (KePulseEvent.c)
 *     MiDereferencePageRuns @ 0x14011CA7C (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     MiDescribePageRun @ 0x14013756C (MiDescribePageRun.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F6AF8 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x14020269C (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x14021464C (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x140214B28 (MiPerformMemoryChange.c)
 *     MiReduceCommitLimits @ 0x1402223B4 (MiReduceCommitLimits.c)
 *     MiGetDanglingExtent @ 0x140222EE4 (MiGetDanglingExtent.c)
 *     MiFlushCacheRange @ 0x14022C174 (MiFlushCacheRange.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiComputeNodeMemory @ 0x1405E89E4 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x1406DFE54 (MiConfigureMemoryRemoval.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(struct _KPRCB *a1, unsigned __int64 a2, int a3)
{
  struct _KPRCB *DanglingExtent; // r14
  struct _KTHREAD *CurrentThread; // r15
  int v5; // r13d
  int v7; // ebx
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  unsigned int *i; // r13
  _QWORD *v12; // r15
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int *v21; // rcx
  __int64 v22; // rax
  unsigned int *v23; // [rsp+30h] [rbp-39h] BYREF
  char *v24; // [rsp+38h] [rbp-31h] BYREF
  struct _KTHREAD *v25; // [rsp+40h] [rbp-29h]
  PVOID P[3]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v27[12]; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v28; // [rsp+D8h] [rbp+6Fh] BYREF
  int v29; // [rsp+E0h] [rbp+77h]
  __int64 v30; // [rsp+E8h] [rbp+7Fh]

  v28 = a2;
  DanglingExtent = a1;
  P[1] = P;
  P[2] = 0LL;
  P[0] = P;
  CurrentThread = KeGetCurrentThread();
  v5 = a3 & 2;
  v25 = CurrentThread;
  v23 = 0LL;
  v30 = 0LL;
  v24 = 0LL;
  v29 = v5;
  if ( (a3 & 2) != 0 )
  {
    v7 = 0;
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    if ( (a3 & 0x20) != 0 )
    {
      DanglingExtent = (struct _KPRCB *)MiGetDanglingExtent(&v28);
      if ( DanglingExtent == (struct _KPRCB *)-1LL )
      {
        MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v9 = v28;
LABEL_23:
    MiInitializeDynamicPfns((unsigned __int64)DanglingExtent, v9, 0, a3);
    qword_14038A110 += v9;
    if ( (unsigned __int64)qword_14038A110 >= 0x5555 && !byte_14038A184 )
    {
      stru_14038A0F0.List.Flink = 0LL;
      stru_14038A0F0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
      stru_14038A0F0.Parameter = &MiSystemPartition;
      ExQueueWorkItem(&stru_14038A0F0, DelayedWorkQueue);
      byte_14038A184 = 1;
    }
    if ( !v5 )
    {
      KePulseEvent(qword_14038A200, 0, 0);
      MiFlushEntireTbDueToAttributeChange(v16, v15, v17);
      MiFlushCacheRange(DanglingExtent, v9);
    }
    goto LABEL_29;
  }
  v9 = v28;
  v27[0] = 0LL;
  v27[3] = v28;
  v27[2] = a1;
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v7 = MiConfigureMemoryRemoval(&v24, (unsigned int *)MmPhysicalMemoryBlock, v27);
  if ( v7 >= 0 )
  {
    v30 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
    v10 = v30;
    if ( !(unsigned int)MiDescribePageRun((__int64)P, (unsigned __int64)DanglingExtent, v9) )
    {
      v7 = -1073741670;
      goto LABEL_31;
    }
    for ( i = (unsigned int *)v10; ; i = v23 )
    {
      v12 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v13 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      v7 = MiConfigureMemoryRemoval(&v23, i, v12);
      ExFreePoolWithTag(v12, 0);
      v10 = v30;
      if ( i != (unsigned int *)v30 )
        ExFreePoolWithTag(i - 4, 0);
      if ( v7 < 0 )
      {
        v5 = v29;
        goto LABEL_31;
      }
    }
    if ( (a3 & 0x200) == 0 )
    {
      MiReduceCommitLimits(&MiSystemPartition, v9, v9);
      MiReturnCommit((__int64)&MiSystemPartition, v9);
    }
    MiPerformMemoryChange((__int64)DanglingExtent, v9, (void **)&v24, (__int64 *)&v23, 0);
    MiComputeNodeMemory((__int64)&MiSystemPartition);
    v14 = -1;
    if ( qword_14038B750 <= 0xFFFFFFFF )
      v14 = qword_14038B750;
    MEMORY[0xFFFFF780000002E8] = v14;
    KeConfigureDynamicMemory((unsigned __int64)DanglingExtent, (unsigned __int64)DanglingExtent + v9 - 1, 2);
    v5 = v29;
    goto LABEL_23;
  }
LABEL_29:
  v10 = v30;
LABEL_31:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v25);
  if ( v24 )
    ExFreePoolWithTag(v24 - 16, 0);
  if ( !v23 )
    goto LABEL_36;
  v21 = v23 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v21, 0);
LABEL_36:
    v21 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v22 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v22 + 8) = P;
  }
  if ( v10 )
    MiDereferencePageRuns(v10, v18, v19, v20);
  if ( v7 >= 0 && (a3 & 8) == 0 && !v5 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v7;
}

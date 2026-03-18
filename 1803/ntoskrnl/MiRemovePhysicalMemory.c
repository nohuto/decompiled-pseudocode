/*
 * XREFs of MiRemovePhysicalMemory @ 0x14074B030
 * Callers:
 *     MiDeleteExtentPfns @ 0x14025D700 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x14074B3E0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x14074B900 (MiRemoveMdlPages.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 *     MiHotRemovePartitionPageRun @ 0x1407577B8 (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140051CE0 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14006FF50 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140070288 (MiLockDynamicMemoryExclusive.c)
 *     KePulseEvent @ 0x140081280 (KePulseEvent.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x14014C808 (MiDereferencePageRuns.c)
 *     MiDescribePageRun @ 0x14016F8B4 (MiDescribePageRun.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140233E08 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x14023FC14 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x140252AC0 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x140252E5C (MiPerformMemoryChange.c)
 *     MiGetDanglingExtent @ 0x14025DAF4 (MiGetDanglingExtent.c)
 *     MiReduceCommitLimits @ 0x140265970 (MiReduceCommitLimits.c)
 *     MiFlushCacheRange @ 0x140267828 (MiFlushCacheRange.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiComputeNodeMemory @ 0x14064FEE4 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x14074AD3C (MiConfigureMemoryRemoval.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 DanglingExtent; // r14
  struct _KTHREAD *CurrentThread; // r15
  int v5; // r13d
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  unsigned int *i; // r13
  _QWORD *v16; // r15
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int *v22; // rcx
  __int64 v23; // rax
  unsigned int *v24; // [rsp+30h] [rbp-39h] BYREF
  char *v25; // [rsp+38h] [rbp-31h] BYREF
  struct _KTHREAD *v26; // [rsp+40h] [rbp-29h]
  PVOID P[3]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v28[12]; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v29; // [rsp+D8h] [rbp+6Fh] BYREF
  int v30; // [rsp+E0h] [rbp+77h]
  __int64 v31; // [rsp+E8h] [rbp+7Fh]

  v29 = a2;
  DanglingExtent = a1;
  P[1] = P;
  P[2] = 0LL;
  P[0] = P;
  CurrentThread = KeGetCurrentThread();
  v5 = a3 & 2;
  v26 = CurrentThread;
  v24 = 0LL;
  v31 = 0LL;
  v25 = 0LL;
  v30 = v5;
  if ( (a3 & 2) != 0 )
  {
    v7 = 0;
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    if ( (a3 & 0x20) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v29);
      if ( DanglingExtent == -1 )
      {
        MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread, v8, v9);
        return 0LL;
      }
    }
    v11 = v29;
LABEL_23:
    MiInitializeDynamicPfns(DanglingExtent, v11, 0, a3);
    qword_1403CDF90 += v11;
    if ( (unsigned __int64)qword_1403CDF90 >= 0x5555 && !byte_1403CE004 )
    {
      stru_1403CDF70.List.Flink = 0LL;
      stru_1403CDF70.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
      stru_1403CDF70.Parameter = &MiSystemPartition;
      ExQueueWorkItem(&stru_1403CDF70, DelayedWorkQueue);
      byte_1403CE004 = 1;
    }
    if ( !v5 )
    {
      KePulseEvent(qword_1403CE080, 0, 0);
      MiFlushEntireTbDueToAttributeChange(v19);
      MiFlushCacheRange(DanglingExtent, v11, v20, v21);
    }
    goto LABEL_29;
  }
  v11 = v29;
  v28[0] = 0LL;
  v28[3] = v29;
  v28[2] = a1;
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v7 = MiConfigureMemoryRemoval(&v25, (unsigned int *)MmPhysicalMemoryBlock, v28);
  if ( v7 >= 0 )
  {
    v31 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
    v14 = v31;
    if ( !(unsigned int)MiDescribePageRun((__int64)P, DanglingExtent, v11) )
    {
      v7 = -1073741670;
      goto LABEL_31;
    }
    for ( i = (unsigned int *)v14; ; i = v24 )
    {
      v16 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v17 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v17 + 8) = P;
      v7 = MiConfigureMemoryRemoval(&v24, i, v16);
      ExFreePoolWithTag(v16, 0);
      v14 = v31;
      if ( i != (unsigned int *)v31 )
        ExFreePoolWithTag(i - 4, 0);
      if ( v7 < 0 )
      {
        v5 = v30;
        goto LABEL_31;
      }
    }
    if ( (a3 & 0x200) == 0 )
    {
      MiReduceCommitLimits(&MiSystemPartition, v11, v11);
      MiReturnCommit((__int64)&MiSystemPartition, v11);
    }
    MiPerformMemoryChange(DanglingExtent, v11, (void **)&v25, (__int64 *)&v24, 0);
    MiComputeNodeMemory((__int64)&MiSystemPartition);
    v18 = -1;
    if ( qword_1403CFA10 <= 0xFFFFFFFF )
      v18 = qword_1403CFA10;
    MEMORY[0xFFFFF780000002E8] = v18;
    KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v11 - 1, 2);
    v5 = v30;
    goto LABEL_23;
  }
LABEL_29:
  v14 = v31;
LABEL_31:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v26, v12, v13);
  if ( v25 )
    ExFreePoolWithTag(v25 - 16, 0);
  if ( !v24 )
    goto LABEL_36;
  v22 = v24 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v22, 0);
LABEL_36:
    v22 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v23 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v23 + 8) = P;
  }
  if ( v14 )
    MiDereferencePageRuns(v14);
  if ( v7 >= 0 && (a3 & 8) == 0 && !v5 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v7;
}

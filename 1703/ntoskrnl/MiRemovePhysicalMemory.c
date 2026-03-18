/*
 * XREFs of MiRemovePhysicalMemory @ 0x1406B410C
 * Callers:
 *     MiDeleteExtentPfns @ 0x140218800 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x1406B44B0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1406B49B8 (MiRemoveMdlPages.c)
 *     MiAddFileOnlyPfns @ 0x1406B6D64 (MiAddFileOnlyPfns.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x1400203E4 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140020728 (MiLockDynamicMemoryExclusive.c)
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140063C1C (MiFlushEntireTbDueToAttributeChange.c)
 *     KePulseEvent @ 0x140082D10 (KePulseEvent.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     MiDescribePageRun @ 0x140154454 (MiDescribePageRun.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F11A4 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x1401FC8DC (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x14020D5A0 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x14020DA70 (MiPerformMemoryChange.c)
 *     MiReduceCommitLimits @ 0x1402180F8 (MiReduceCommitLimits.c)
 *     MiGetDanglingExtent @ 0x140218C18 (MiGetDanglingExtent.c)
 *     MiFlushCacheRange @ 0x140220BA4 (MiFlushCacheRange.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiComputeNodeMemory @ 0x1405BABD8 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryRemoval @ 0x1406B3E7C (MiConfigureMemoryRemoval.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 DanglingExtent; // r14
  struct _KTHREAD *CurrentThread; // r15
  int v5; // r13d
  char v6; // si
  __int64 v7; // r12
  int v8; // ebx
  unsigned __int64 v10; // rsi
  unsigned int *i; // r13
  _QWORD *v12; // r15
  __int64 v13; // rax
  int v14; // eax
  char v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int *v19; // rcx
  __int64 v20; // rax
  unsigned int *v21; // [rsp+38h] [rbp-39h] BYREF
  char *v22; // [rsp+40h] [rbp-31h] BYREF
  struct _KTHREAD *v23; // [rsp+48h] [rbp-29h]
  PVOID P[3]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v25[12]; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int64 v26; // [rsp+E0h] [rbp+6Fh] BYREF
  int v27; // [rsp+E8h] [rbp+77h]
  int v28; // [rsp+F0h] [rbp+7Fh]

  v27 = a3;
  v26 = a2;
  DanglingExtent = a1;
  P[1] = P;
  P[2] = 0LL;
  P[0] = P;
  CurrentThread = KeGetCurrentThread();
  v5 = a3 & 2;
  v23 = CurrentThread;
  v21 = 0LL;
  v6 = a3;
  v22 = 0LL;
  v7 = 0LL;
  v28 = v5;
  if ( (a3 & 2) != 0 )
  {
    v8 = 0;
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
    if ( (v6 & 0x20) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v26);
      if ( DanglingExtent == -1 )
      {
        MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v10 = v26;
    goto LABEL_21;
  }
  v10 = v26;
  v25[0] = 0LL;
  v25[3] = v26;
  v25[2] = a1;
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v8 = MiConfigureMemoryRemoval(&v22, (unsigned int *)MmPhysicalMemoryBlock, v25);
  if ( v8 < 0 )
  {
LABEL_28:
    v15 = v27;
    goto LABEL_29;
  }
  v7 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
  if ( !(unsigned int)MiDescribePageRun((__int64)P, DanglingExtent, v10) )
  {
    v8 = -1073741670;
    goto LABEL_28;
  }
  for ( i = (unsigned int *)v7; ; i = v21 )
  {
    v12 = P[0];
    if ( P[0] == P )
      break;
    v13 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v13 + 8) != P[0] )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v13 + 8) = P;
    v8 = MiConfigureMemoryRemoval(&v21, i, v12);
    ExFreePoolWithTag(v12, 0);
    if ( i != (unsigned int *)v7 )
      ExFreePoolWithTag(i - 4, 0);
    if ( v8 < 0 )
    {
      v5 = v28;
      goto LABEL_28;
    }
  }
  MiReduceCommitLimits(&MiSystemPartition, v10, v10);
  MiReturnCommit((__int64)&MiSystemPartition, v10);
  MiPerformMemoryChange(DanglingExtent, v10, (void **)&v22, (__int64 *)&v21, 0);
  MiComputeNodeMemory((__int64)&MiSystemPartition);
  v14 = -1;
  if ( qword_1403817D0 <= 0xFFFFFFFF )
    v14 = qword_1403817D0;
  MEMORY[0xFFFFF780000002E8] = v14;
  KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v10 - 1, 2);
  v5 = v28;
LABEL_21:
  v15 = v27;
  MiInitializeDynamicPfns(DanglingExtent, v10, 0, v27);
  qword_140380270 += v10;
  if ( (unsigned __int64)qword_140380270 >= 0x5555 && !byte_1403802EC )
  {
    stru_140380250.List.Flink = 0LL;
    stru_140380250.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
    stru_140380250.Parameter = &MiSystemPartition;
    ExQueueWorkItem(&stru_140380250, DelayedWorkQueue);
    byte_1403802EC = 1;
  }
  if ( !v5 )
  {
    KePulseEvent(qword_140380368, 0, 0);
    MiFlushEntireTbDueToAttributeChange(v17, v16, v18);
    MiFlushCacheRange(DanglingExtent, v10);
  }
LABEL_29:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v23);
  if ( v22 )
    ExFreePoolWithTag(v22 - 16, 0);
  if ( !v21 )
    goto LABEL_34;
  v19 = v21 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v19, 0);
LABEL_34:
    v19 = (unsigned int *)P[0];
    if ( P[0] == P )
      break;
    v20 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v20 + 8) != P[0] )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v20 + 8) = P;
  }
  if ( v7 )
    MiDereferencePageRuns(v7);
  if ( v8 >= 0 && (v15 & 8) == 0 && !v5 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v8;
}

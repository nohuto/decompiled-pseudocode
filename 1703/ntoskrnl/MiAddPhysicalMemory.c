/*
 * XREFs of MiAddPhysicalMemory @ 0x1406B34F8
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x1406B3AC4 (MiAddPhysicalMemoryChunks.c)
 *     MiAddFileOnlyPfns @ 0x1406B6D64 (MiAddFileOnlyPfns.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x1400203E4 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140020728 (MiLockDynamicMemoryExclusive.c)
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     MiAcquireNonPagedResources @ 0x14003CAA4 (MiAcquireNonPagedResources.c)
 *     KePulseEvent @ 0x140082D10 (KePulseEvent.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiPageTablesNeeded @ 0x1401281E0 (MiPageTablesNeeded.c)
 *     MiDescribePageRun @ 0x140154454 (MiDescribePageRun.c)
 *     MiIncreaseCommitLimits @ 0x140159BD4 (MiIncreaseCommitLimits.c)
 *     MiInitializeNumaRanges @ 0x14015A3AC (MiInitializeNumaRanges.c)
 *     MiReleaseNonPagedResources @ 0x14015B598 (MiReleaseNonPagedResources.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F11A4 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x1401FC8DC (KeConfigureDynamicMemory.c)
 *     MiEnableNewPfns @ 0x14020D3DC (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x14020DA70 (MiPerformMemoryChange.c)
 *     MiDeleteExtentPfns @ 0x140218800 (MiDeleteExtentPfns.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiSplitMirrorBitMap @ 0x14057AC10 (MiSplitMirrorBitMap.c)
 *     MiSplitLargePfnBitMap @ 0x1405BA8F4 (MiSplitLargePfnBitMap.c)
 *     MiComputeNodeMemory @ 0x1405BABD8 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryInsertion @ 0x1406B3B70 (MiConfigureMemoryInsertion.c)
 *     MiMapNewPfns @ 0x1406B4070 (MiMapNewPfns.c)
 *     MmIsExtentDangling @ 0x1406B7754 (MmIsExtentDangling.c)
 */

__int64 __fastcall MiAddPhysicalMemory(ULONG_PTR *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v7; // r15d
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // r13
  int v14; // r12d
  int v15; // ebx
  unsigned __int64 IsExtentDangling; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 i; // rax
  PVOID v23; // r12
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  PVOID v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // [rsp+30h] [rbp-A8h]
  __int64 v31; // [rsp+40h] [rbp-98h] BYREF
  PVOID P[3]; // [rsp+48h] [rbp-90h] BYREF
  char *v33; // [rsp+60h] [rbp-78h] BYREF
  __int64 v34; // [rsp+68h] [rbp-70h]
  struct _KTHREAD *v35; // [rsp+70h] [rbp-68h]
  _QWORD v36[12]; // [rsp+78h] [rbp-60h] BYREF
  int v38; // [rsp+E8h] [rbp+10h]

  if ( (*a2 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (*a3 & 0xFFF) != 0 )
    return 3221225712LL;
  v7 = a4 | 1;
  v8 = *(_QWORD *)a2 >> 12;
  v9 = *(_QWORD *)a3 >> 12;
  v10 = v9 + v8;
  if ( v8 >= v9 + v8 )
    return 3221225711LL;
  v11 = qword_14036C290;
  if ( qword_14036C290 > ((unsigned __int64)qword_14036C200 >> 12) - 1 )
    v11 = ((unsigned __int64)qword_14036C200 >> 12) - 1;
  if ( v10 - 1 > v11 )
  {
    if ( (v7 & 2) != 0 )
      return 3221225712LL;
    v10 = v11 + 1;
    v9 = v11 + 1 - v8;
  }
  if ( v8 >= v10 )
    return 3221225711LL;
  if ( v9 + v8 >= qword_14036CBE0 && v8 < qword_14036CBE0 + 2048 || v9 + v8 >= 0xFFFFFFFFALL )
    return 3221225496LL;
  CurrentThread = KeGetCurrentThread();
  P[1] = P;
  v35 = CurrentThread;
  P[0] = P;
  v13 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  P[2] = 0LL;
  if ( a1 == &MiSystemPartition )
  {
    v38 = 0;
  }
  else
  {
    v7 |= 4u;
    v38 = 1;
  }
  if ( (v7 & 0xFE) != 0 && (v7 & 0x100) != 0 )
    return 3221225714LL;
  v14 = v7 & 2;
  if ( (v7 & 2) != 0 )
    MiDeleteExtentPfns(0LL);
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v15 = MiInitializeNumaRanges();
  if ( v15 >= 0 )
  {
    IsExtentDangling = MmIsExtentDangling(v8, v9);
    if ( IsExtentDangling >= v8 && IsExtentDangling < v10 )
    {
LABEL_27:
      v15 = -1073741800;
      v17 = 0LL;
      goto LABEL_63;
    }
    if ( (v7 & 2) == 0 )
    {
      if ( qword_1403817D0 + v9 > qword_14036C1F0 )
      {
        v9 = qword_14036C1F0 - qword_1403817D0;
        v10 = qword_14036C1F0 - qword_1403817D0 + v8;
      }
      v30 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
      v17 = v30;
      if ( v8 >= v10 )
      {
        v15 = -1073741585;
        goto LABEL_63;
      }
      v15 = KeConfigureDynamicMemory(v8, v10 - 1, 0);
      if ( v15 >= 0 )
      {
        if ( (unsigned int)MiDescribePageRun((__int64)P, v8, v9) )
        {
          v36[0] = 0LL;
          v36[2] = v8;
          v36[3] = v9;
          v15 = MiConfigureMemoryInsertion(&v33, MmPhysicalMemoryBlock, v36);
          if ( v15 < 0 )
            goto LABEL_63;
          if ( (unsigned int)MiSplitLargePfnBitMap((__int64)&MiSystemPartition, v8, v9) )
          {
            v21 = 0;
            while ( (unsigned int)MiSplitMirrorBitMap(&stru_14036C960.SizeOfBitMap + 2 * v21, v8, v9) )
            {
              if ( ++v21 >= 2 )
              {
                for ( i = v30; ; i = v31 )
                {
                  v23 = P[0];
                  v34 = i;
                  if ( P[0] == P )
                    break;
                  v24 = *(_QWORD *)P[0];
                  if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v24 + 8) != P[0] )
                    __fastfail(3u);
                  P[0] = *(PVOID *)P[0];
                  *(_QWORD *)(v24 + 8) = P;
                  v15 = MiConfigureMemoryInsertion(&v31, i, v23);
                  ExFreePoolWithTag(v23, 0);
                  v17 = v30;
                  if ( v34 != v30 )
                    ExFreePoolWithTag((PVOID)(v34 - 16), 0);
                  v13 = v31;
                  if ( v15 < 0 )
                    goto LABEL_63;
                }
                v14 = v7 & 2;
                goto LABEL_59;
              }
            }
          }
        }
        goto LABEL_62;
      }
LABEL_63:
      MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v35);
      if ( v33 )
        ExFreePoolWithTag(v33 - 16, 0);
      if ( !v13 )
        goto LABEL_68;
      v27 = (PVOID)(v13 - 16);
      while ( 1 )
      {
        ExFreePoolWithTag(v27, 0);
LABEL_68:
        v27 = P[0];
        if ( P[0] == P )
          break;
        v28 = *(_QWORD *)P[0];
        if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v28 + 8) != P[0] )
          __fastfail(3u);
        P[0] = *(PVOID *)P[0];
        *(_QWORD *)(v28 + 8) = P;
      }
      if ( (v7 & 2) == 0 )
      {
        if ( v17 )
          MiDereferencePageRuns(v17);
        if ( v15 >= 0 )
          IoUpdateDumpPhysicalRanges();
      }
      return (unsigned int)v15;
    }
    v18 = 0LL;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      v19 = (char *)MmPhysicalMemoryBlock + 24;
      do
      {
        v20 = *(v19 - 1);
        if ( *v19 )
        {
          if ( v8 >= v20 )
          {
            if ( v8 < *v19 + v20 )
              goto LABEL_27;
          }
          else if ( v10 > v20 )
          {
            goto LABEL_27;
          }
        }
        ++v18;
        v19 += 2;
      }
      while ( v18 < *(unsigned int *)MmPhysicalMemoryBlock );
    }
LABEL_59:
    v25 = MiPageTablesNeeded(48 * v8 - 0x58000000000LL, 48 * v10 - 0x58000000001LL, 0, 0);
    v26 = v25;
    if ( v25 && !(unsigned int)MiAcquireNonPagedResources((__int64)&MiSystemPartition, v25) )
    {
      v17 = v30;
LABEL_62:
      v15 = -1073741670;
      goto LABEL_63;
    }
    if ( !v14 )
    {
      if ( !(unsigned int)MiIncreaseCommitLimits((__int64)&MiSystemPartition, v9, v9, v38, 0LL) )
      {
        if ( v26 )
          MiReleaseNonPagedResources((__int64)&MiSystemPartition, v26);
        v15 = -1073741523;
LABEL_77:
        v17 = v30;
        goto LABEL_63;
      }
      KeConfigureDynamicMemory(v8, v10 - 1, 1);
    }
    MiMapNewPfns(v8, v10, *(unsigned __int16 *)a1, v7);
    *(_QWORD *)a3 = v9 << 12;
    if ( !v14 )
    {
      MiPerformMemoryChange(v8, v9, (void **)&v33, &v31, v7);
      MiComputeNodeMemory((__int64)&MiSystemPartition);
      v29 = -1;
      if ( qword_1403817D0 <= 0xFFFFFFFF )
        v29 = qword_1403817D0;
      MEMORY[0xFFFFF780000002E8] = v29;
      if ( (v7 & 0x40) == 0 )
        MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v8, ((v10 + 511) >> 9) - (v8 >> 9), 0, 0);
      if ( (v7 & 4) == 0 )
        MiEnableNewPfns(v8, v10, v7);
      KePulseEvent(qword_140380368, 0, 0);
      v13 = v31;
    }
    v15 = 0;
    goto LABEL_77;
  }
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v35);
  return (unsigned int)v15;
}

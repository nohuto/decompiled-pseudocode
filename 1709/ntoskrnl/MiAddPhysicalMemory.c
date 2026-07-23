/*
 * XREFs of MiAddPhysicalMemory @ 0x1406DF4C8
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x1406DFAA0 (MiAddPhysicalMemoryChunks.c)
 *     MiAddFileOnlyPfns @ 0x1406E388C (MiAddFileOnlyPfns.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x1400B8A74 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1400B8DA0 (MiLockDynamicMemoryExclusive.c)
 *     MiPageTablesNeeded @ 0x1400C4984 (MiPageTablesNeeded.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1400CF9DC (MiAcquireNonPagedResources.c)
 *     KePulseEvent @ 0x1400F0C10 (KePulseEvent.c)
 *     MiDereferencePageRuns @ 0x14011CA7C (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     MiDescribePageRun @ 0x14013756C (MiDescribePageRun.c)
 *     MiInitializeNumaRanges @ 0x1401379AC (MiInitializeNumaRanges.c)
 *     MiIncreaseCommitLimits @ 0x14014FD74 (MiIncreaseCommitLimits.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F6AF8 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x14020269C (KeConfigureDynamicMemory.c)
 *     MiEnableNewPfns @ 0x140214488 (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x140214B28 (MiPerformMemoryChange.c)
 *     MiDeleteExtentPfns @ 0x140222AA0 (MiDeleteExtentPfns.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiSplitLargePfnBitMap @ 0x1405B4EFC (MiSplitLargePfnBitMap.c)
 *     MiComputeNodeMemory @ 0x1405E89E4 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryInsertion @ 0x1406DFB4C (MiConfigureMemoryInsertion.c)
 *     MiMapNewPfns @ 0x1406E0048 (MiMapNewPfns.c)
 *     MiSplitMirrorBitMap @ 0x1406E1024 (MiSplitMirrorBitMap.c)
 *     MmIsExtentDangling @ 0x1406E4398 (MmIsExtentDangling.c)
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
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  PVOID v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // [rsp+30h] [rbp-A8h]
  __int64 v36; // [rsp+40h] [rbp-98h] BYREF
  PVOID P[3]; // [rsp+48h] [rbp-90h] BYREF
  char *v38; // [rsp+60h] [rbp-78h] BYREF
  __int64 v39; // [rsp+68h] [rbp-70h]
  struct _KTHREAD *v40; // [rsp+70h] [rbp-68h]
  _QWORD v41[12]; // [rsp+78h] [rbp-60h] BYREF
  int v43; // [rsp+E8h] [rbp+10h]

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
  v11 = qword_1403885E0;
  if ( qword_1403885E0 > ((unsigned __int64)qword_140388548 >> 12) - 1 )
    v11 = ((unsigned __int64)qword_140388548 >> 12) - 1;
  if ( v10 - 1 > v11 )
  {
    if ( (v7 & 2) != 0 )
      return 3221225712LL;
    v10 = v11 + 1;
    v9 = v11 + 1 - v8;
  }
  if ( v8 >= v10 )
    return 3221225711LL;
  if ( v9 + v8 >= qword_140388DE0 && v8 < qword_140388DE0 + 2048 || v9 + v8 >= 0xFFFFFFFFALL )
    return 3221225496LL;
  CurrentThread = KeGetCurrentThread();
  P[1] = P;
  v40 = CurrentThread;
  P[0] = P;
  v13 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v38 = 0LL;
  P[2] = 0LL;
  if ( a1 == &MiSystemPartition )
  {
    v43 = 0;
  }
  else
  {
    v7 |= 4u;
    v43 = 1;
  }
  if ( (v7 & 0xFE) != 0 && (v7 & 0x100) != 0 )
    return 3221225714LL;
  v14 = v7 & 2;
  if ( (v7 & 2) != 0 )
    MiDeleteExtentPfns(0LL, (__int64)a2);
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
      goto LABEL_64;
    }
    if ( (v7 & 2) == 0 )
    {
      if ( qword_14038B750 + v9 > qword_140388538 )
      {
        v9 = qword_140388538 - qword_14038B750;
        v10 = qword_140388538 - qword_14038B750 + v8;
      }
      v35 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
      v17 = v35;
      if ( v8 >= v10 )
      {
        v15 = -1073741585;
        goto LABEL_64;
      }
      if ( (v7 & 4) != 0 || (v15 = KeConfigureDynamicMemory(v8, v10 - 1, 0), v15 >= 0) )
      {
        if ( (unsigned int)MiDescribePageRun((__int64)P, v8, v9) )
        {
          v41[0] = 0LL;
          v41[2] = v8;
          v41[3] = v9;
          v15 = MiConfigureMemoryInsertion(&v38, MmPhysicalMemoryBlock, v41);
          if ( v15 < 0 )
            goto LABEL_64;
          if ( (unsigned int)MiSplitLargePfnBitMap((__int64)&MiSystemPartition, v8, v9) )
          {
            v21 = 0;
            while ( (unsigned int)MiSplitMirrorBitMap(&stru_140388B58 + v21, v8, v9) )
            {
              if ( ++v21 >= 2 )
              {
                for ( i = v35; ; i = v36 )
                {
                  v23 = P[0];
                  v39 = i;
                  if ( P[0] == P )
                    break;
                  if ( *((PVOID **)P[0] + 1) != P || (v24 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
                    __fastfail(3u);
                  P[0] = *(PVOID *)P[0];
                  *(_QWORD *)(v24 + 8) = P;
                  v15 = MiConfigureMemoryInsertion(&v36, i, v23);
                  ExFreePoolWithTag(v23, 0);
                  v17 = v35;
                  if ( v39 != v35 )
                    ExFreePoolWithTag((PVOID)(v39 - 16), 0);
                  v13 = v36;
                  if ( v15 < 0 )
                    goto LABEL_64;
                }
                v14 = v7 & 2;
                goto LABEL_60;
              }
            }
          }
        }
        goto LABEL_63;
      }
LABEL_64:
      MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v40);
      if ( v38 )
        ExFreePoolWithTag(v38 - 16, 0);
      if ( !v13 )
        goto LABEL_69;
      v32 = (PVOID)(v13 - 16);
      while ( 1 )
      {
        ExFreePoolWithTag(v32, 0);
LABEL_69:
        v32 = P[0];
        if ( P[0] == P )
          break;
        if ( *((PVOID **)P[0] + 1) != P || (v33 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
          __fastfail(3u);
        P[0] = *(PVOID *)P[0];
        *(_QWORD *)(v33 + 8) = P;
      }
      if ( (v7 & 2) == 0 )
      {
        if ( v17 )
          MiDereferencePageRuns(v17, v29, v30, v31);
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
LABEL_60:
    v25 = MiPageTablesNeeded(48 * v8 - 0x58000000000LL, 48 * v10 - 0x58000000001LL, 0, 0);
    v28 = v25;
    if ( v25 && !(unsigned int)MiAcquireNonPagedResources(&MiSystemPartition, v25, v26, v27) )
    {
      v17 = v35;
LABEL_63:
      v15 = -1073741670;
      goto LABEL_64;
    }
    if ( !v14 )
    {
      if ( !(unsigned int)MiIncreaseCommitLimits((__int64)&MiSystemPartition, v9, v9, v43, 0LL) )
      {
        if ( v28 )
          MiReleaseNonPagedResources((__int64)&MiSystemPartition, v28);
        v15 = -1073741523;
LABEL_78:
        v17 = v35;
        goto LABEL_64;
      }
      if ( (v7 & 4) == 0 )
        KeConfigureDynamicMemory(v8, v10 - 1, 1);
    }
    MiMapNewPfns(v8, v10, *(unsigned __int16 *)a1, v7);
    *(_QWORD *)a3 = v9 << 12;
    if ( !v14 )
    {
      MiPerformMemoryChange(v8, v9, (void **)&v38, &v36, v7);
      MiComputeNodeMemory((__int64)&MiSystemPartition);
      v34 = -1;
      if ( qword_14038B750 <= 0xFFFFFFFF )
        v34 = qword_14038B750;
      MEMORY[0xFFFFF780000002E8] = v34;
      if ( (v7 & 0x40) == 0 )
        MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v8, ((v10 + 511) >> 9) - (v8 >> 9), 0, 0);
      if ( (v7 & 4) == 0 )
        MiEnableNewPfns(v8, v10, v7);
      KePulseEvent(qword_14038A200, 0, 0);
      v13 = v36;
    }
    v15 = 0;
    goto LABEL_78;
  }
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v40);
  return (unsigned int)v15;
}

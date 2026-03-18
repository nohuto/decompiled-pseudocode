/*
 * XREFs of MiAddPhysicalMemory @ 0x14074A438
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x14074A970 (MiAddPhysicalMemoryChunks.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x14006FF50 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140070288 (MiLockDynamicMemoryExclusive.c)
 *     KePulseEvent @ 0x140081280 (KePulseEvent.c)
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 *     MiDereferencePageRuns @ 0x14014C808 (MiDereferencePageRuns.c)
 *     MiInitializeNumaRanges @ 0x14016F75C (MiInitializeNumaRanges.c)
 *     MiDescribePageRun @ 0x14016F8B4 (MiDescribePageRun.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140233E08 (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x14023FC14 (KeConfigureDynamicMemory.c)
 *     MiEnableNewPfns @ 0x140252650 (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x140252E5C (MiPerformMemoryChange.c)
 *     MiDeleteExtentPfns @ 0x14025D700 (MiDeleteExtentPfns.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiSplitMirrorBitMap @ 0x1405F0044 (MiSplitMirrorBitMap.c)
 *     MiSplitLargePfnBitMap @ 0x14064A6CC (MiSplitLargePfnBitMap.c)
 *     MiComputeNodeMemory @ 0x14064FEE4 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryInsertion @ 0x14074AA2C (MiConfigureMemoryInsertion.c)
 *     MiMapNewPfns @ 0x14074AF30 (MiMapNewPfns.c)
 *     MmIsExtentDangling @ 0x14074E798 (MmIsExtentDangling.c)
 */

__int64 __fastcall MiAddPhysicalMemory(ULONG_PTR *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v6; // r9d
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  ULONG_PTR v9; // r14
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v13; // r12
  unsigned int v14; // r15d
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 IsExtentDangling; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // r15
  unsigned __int64 v22; // rdx
  __int64 *v23; // rcx
  ULONG_PTR v24; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r13
  int v28; // r13d
  PVOID v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // ebx
  PVOID v32; // r15
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // [rsp+30h] [rbp-A8h]
  __int64 v36; // [rsp+38h] [rbp-A0h] BYREF
  PVOID P[3]; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-80h]
  char *v39; // [rsp+60h] [rbp-78h] BYREF
  struct _KTHREAD *v40; // [rsp+68h] [rbp-70h]
  _QWORD v41[13]; // [rsp+70h] [rbp-68h] BYREF
  int v43; // [rsp+E8h] [rbp+10h]

  if ( (*a2 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (*a3 & 0xFFF) != 0 )
    return 3221225712LL;
  v6 = a4 | 1;
  v7 = *(_QWORD *)a2 >> 12;
  v8 = *(_QWORD *)a3 >> 12;
  v9 = v8 + v7;
  if ( v7 >= v8 + v7 )
    return 3221225711LL;
  v10 = ((unsigned __int64)qword_1403CB6E0 >> 12) - 1;
  if ( qword_1403CB780 <= v10 )
    v10 = qword_1403CB780;
  if ( v9 - 1 > v10 )
  {
    if ( (v6 & 2) != 0 )
      return 3221225712LL;
    v9 = v10 + 1;
    v8 = v10 + 1 - v7;
  }
  v11 = v8;
  if ( v7 >= v9 )
    return 3221225711LL;
  if ( v8 + v7 >= qword_1403CC0A0 && v7 < qword_1403CC0A0 + 2048 || v8 + v7 >= 0xFFFFFFFFALL )
    return 3221225496LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v14 = v6 | 4;
  v39 = 0LL;
  P[2] = 0LL;
  P[1] = P;
  P[0] = P;
  v40 = CurrentThread;
  if ( a1 == &MiSystemPartition )
    v14 = v6;
  v38 = v14;
  if ( (v14 & 0xFE) != 0 && (v14 & 0x100) != 0 )
    return 3221225714LL;
  v43 = v14 & 2;
  if ( (v14 & 2) != 0 )
    MiDeleteExtentPfns(0LL, (__int64)a2);
  MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  v15 = MiInitializeNumaRanges();
  if ( v15 >= 0 )
  {
    IsExtentDangling = MmIsExtentDangling(v7, v8);
    if ( IsExtentDangling >= v7 && IsExtentDangling < v9 )
    {
LABEL_26:
      v15 = -1073741800;
      v21 = 0LL;
LABEL_48:
      v28 = v43;
LABEL_49:
      MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v40, v19, v20);
      if ( v39 )
        ExFreePoolWithTag(v39 - 16, 0);
      if ( !v13 )
        goto LABEL_54;
      v29 = (PVOID)(v13 - 16);
      while ( 1 )
      {
        ExFreePoolWithTag(v29, 0);
LABEL_54:
        v29 = P[0];
        if ( P[0] == P )
          break;
        if ( *((PVOID **)P[0] + 1) != P || (v30 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
          __fastfail(3u);
        P[0] = *(PVOID *)P[0];
        *(_QWORD *)(v30 + 8) = P;
      }
      if ( !v28 )
      {
        if ( v21 )
          MiDereferencePageRuns(v21);
        if ( v15 >= 0 )
          IoUpdateDumpPhysicalRanges();
      }
      return (unsigned int)v15;
    }
    if ( (v14 & 2) != 0 )
    {
      v22 = 0LL;
      v20 = *(unsigned int *)MmPhysicalMemoryBlock;
      if ( *(_DWORD *)MmPhysicalMemoryBlock )
      {
        v23 = (__int64 *)((char *)MmPhysicalMemoryBlock + 24);
        do
        {
          v19 = *v23;
          v24 = *(v23 - 1);
          if ( *v23 )
          {
            if ( v7 >= v24 )
            {
              if ( v7 < v19 + v24 )
                goto LABEL_26;
            }
            else if ( v9 > v24 )
            {
              goto LABEL_26;
            }
          }
          ++v22;
          v23 += 2;
        }
        while ( v22 < v20 );
      }
LABEL_72:
      v28 = v43;
      v15 = MiMapNewPfns(v7, v9, *(unsigned __int16 *)a1, v14);
      if ( v15 >= 0 )
      {
        *(_QWORD *)a3 = v8 << 12;
        if ( !v43 )
        {
          MiPerformMemoryChange(v7, v8, (void **)&v39, &v36, v14);
          MiComputeNodeMemory((__int64)&MiSystemPartition);
          v34 = -1;
          if ( qword_1403CFA10 <= 0xFFFFFFFF )
            v34 = qword_1403CFA10;
          MEMORY[0xFFFFF780000002E8] = v34;
          if ( (v14 & 0x40) == 0 )
            MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v7, ((v9 + 511) >> 9) - (v7 >> 9), 0, 0);
          if ( (v14 & 4) == 0 )
            MiEnableNewPfns(v7, v9, v14);
          KePulseEvent(qword_1403CE080, 0, 0);
          v13 = v36;
        }
        v15 = 0;
      }
      v21 = v35;
      goto LABEL_49;
    }
    v25 = qword_1403CFA10 + v8;
    if ( qword_1403CFA10 + v8 > qword_1403CB6D0 )
      v9 = v7 + qword_1403CB6D0 - qword_1403CFA10;
    v8 = qword_1403CB6D0 - qword_1403CFA10;
    if ( v25 <= qword_1403CB6D0 )
      v8 = v11;
    v26 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
    v35 = v26;
    v27 = v26;
    if ( v7 >= v9 )
    {
      v15 = -1073741585;
      v21 = v26;
      goto LABEL_48;
    }
    if ( (v14 & 4) != 0 || (v15 = KeConfigureDynamicMemory(v7, v9 - 1, 0), v15 >= 0) )
    {
      if ( (unsigned int)MiDescribePageRun((__int64)P, v7, v8) )
      {
        v41[0] = 0LL;
        v41[2] = v7;
        v41[3] = v8;
        v15 = MiConfigureMemoryInsertion(&v39, MmPhysicalMemoryBlock, v41);
        if ( v15 < 0 )
          goto LABEL_47;
        if ( (unsigned int)MiSplitLargePfnBitMap((__int64)&MiSystemPartition, v7, v8) )
        {
          v31 = 0;
          while ( (unsigned int)MiSplitMirrorBitMap((unsigned __int64 *)&qword_1403CBDF0[2 * v31], v7, v8) )
          {
            if ( ++v31 >= 2 )
            {
              while ( 1 )
              {
                v32 = P[0];
                if ( P[0] == P )
                  break;
                if ( *((PVOID **)P[0] + 1) != P || (v33 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
                  __fastfail(3u);
                P[0] = *(PVOID *)P[0];
                *(_QWORD *)(v33 + 8) = P;
                v15 = MiConfigureMemoryInsertion(&v36, v27, v32);
                ExFreePoolWithTag(v32, 0);
                v21 = v35;
                if ( v27 != v35 )
                  ExFreePoolWithTag((PVOID)(v27 - 16), 0);
                v13 = v36;
                if ( v15 < 0 )
                  goto LABEL_48;
                v27 = v36;
              }
              v14 = v38;
              goto LABEL_72;
            }
          }
        }
      }
      v15 = -1073741670;
    }
LABEL_47:
    v21 = v35;
    goto LABEL_48;
  }
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v40, v16, v17);
  return (unsigned int)v15;
}

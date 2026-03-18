/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x140062504
 * Callers:
 *     SmpKeyedStoreReference @ 0x140062340 (SmpKeyedStoreReference.c)
 *     SmStoreExistsForProcess @ 0x1400624CC (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreSetVaRanges @ 0x14012F544 (SmpKeyedStoreSetVaRanges.c)
 *     SmpProcessQueryStoreStats @ 0x14015256C (SmpProcessQueryStoreStats.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140447BB0 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessDeleteNotification @ 0x140498D5C (SmProcessDeleteNotification.c)
 *     SmSwapStore @ 0x1404C9EBC (SmSwapStore.c)
 *     SmStoreCompressionStop @ 0x1404CA338 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1404CA430 (SmStoreCompressionStart.c)
 *     SmpKeyedStoreCreate @ 0x14056849C (SmpKeyedStoreCreate.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // r13d
  __int64 v8; // r14
  __int64 v9; // r10
  ULONG_PTR v10; // r13
  unsigned int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // rdi
  struct _KTHREAD *v15; // rdi
  unsigned __int8 v16; // r12
  ULONG_PTR v17; // r8
  __int64 v18; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int16 v23; // ax
  _QWORD *v24; // rdx
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  char *PoolWithTag; // r8
  unsigned __int64 v30; // rcx
  unsigned int v31; // edi
  __int64 v32; // r10
  struct _PRIVILEGE_SET *v33; // rcx
  int v34; // eax
  char v35; // cl
  __int64 v36; // r13
  _QWORD *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // [rsp+38h] [rbp-48h]
  __int64 v40; // [rsp+40h] [rbp-40h]
  __int64 v41; // [rsp+68h] [rbp-18h]
  _QWORD *v42; // [rsp+C8h] [rbp+48h]
  int v43; // [rsp+D0h] [rbp+50h] BYREF
  int v44; // [rsp+D8h] [rbp+58h]

  v44 = a4;
  v42 = a2;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( a3 > 0 )
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    else
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    a2 = v42;
  }
  SessionId = -1;
  if ( !a3 )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v8 && *(_QWORD *)(v8 + 8) == *a2 )
      goto LABEL_20;
    if ( *a2 == *(_QWORD *)(BugCheckParameter2 + 32) )
    {
      v8 = 0LL;
      goto LABEL_20;
    }
  }
  v9 = *a2;
  v10 = BugCheckParameter2 + 8;
  v11 = *(_DWORD *)(BugCheckParameter2 + 12);
  v12 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
  v13 = v12 & *a2;
  if ( v11 >= 0x20 )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 16)
       + 8LL
       * ((37
         * (BYTE6(v13)
          + 37
          * (BYTE5(v13)
           + 37
           * (BYTE4(v13)
            + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
         + HIBYTE(v13)) & ((v11 >> 5) - 1));
    while ( 1 )
    {
      v8 = *(_QWORD *)v8;
      if ( (v8 & 1) != 0 )
        break;
      if ( v13 == (v12 & *(_QWORD *)(v8 + 8)) )
        goto LABEL_15;
    }
    v8 = 0LL;
LABEL_15:
    if ( v8 )
    {
      if ( a3 != 2 )
      {
        *(_QWORD *)(BugCheckParameter2 + 24) = v8;
        goto LABEL_19;
      }
      v41 = *(_QWORD *)(v8 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
      v24 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                     + 8LL
                     * ((37
                       * (BYTE6(v41)
                        + 37
                        * (BYTE5(v41)
                         + 37
                         * (BYTE4(v41)
                          + 37
                          * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
                       + HIBYTE(v41)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
      if ( (*(_QWORD *)v8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v24 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                       + 8LL
                       * ((37
                         * (BYTE6(v41)
                          + 37
                          * (BYTE5(v41)
                           + 37
                           * (BYTE4(v41)
                            + 37
                            * (BYTE3(v41)
                             + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
                         + HIBYTE(v41)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
      while ( (*v24 & 1) == 0 )
      {
        if ( *v24 == v8 )
        {
          *v24 = *(_QWORD *)v8;
          --*(_DWORD *)v10;
          *(_QWORD *)v8 |= 0x8000000000000002uLL;
          break;
        }
        v24 = (_QWORD *)*v24;
      }
      SessionId = -1;
      if ( *(_QWORD *)(BugCheckParameter2 + 24) == v8 )
        *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
      goto LABEL_20;
    }
    a2 = v42;
  }
  if ( a3 != 1 )
  {
    *(_QWORD *)(BugCheckParameter2 + 32) = v9;
    v8 = 0LL;
LABEL_19:
    SessionId = -1;
    goto LABEL_20;
  }
  v8 = (__int64)(a2 - 1);
  if ( *(_DWORD *)v10 < (unsigned int)(2 * (*(_DWORD *)(BugCheckParameter2 + 12) >> 5)) )
    goto LABEL_58;
  v28 = 2 * ((unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 12) >> 5);
  if ( v28 > 0xFFFFFFFF )
    goto LABEL_58;
  if ( (unsigned int)v28 < 4 )
    v28 = 4LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v28, 0x54486D73u);
  if ( PoolWithTag )
  {
    if ( (((_DWORD)v28 - 1) & (unsigned int)v28) != 0 )
    {
      v35 = -1;
      do
      {
        ++v35;
        LODWORD(v28) = (unsigned int)v28 >> 1;
      }
      while ( (_DWORD)v28 );
      v28 = (unsigned int)(1 << v35);
    }
    if ( (unsigned int)v28 > 0x4000000 )
      v28 = 0x4000000LL;
    v30 = (8 * v28 + 7) >> 3;
    if ( PoolWithTag > &PoolWithTag[8 * v28] )
      v30 = 0LL;
    if ( v30 )
      memset64(PoolWithTag, v10 | 1, v30);
    v31 = 0;
    v32 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
    if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v36 = *(_QWORD *)(v10 + 8);
        while ( 1 )
        {
          v37 = *(_QWORD **)(v36 + 8LL * v31);
          if ( ((unsigned __int8)v37 & 1) != 0 )
            break;
          *(_QWORD *)(v36 + 8LL * v31) = *v37;
          v40 = v32 & v37[1];
          v38 = (37
               * (BYTE6(v40)
                + 37
                * (BYTE5(v40)
                 + 37
                 * (BYTE4(v40)
                  + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
               + HIBYTE(v40)) & (unsigned int)(v28 - 1);
          *v37 = *(_QWORD *)&PoolWithTag[8 * v38];
          *(_QWORD *)&PoolWithTag[8 * v38] = v37;
        }
        v10 = BugCheckParameter2 + 8;
        ++v31;
      }
      while ( v31 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
    }
    v33 = *(struct _PRIVILEGE_SET **)(v10 + 8);
    v34 = (32 * v28) | *(_DWORD *)(v10 + 4) & 0x1F;
    *(_QWORD *)(v10 + 8) = PoolWithTag;
    *(_DWORD *)(v10 + 4) = v34;
    if ( v33 )
      MiDeleteSubsection(v33);
    goto LABEL_58;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 12) >= 0x20u )
  {
LABEL_58:
    v25 = *(_DWORD *)(v10 + 4);
    v39 = *(_QWORD *)(v8 + 8) & (-1LL << (v25 & 0x1F));
    v26 = *(_QWORD *)(v10 + 8);
    v27 = (37
         * (BYTE6(v39)
          + 37
          * (BYTE5(v39)
           + 37
           * (BYTE4(v39)
            + 37 * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
         + HIBYTE(v39)) & ((v25 >> 5) - 1);
    *(_QWORD *)v8 = *(_QWORD *)(v26 + 8 * v27);
    *(_QWORD *)(v26 + 8 * v27) = v8;
    ++*(_DWORD *)v10;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *v42 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
    goto LABEL_19;
  }
  v8 = 0LL;
  SessionId = -1;
LABEL_20:
  if ( !v44 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      v43 = 0;
      v15 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx(v15->ApcState.Process);
      --v15->SpecialApcDisable;
      v16 = ++v15->AbAllocationRegionCount;
      v17 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      LODWORD(v18) = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
      while ( _BitScanReverse((unsigned int *)&v20, v18) )
      {
        v21 = (__int64)&v15->LockEntries[v20];
        v18 = ~(1 << v20) & (unsigned int)v18;
        if ( (*(_BYTE *)(v21 + 26) & 1) != 0
          && (*(_DWORD *)(v21 + 32) & 1) == 0
          && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v17
          && *(_DWORD *)(v21 + 40) == SessionId )
        {
          *(_BYTE *)(v21 + 26) &= ~1u;
          if ( *(_QWORD *)(v21 + 32) )
          {
            if ( v21 )
            {
              *(_BYTE *)(v21 + 32) |= 2u;
              if ( *(__int64 *)(v21 + 32) < 0 )
                KiAbEntryRemoveFromTree(v21, v18, v17);
              v43 = 0;
              v43 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
              *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v21 + 25) &= ~1u;
              *(_QWORD *)(v21 + 32) = 0LL;
              v22 = (v21 - (__int64)v15 - 800) / 96;
              if ( v16 == 1 )
                v15->AbEntrySummary |= 1 << v22;
              else
                _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v22);
              goto LABEL_44;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v15->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v15, BugCheckParameter2, SessionId, 0LL);
LABEL_44:
      --v15->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v15, BugCheckParameter2, &v43);
      v23 = v15->SpecialApcDisable + 1;
      v15->SpecialApcDisable = v23;
      if ( !v23 && ($69CD3F157F9F39B6F7113F2231989901 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
    }
    KeLeaveCriticalRegion();
  }
  return v8;
}

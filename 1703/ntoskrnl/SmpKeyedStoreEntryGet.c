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
  __int64 v17; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int16 v22; // ax
  _QWORD *v23; // rdx
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  char *PoolWithTag; // r8
  unsigned __int64 v29; // rcx
  unsigned int v30; // edi
  __int64 v31; // r10
  struct _PRIVILEGE_SET *v32; // rcx
  int v33; // eax
  char v34; // cl
  __int64 v35; // r13
  _QWORD *v36; // r9
  __int64 v37; // rdx
  __int64 v38; // [rsp+38h] [rbp-48h]
  __int64 v39; // [rsp+40h] [rbp-40h]
  __int64 v40; // [rsp+68h] [rbp-18h]
  _QWORD *v41; // [rsp+C8h] [rbp+48h]
  int v42; // [rsp+D0h] [rbp+50h] BYREF
  int v43; // [rsp+D8h] [rbp+58h]

  v43 = a4;
  v41 = a2;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( a3 > 0 )
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    else
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    a2 = v41;
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
      v40 = *(_QWORD *)(v8 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
      v23 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                     + 8LL
                     * ((37
                       * (BYTE6(v40)
                        + 37
                        * (BYTE5(v40)
                         + 37
                         * (BYTE4(v40)
                          + 37
                          * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
                       + HIBYTE(v40)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
      if ( (*(_QWORD *)v8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v23 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                       + 8LL
                       * ((37
                         * (BYTE6(v40)
                          + 37
                          * (BYTE5(v40)
                           + 37
                           * (BYTE4(v40)
                            + 37
                            * (BYTE3(v40)
                             + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
                         + HIBYTE(v40)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
      while ( (*v23 & 1) == 0 )
      {
        if ( *v23 == v8 )
        {
          *v23 = *(_QWORD *)v8;
          --*(_DWORD *)v10;
          *(_QWORD *)v8 |= 0x8000000000000002uLL;
          break;
        }
        v23 = (_QWORD *)*v23;
      }
      SessionId = -1;
      if ( *(_QWORD *)(BugCheckParameter2 + 24) == v8 )
        *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
      goto LABEL_20;
    }
    a2 = v41;
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
  v27 = 2 * ((unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 12) >> 5);
  if ( v27 > 0xFFFFFFFF )
    goto LABEL_58;
  if ( (unsigned int)v27 < 4 )
    v27 = 4LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v27, 0x54486D73u);
  if ( PoolWithTag )
  {
    if ( (((_DWORD)v27 - 1) & (unsigned int)v27) != 0 )
    {
      v34 = -1;
      do
      {
        ++v34;
        LODWORD(v27) = (unsigned int)v27 >> 1;
      }
      while ( (_DWORD)v27 );
      v27 = (unsigned int)(1 << v34);
    }
    if ( (unsigned int)v27 > 0x4000000 )
      v27 = 0x4000000LL;
    v29 = (8 * v27 + 7) >> 3;
    if ( PoolWithTag > &PoolWithTag[8 * v27] )
      v29 = 0LL;
    if ( v29 )
      memset64(PoolWithTag, v10 | 1, v29);
    v30 = 0;
    v31 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
    if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v35 = *(_QWORD *)(v10 + 8);
        while ( 1 )
        {
          v36 = *(_QWORD **)(v35 + 8LL * v30);
          if ( ((unsigned __int8)v36 & 1) != 0 )
            break;
          *(_QWORD *)(v35 + 8LL * v30) = *v36;
          v39 = v31 & v36[1];
          v37 = (37
               * (BYTE6(v39)
                + 37
                * (BYTE5(v39)
                 + 37
                 * (BYTE4(v39)
                  + 37 * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
               + HIBYTE(v39)) & (unsigned int)(v27 - 1);
          *v36 = *(_QWORD *)&PoolWithTag[8 * v37];
          *(_QWORD *)&PoolWithTag[8 * v37] = v36;
        }
        v10 = BugCheckParameter2 + 8;
        ++v30;
      }
      while ( v30 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
    }
    v32 = *(struct _PRIVILEGE_SET **)(v10 + 8);
    v33 = (32 * v27) | *(_DWORD *)(v10 + 4) & 0x1F;
    *(_QWORD *)(v10 + 8) = PoolWithTag;
    *(_DWORD *)(v10 + 4) = v33;
    if ( v32 )
      MiDeleteSubsection(v32);
    goto LABEL_58;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 12) >= 0x20u )
  {
LABEL_58:
    v24 = *(_DWORD *)(v10 + 4);
    v38 = *(_QWORD *)(v8 + 8) & (-1LL << (v24 & 0x1F));
    v25 = *(_QWORD *)(v10 + 8);
    v26 = (37
         * (BYTE6(v38)
          + 37
          * (BYTE5(v38)
           + 37
           * (BYTE4(v38)
            + 37 * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v38 + 11623883)))))))
         + HIBYTE(v38)) & ((v24 >> 5) - 1);
    *(_QWORD *)v8 = *(_QWORD *)(v25 + 8 * v26);
    *(_QWORD *)(v25 + 8 * v26) = v8;
    ++*(_DWORD *)v10;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *v41 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
    goto LABEL_19;
  }
  v8 = 0LL;
  SessionId = -1;
LABEL_20:
  if ( !v43 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      v42 = 0;
      v15 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx(v15->ApcState.Process);
      --v15->SpecialApcDisable;
      v16 = ++v15->AbAllocationRegionCount;
      LODWORD(v17) = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
      while ( _BitScanReverse((unsigned int *)&v19, v17) )
      {
        v20 = (__int64)&v15->LockEntries[v19];
        v17 = ~(1 << v19) & (unsigned int)v17;
        if ( (*(_BYTE *)(v20 + 26) & 1) != 0
          && (*(_DWORD *)(v20 + 32) & 1) == 0
          && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v20 + 40) == SessionId )
        {
          *(_BYTE *)(v20 + 26) &= ~1u;
          if ( *(_QWORD *)(v20 + 32) )
          {
            if ( v20 )
            {
              *(_BYTE *)(v20 + 32) |= 2u;
              if ( *(__int64 *)(v20 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20, v17);
              v42 = 0;
              v42 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
              *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v20 + 25) &= ~1u;
              *(_QWORD *)(v20 + 32) = 0LL;
              v21 = (v20 - (__int64)v15 - 800) / 96;
              if ( v16 == 1 )
                v15->AbEntrySummary |= 1 << v21;
              else
                _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v21);
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
      KiAbThreadRemoveBoosts(v15, BugCheckParameter2, &v42);
      v22 = v15->SpecialApcDisable + 1;
      v15->SpecialApcDisable = v22;
      if ( !v22 && ($69CD3F157F9F39B6F7113F2231989901 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
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

/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x1400B9BEC
 * Callers:
 *     SmpKeyedStoreSetVaRanges @ 0x140004A3C (SmpKeyedStoreSetVaRanges.c)
 *     SmStoreExistsForProcess @ 0x1400B9BB4 (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreReference @ 0x14027183C (SmpKeyedStoreReference.c)
 *     SmpProcessQueryStoreStats @ 0x140271A00 (SmpProcessQueryStoreStats.c)
 *     SmSwapStore @ 0x1404445CC (SmSwapStore.c)
 *     SmpKeyedStoreCreate @ 0x140444B98 (SmpKeyedStoreCreate.c)
 *     SmProcessDeleteNotification @ 0x1404FCE70 (SmProcessDeleteNotification.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140572010 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmStoreCompressionStart @ 0x140738EE0 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x140738F5C (SmStoreCompressionStop.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // r12d
  _QWORD *v8; // r14
  __int64 v9; // r11
  ULONG_PTR v10; // r15
  unsigned __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // rdi
  int v14; // r8d
  __int64 v15; // rsi
  unsigned int v16; // edi
  struct _KTHREAD *v18; // rdi
  unsigned __int8 v19; // r15
  unsigned int v20; // edx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  char *PoolWithTag; // r8
  unsigned __int64 v32; // rcx
  __int64 v33; // r10
  __int64 v34; // r15
  _QWORD *v35; // r9
  __int64 v36; // rdx
  struct _PRIVILEGE_SET *v37; // rcx
  int v38; // eax
  char v39; // cl
  __int64 v40; // [rsp+38h] [rbp-48h]
  __int64 v41; // [rsp+40h] [rbp-40h]
  __int64 v42; // [rsp+68h] [rbp-18h]
  _QWORD *v43; // [rsp+C8h] [rbp+48h]
  int v44; // [rsp+D0h] [rbp+50h] BYREF
  int v45; // [rsp+D8h] [rbp+58h]

  v45 = a4;
  v43 = a2;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( a3 > 0 )
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    else
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    a2 = v43;
  }
  SessionId = -1;
  if ( !a3 )
  {
    v8 = *(_QWORD **)(BugCheckParameter2 + 24);
    if ( v8 && v8[1] == *a2 )
      goto LABEL_20;
    if ( *a2 == *(_QWORD *)(BugCheckParameter2 + 32) )
    {
      v8 = 0LL;
      goto LABEL_20;
    }
  }
  v9 = *a2;
  v10 = BugCheckParameter2 + 8;
  v11 = *(unsigned int *)(BugCheckParameter2 + 12);
  v12 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
  v13 = v12 & *a2;
  v14 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
  if ( v14 )
  {
    v15 = *(_QWORD *)(BugCheckParameter2 + 16);
    v8 = (_QWORD *)(v15
                  + 8LL
                  * ((37
                    * (BYTE6(v13)
                     + 37
                     * (BYTE5(v13)
                      + 37
                      * (BYTE4(v13)
                       + 37
                       * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                    + HIBYTE(v13)) & (unsigned int)(v14 - 1)));
    while ( 1 )
    {
      v8 = (_QWORD *)*v8;
      if ( ((unsigned __int8)v8 & 1) != 0 )
        break;
      if ( v13 == (v12 & v8[1]) )
      {
        v16 = 0;
        goto LABEL_15;
      }
    }
    v16 = 0;
    v8 = 0LL;
LABEL_15:
    if ( v8 )
    {
      if ( a3 == 2 )
      {
        v42 = v8[1] & (-1LL << (v11 & 0x1F));
        v28 = (_QWORD *)(v15
                       + 8LL
                       * ((37
                         * (BYTE6(v42)
                          + 37
                          * (BYTE5(v42)
                           + 37
                           * (BYTE4(v42)
                            + 37
                            * (BYTE3(v42)
                             + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
                         + HIBYTE(v42)) & (((unsigned int)v11 >> 5) - 1)));
        if ( (*v8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v28 = (_QWORD *)(v15
                         + 8LL
                         * ((37
                           * (BYTE6(v42)
                            + 37
                            * (BYTE5(v42)
                             + 37
                             * (BYTE4(v42)
                              + 37
                              * (BYTE3(v42)
                               + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
                           + HIBYTE(v42)) & (((unsigned int)v11 >> 5) - 1)));
        while ( (*v28 & 1) == 0 )
        {
          if ( (_QWORD *)*v28 == v8 )
          {
            *v28 = *v8;
            --*(_DWORD *)v10;
            *v8 |= 0x8000000000000002uLL;
            break;
          }
          v28 = (_QWORD *)*v28;
        }
        if ( *(_QWORD **)(BugCheckParameter2 + 24) == v8 )
          *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
      }
      else
      {
        *(_QWORD *)(BugCheckParameter2 + 24) = v8;
      }
      goto LABEL_20;
    }
    a2 = v43;
  }
  else
  {
    v16 = 0;
  }
  if ( a3 != 1 )
  {
    *(_QWORD *)(BugCheckParameter2 + 32) = v9;
LABEL_19:
    v8 = 0LL;
    goto LABEL_20;
  }
  v8 = a2 - 1;
  if ( *(_DWORD *)v10 >= (unsigned int)(2 * v14) )
  {
    v29 = 2 * (v11 >> 5);
    if ( v29 <= 0xFFFFFFFF )
    {
      v30 = (unsigned int)v29;
      if ( (unsigned int)v29 < 4 )
        v30 = 4LL;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v30, 0x54486D73u);
      if ( PoolWithTag )
      {
        if ( (((_DWORD)v30 - 1) & (unsigned int)v30) != 0 )
        {
          v39 = -1;
          do
          {
            ++v39;
            LODWORD(v30) = (unsigned int)v30 >> 1;
          }
          while ( (_DWORD)v30 );
          v30 = (unsigned int)(1 << v39);
        }
        if ( (unsigned int)v30 > 0x4000000 )
          v30 = 0x4000000LL;
        v32 = (unsigned int)v30;
        if ( PoolWithTag > &PoolWithTag[8 * v30] )
          v32 = 0LL;
        if ( v32 )
        {
          memset64(PoolWithTag, v10 | 1, v32);
          v16 = 0;
        }
        v33 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v34 = *(_QWORD *)(v10 + 8);
            while ( 1 )
            {
              v35 = *(_QWORD **)(v34 + 8LL * v16);
              if ( ((unsigned __int8)v35 & 1) != 0 )
                break;
              *(_QWORD *)(v34 + 8LL * v16) = *v35;
              v41 = v33 & v35[1];
              v36 = (37
                   * (BYTE6(v41)
                    + 37
                    * (BYTE5(v41)
                     + 37
                     * (BYTE4(v41)
                      + 37
                      * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
                   + HIBYTE(v41)) & (unsigned int)(v30 - 1);
              *v35 = *(_QWORD *)&PoolWithTag[8 * v36];
              *(_QWORD *)&PoolWithTag[8 * v36] = v35;
            }
            v10 = BugCheckParameter2 + 8;
            ++v16;
          }
          while ( v16 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v37 = *(struct _PRIVILEGE_SET **)(v10 + 8);
        v38 = (32 * v30) | *(_DWORD *)(v10 + 4) & 0x1F;
        *(_QWORD *)(v10 + 8) = PoolWithTag;
        *(_DWORD *)(v10 + 4) = v38;
        if ( v37 )
          MiDeleteSubsection(v37);
      }
      else if ( *(_DWORD *)(BugCheckParameter2 + 12) < 0x20u )
      {
        goto LABEL_19;
      }
    }
  }
  v25 = *(_DWORD *)(v10 + 4);
  v40 = v8[1] & (-1LL << (v25 & 0x1F));
  v26 = *(_QWORD *)(v10 + 8);
  v27 = (37
       * (BYTE6(v40)
        + 37
        * (BYTE5(v40)
         + 37
         * (BYTE4(v40)
          + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
       + HIBYTE(v40)) & ((v25 >> 5) - 1);
  *v8 = *(_QWORD *)(v26 + 8 * v27);
  *(_QWORD *)(v26 + 8 * v27) = v8;
  ++*(_DWORD *)v10;
  if ( *(_QWORD *)(BugCheckParameter2 + 32) == *v43 )
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
LABEL_20:
  if ( !v45 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      v44 = 0;
      v18 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v18->ApcState.Process);
      --v18->SpecialApcDisable;
      v19 = ++v18->AbAllocationRegionCount;
      v20 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v21 = !_BitScanReverse((unsigned int *)&v22, v20);
        if ( v21 )
          break;
        v23 = (__int64)&v18->LockEntries[v22];
        v20 &= ~(1 << v22);
        if ( (*(_BYTE *)(v23 + 26) & 1) != 0
          && (*(_DWORD *)(v23 + 32) & 1) == 0
          && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v23 + 40) == SessionId )
        {
          *(_BYTE *)(v23 + 26) &= ~1u;
          if ( *(_QWORD *)(v23 + 32) )
          {
            if ( v23 )
            {
              *(_BYTE *)(v23 + 32) |= 2u;
              if ( *(__int64 *)(v23 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
              v44 = 0;
              v44 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
              *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v23 + 25) &= ~1u;
              *(_QWORD *)(v23 + 32) = 0LL;
              v24 = (v23 - (__int64)v18 - 800) / 96;
              if ( v19 == 1 )
                v18->AbEntrySummary |= 1 << v24;
              else
                _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v24);
              goto LABEL_43;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v18, BugCheckParameter2, SessionId, 0LL);
LABEL_43:
      --v18->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v18, BugCheckParameter2, (unsigned int *)&v44);
      v21 = v18->SpecialApcDisable++ == -1;
      if ( v21 && ($B476B70DB57F76B110DA5B9238C3E934 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
    }
    KeLeaveCriticalRegion();
  }
  return v8;
}

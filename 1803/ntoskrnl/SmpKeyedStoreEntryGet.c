/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x14008BD28
 * Callers:
 *     SmpKeyedStoreSetVaRanges @ 0x14007E7BC (SmpKeyedStoreSetVaRanges.c)
 *     SmpKeyedStoreReference @ 0x14008BB9C (SmpKeyedStoreReference.c)
 *     SmStoreExistsForProcess @ 0x14008BCF0 (SmStoreExistsForProcess.c)
 *     SmpProcessQueryStoreStats @ 0x1402A64B0 (SmpProcessQueryStoreStats.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x14048C768 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessDeleteNotification @ 0x140511C74 (SmProcessDeleteNotification.c)
 *     SmpKeyedStoreCreate @ 0x14052B6BC (SmpKeyedStoreCreate.c)
 *     SmSwapStore @ 0x14052D160 (SmSwapStore.c)
 *     SmStoreCompressionStart @ 0x14052D268 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x14052D2E0 (SmStoreCompressionStop.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int64 a4)
{
  int v4; // r13d
  unsigned __int64 PoolWithTag; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int SessionId; // r12d
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r11
  ULONG_PTR v11; // r15
  __int64 v12; // r10
  __int64 v13; // rdi
  struct _KTHREAD *v15; // rdi
  unsigned __int8 v16; // r15
  unsigned int v17; // edx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // r8d
  char v23; // al
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  unsigned __int64 v30; // rcx
  unsigned int v31; // r9d
  __int64 v32; // r10
  __int64 v33; // r13
  _QWORD *v34; // r11
  unsigned __int64 v35; // rcx
  struct _PRIVILEGE_SET *v36; // rcx
  int v37; // eax
  char v38; // cl
  int v39; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v40; // [rsp+40h] [rbp-41h]
  unsigned int v41; // [rsp+48h] [rbp-39h]
  int v42; // [rsp+4Ch] [rbp-35h]
  int v43; // [rsp+50h] [rbp-31h]
  ULONG_PTR v44; // [rsp+58h] [rbp-29h]
  _QWORD *v45; // [rsp+60h] [rbp-21h]
  _QWORD *v46; // [rsp+68h] [rbp-19h]
  unsigned __int64 v47; // [rsp+70h] [rbp-11h]
  unsigned __int64 v48; // [rsp+78h] [rbp-9h]
  unsigned __int64 v49; // [rsp+80h] [rbp-1h]
  unsigned __int64 v50; // [rsp+88h] [rbp+7h]
  __int64 v51; // [rsp+90h] [rbp+Fh]
  unsigned __int64 v52; // [rsp+98h] [rbp+17h]
  unsigned __int64 v53; // [rsp+A0h] [rbp+1Fh]
  _QWORD *v54; // [rsp+F0h] [rbp+6Fh]
  int v56; // [rsp+100h] [rbp+7Fh]

  v56 = a4;
  v54 = (_QWORD *)a2;
  v4 = a3;
  PoolWithTag = a2;
  if ( !(_DWORD)a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( v4 > 0 )
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    else
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    PoolWithTag = (unsigned __int64)v54;
  }
  SessionId = -1;
  if ( !v4 )
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v9 && *(_QWORD *)(v9 + 8) == *(_QWORD *)PoolWithTag )
      goto LABEL_19;
    if ( *(_QWORD *)PoolWithTag == *(_QWORD *)(BugCheckParameter2 + 32) )
    {
      v9 = 0LL;
      goto LABEL_19;
    }
  }
  v10 = *(_QWORD *)PoolWithTag;
  v11 = BugCheckParameter2 + 8;
  v41 = *(_DWORD *)(BugCheckParameter2 + 12);
  a4 = v41 >> 5;
  v12 = -1LL << (v41 & 0x1F);
  v13 = v12 & v10;
  v40 = (v12 & v10) >> 40;
  v49 = (v12 & v10) >> 32;
  v48 = (v12 & v10) >> 24;
  a2 = (v12 & v10) >> 8;
  v47 = (v12 & v10) >> 16;
  if ( !(_DWORD)a4 )
    goto LABEL_16;
  v51 = v12 & v10;
  a2 = (unsigned __int8)((v12 & v10) >> 48)
     + 37
     * ((unsigned __int8)v40
      + 37
      * ((unsigned __int8)v49
       + 37
       * ((unsigned __int8)v48
        + 37 * ((unsigned __int8)v47 + 37 * ((unsigned __int8)a2 + 37 * ((unsigned __int8)v13 + 11623883LL))))));
  v40 = *(_QWORD *)(BugCheckParameter2 + 16);
  v9 = v40 + 8LL * (((_DWORD)a4 - 1) & ((unsigned int)((v12 & v10) >> 56) + 37 * (_DWORD)a2));
  while ( 1 )
  {
    v9 = *(_QWORD *)v9;
    if ( (v9 & 1) != 0 )
      break;
    if ( v13 == (v12 & *(_QWORD *)(v9 + 8)) )
      goto LABEL_15;
  }
  v9 = 0LL;
LABEL_15:
  if ( v9 )
  {
    if ( v4 == 2 )
    {
      v25 = v12 & *(_QWORD *)(v9 + 8);
      v44 = BugCheckParameter2 + 8;
      v52 = v25;
      v45 = (_QWORD *)v9;
      a2 = 0x8000000000000002uLL;
      v26 = (_QWORD *)(v40
                     + 8
                     * (((int)a4 - 1) & (HIBYTE(v25)
                                       + 37
                                       * (BYTE6(v25)
                                        + 37
                                        * (BYTE5(v25)
                                         + 37
                                         * (BYTE4(v25)
                                          + 37
                                          * (BYTE3(v25)
                                           + 37
                                           * (BYTE2(v25)
                                            + 37 * (37 * ((unsigned __int8)v25 + 11623883) + (unsigned int)BYTE1(v25))))))))));
      v27 = *(_QWORD *)v9 & 0x8000000000000002uLL;
      v46 = v26;
      if ( v27 == 0x8000000000000002uLL )
        v26 = v46;
      while ( (*v26 & 1) == 0 )
      {
        if ( *v26 == v9 )
        {
          *v26 = *(_QWORD *)v9;
          --*(_DWORD *)v11;
          *(_QWORD *)v9 |= 0x8000000000000002uLL;
          v45 = v26;
          break;
        }
        v26 = (_QWORD *)*v26;
      }
      if ( *(_QWORD *)(BugCheckParameter2 + 24) == v9 )
        *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 24) = v9;
    }
  }
  else
  {
LABEL_16:
    if ( v4 != 1 )
    {
      *(_QWORD *)(BugCheckParameter2 + 32) = v10;
LABEL_18:
      v9 = 0LL;
      goto LABEL_19;
    }
    v9 = PoolWithTag - 8;
    v42 = 1414032755;
    if ( *(_DWORD *)v11 >= (unsigned int)(2 * a4) )
    {
      v28 = 2 * ((unsigned __int64)v41 >> 5);
      if ( v28 <= 0xFFFFFFFF )
      {
        v29 = (unsigned int)v28;
        if ( (unsigned int)v28 < 4 )
          v29 = 4LL;
        PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v29, 0x54486D73u);
        if ( PoolWithTag )
        {
          if ( (((_DWORD)v29 - 1) & (unsigned int)v29) != 0 )
          {
            v38 = -1;
            do
            {
              ++v38;
              LODWORD(v29) = (unsigned int)v29 >> 1;
            }
            while ( (_DWORD)v29 );
            v29 = (unsigned int)(1 << v38);
          }
          if ( (unsigned int)v29 > 0x4000000 )
            v29 = 0x4000000LL;
          v30 = (unsigned int)v29;
          if ( PoolWithTag > PoolWithTag + 8 * v29 )
            v30 = 0LL;
          if ( v30 )
            memset64((void *)PoolWithTag, v11 | 1, v30);
          v31 = 0;
          v32 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
          if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v33 = *(_QWORD *)(v11 + 8);
              while ( 1 )
              {
                v34 = *(_QWORD **)(v33 + 8LL * v31);
                if ( ((unsigned __int8)v34 & 1) != 0 )
                  break;
                *(_QWORD *)(v33 + 8LL * v31) = *v34;
                v53 = v32 & v34[1];
                v35 = (HIBYTE(v53)
                     + 37
                     * (BYTE6(v53)
                      + 37
                      * (BYTE5(v53)
                       + 37
                       * (BYTE4(v53)
                        + 37
                        * (BYTE3(v53) + 37 * (BYTE2(v53) + 37 * (37 * ((unsigned __int8)v53 + 11623883) + BYTE1(v53)))))))) & (unsigned int)(v29 - 1);
                *v34 = *(_QWORD *)(PoolWithTag + 8 * v35);
                *(_QWORD *)(PoolWithTag + 8 * v35) = v34;
              }
              v11 = BugCheckParameter2 + 8;
              ++v31;
            }
            while ( v31 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
            v4 = a3;
          }
          v36 = *(struct _PRIVILEGE_SET **)(v11 + 8);
          v37 = (32 * v29) | *(_DWORD *)(v11 + 4) & 0x1F;
          *(_QWORD *)(v11 + 8) = PoolWithTag;
          *(_DWORD *)(v11 + 4) = v37;
          if ( v36 )
            CmSiFreeMemory(v36);
        }
        else if ( *(_DWORD *)(BugCheckParameter2 + 12) < 0x20u )
        {
          goto LABEL_18;
        }
      }
    }
    a4 = (__int64)v54;
    v22 = *(_DWORD *)(v11 + 4);
    v23 = v22 & 0x1F;
    PoolWithTag = v22 >> 5;
    v50 = *v54 & (-1LL << v23);
    v24 = *(_QWORD *)(v11 + 8);
    a2 = (HIBYTE(v50)
        + 37
        * (BYTE6(v50)
         + 37
         * (BYTE5(v50)
          + 37
          * (BYTE4(v50)
           + 37 * (BYTE3(v50) + 37 * (BYTE2(v50) + 37 * (37 * ((unsigned __int8)v50 + 11623883) + BYTE1(v50)))))))) & (unsigned int)(PoolWithTag - 1);
    *(_QWORD *)v9 = *(_QWORD *)(v24 + 8 * a2);
    *(_QWORD *)(v24 + 8 * a2) = v9;
    ++*(_DWORD *)v11;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *v54 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  }
LABEL_19:
  if ( !v56 )
  {
    if ( v4 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, a2, PoolWithTag, a4);
      v39 = 0;
      v15 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx(v15->ApcState.Process);
      --v15->SpecialApcDisable;
      v16 = ++v15->AbAllocationRegionCount;
      v17 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v18 = !_BitScanReverse((unsigned int *)&v19, v17);
        v43 = v19;
        if ( v18 )
          break;
        v20 = (__int64)&v15->LockEntries[v19];
        v17 &= ~(1 << v19);
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
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
              v39 = 0;
              v39 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
              *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v20 + 25) &= ~1u;
              *(_QWORD *)(v20 + 32) = 0LL;
              v21 = (v20 - (__int64)v15 - 800) / 96;
              if ( v16 == 1 )
                v15->AbEntrySummary |= 1 << v21;
              else
                _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v21);
              goto LABEL_45;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v15, BugCheckParameter2, SessionId, 0LL);
LABEL_45:
      --v15->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v15, BugCheckParameter2, &v39);
      v18 = v15->SpecialApcDisable++ == -1;
      if ( v18 && ($005F0E83B22994B61E86C72E0CE43C71 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
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
  return v9;
}

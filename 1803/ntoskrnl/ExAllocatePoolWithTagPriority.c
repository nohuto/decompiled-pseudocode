/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x140086940
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140002260 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140060FB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400694C0 (IopVerifierExAllocatePool_0.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400C9AE8 (IopVerifierExAllocatePool_1.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400D05A8 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1401604F0 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140237444 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePool_2 @ 0x140238848 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140238890 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePool_3 @ 0x140239174 (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePool_4 @ 0x140239984 (IopVerifierExAllocatePool_4.c)
 *     IopQueryNameInternal @ 0x1404A5650 (IopQueryNameInternal.c)
 *     IopAllocateMiniCompletionPacket @ 0x14052EBDC (IopAllocateMiniCompletionPacket.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     NtRemoveIoCompletionEx @ 0x14059C4D0 (NtRemoveIoCompletionEx.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 *     IoVerifierCheckForSettingsChange @ 0x140811510 (IoVerifierCheckForSettingsChange.c)
 *     VeAllocatePoolWithTagPriority @ 0x140812DA0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140813530 (VerifierExAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x140813894 (ViGrowPoolAllocation.c)
 *     VfPendingCheckForChanges @ 0x140820994 (VfPendingCheckForChanges.c)
 *     VfPoolInitPhase0 @ 0x140824948 (VfPoolInitPhase0.c)
 *     VfFaultsInitPhase0 @ 0x140824BF0 (VfFaultsInitPhase0.c)
 *     VfKeCheckForChanges @ 0x140827290 (VfKeCheckForChanges.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x14082F660 (VerifierPortExAllocatePoolWithTagPriority.c)
 *     IopApplySystemPartitionProt @ 0x1408DEBB0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     MmResourcesAvailable @ 0x1400869F0 (MmResourcesAvailable.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiSessionPoolVector @ 0x140592D80 (MiSessionPoolVector.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  EX_POOL_PRIORITY v4; // ebx
  ULONG v5; // r12d
  SIZE_T v6; // r15
  POOL_TYPE v7; // r14d
  unsigned __int32 v9; // edi
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  int v16; // ecx
  __int64 v17; // r13
  int v18; // eax
  volatile signed __int32 *v19; // rsi
  volatile signed __int32 v20; // ecx
  int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r10
  _QWORD *v27; // rbp
  __int64 v28; // r10
  int v29; // ebx
  __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v32; // rbp
  unsigned __int64 v33; // r15
  unsigned int v34; // r12d
  __int64 v35; // rax
  _QWORD *v36; // rbp
  __int64 v37; // r10
  int v38; // ebx
  __int64 v39; // rsi
  __int64 v40; // rdi
  unsigned int v41; // ebx
  __int64 v42; // rax
  _QWORD *v43; // r9
  unsigned int v44; // r11d
  _QWORD *v45; // r9
  __int64 v46; // rcx
  int v47; // r8d
  __int64 v48; // rdx
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // r10
  unsigned __int64 v51; // rax
  __int64 v52; // [rsp+38h] [rbp-70h]
  __int64 v53; // [rsp+40h] [rbp-68h]
  void *SpecialPool; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  ULONG v58; // [rsp+C0h] [rbp+18h]

  v58 = Tag;
  v4 = Priority;
  v5 = Tag;
  v6 = NumberOfBytes;
  v7 = PoolType;
  if ( ExpHeapFrontendPool )
  {
    if ( Priority != HighPoolPriority
      && (PoolType & 2) == 0
      && !(unsigned int)MmResourcesAvailable(PoolType, NumberOfBytes, (unsigned int)Priority)
      && v6 > 0xFE0 )
    {
      return 0LL;
    }
    return ExAllocatePoolWithTag(v7, v6, v5);
  }
  if ( (Priority & 8) == 0 || NumberOfBytes > 0xFE0 )
  {
LABEL_3:
    if ( v4 != HighPoolPriority
      && (v7 & 2) == 0
      && !(unsigned int)MmResourcesAvailable((unsigned int)v7, v6, (unsigned int)v4) )
    {
      if ( v6 > 0xFE0 )
        return 0LL;
      if ( (v7 & 1) != 0 && (v7 & 0x20) != 0 )
      {
        v24 = (_QWORD *)MiSessionPoolVector();
        v25 = (unsigned int)v24[10] + (unsigned int)v24[9] - (unsigned int)v24[17] - (unsigned int)v24[18];
        v26 = (unsigned int)v24[11] - (unsigned int)v24[19];
      }
      else
      {
        v25 = 0LL;
        v27 = (_QWORD *)PoolVector[v7 & 1];
        v26 = 0LL;
        if ( (v7 & 1) != 0 )
        {
          if ( (unsigned __int16)KeNumberNodes <= 1u )
          {
            v44 = 0;
            v45 = v27 + 9;
            do
            {
              ++v44;
              v46 = v45[9];
              v47 = *v45 - v45[8];
              v48 = v45[1];
              v45 += 552;
              v25 += (unsigned int)(v48 + v47 - v46);
              v26 += (unsigned int)*(v45 - 550) - (unsigned int)*(v45 - 542);
            }
            while ( v44 <= ExpNumberOfPagedPools );
          }
          else
          {
            v41 = 0;
            do
            {
              v42 = v41++;
              v43 = (_QWORD *)ExpPagedPoolDescriptor[v42];
              v25 += (unsigned int)v43[10] + (unsigned int)v43[9] - (unsigned int)v43[17] - (unsigned int)v43[18];
              v26 += (unsigned int)v43[11] - (unsigned int)v43[19];
            }
            while ( v41 <= ExpNumberOfPagedPools );
          }
        }
        else if ( ExpNumberOfNonPagedPools == 1 )
        {
          v28 = v27[10];
          v29 = v27[9] - v27[17] - v27[18];
          v30 = v27[19];
          v31 = v27[11];
          v32 = v27 + 552;
          v25 = (unsigned int)(v28 + v29)
              + (unsigned __int64)((unsigned int)v32[10]
                                 + (unsigned int)v32[9]
                                 - (unsigned int)v32[17]
                                 - (unsigned int)v32[18]);
          v26 = (unsigned int)(v31 - v30) + (unsigned __int64)((unsigned int)v32[11] - (unsigned int)v32[19]);
        }
        else if ( ExpNumberOfNonPagedPools )
        {
          v33 = 0LL;
          v34 = 0;
          do
          {
            v35 = v34++;
            v36 = (_QWORD *)ExpNonPagedPoolDescriptor[v35];
            v37 = v36[10];
            v38 = v36[9] - v36[17] - v36[18];
            v39 = v36[19];
            v40 = v36[11];
            v36 += 552;
            v25 += (unsigned int)v36[9]
                 - (unsigned int)v36[17]
                 - (unsigned int)v36[18]
                 + (unsigned int)v36[10]
                 + (unsigned __int64)(unsigned int)(v37 + v38);
            v33 += (unsigned int)v36[11] - (unsigned int)v36[19] + (unsigned __int64)(unsigned int)(v40 - v39);
          }
          while ( v34 < ExpNumberOfNonPagedPools );
          v7 = PoolType;
          v5 = v58;
          v26 = v33;
          v6 = NumberOfBytes;
        }
      }
      v49 = v25 | 1;
      v50 = v26 >> 12;
      v51 = v49;
      if ( v50 <= v49 )
        v51 = v50;
      if ( (unsigned int)(100 * v51 / v49) >= 0x50 )
        return 0LL;
    }
    return ExAllocatePoolWithTag(v7, v6, v5);
  }
  v9 = PoolType & 0xFFFFFFDF;
  if ( (PoolType & 0x21) != 0x20 )
    v9 = PoolType;
  v5 = Tag & 0x7FFFFFFF;
  if ( (Tag & 0x7FFFFFFF) == 0 )
    v5 = 811884866;
  v58 = v5;
  SpecialPool = (void *)MmAllocateSpecialPool(NumberOfBytes);
  if ( !SpecialPool )
  {
    v4 &= 0xFFFFFFF6;
    goto LABEL_3;
  }
  v10 = v6 - 8;
  if ( (v7 & 0x40) == 0 )
    v10 = v6;
  if ( v5 == PoolHitTag )
    __debugbreak();
  v11 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v11 = EtwTracePool(3616, v9, v5, (_DWORD)SpecialPool, v10);
  if ( (v9 & 0x20) != 0 )
  {
    v14 = ExpSessionPoolTrackTable;
    v12 = ExpSessionPoolTrackTableMask;
    v13 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v11) = KeGetPcr()->Prcb.Number;
    v12 = PoolTrackTableMask;
    v13 = PoolTrackTableSize;
    v14 = (__int64)*(&ExPoolTagTables + v11);
  }
  v52 = v13;
  v53 = v14;
  v15 = v12 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
  v16 = v15;
  while ( 1 )
  {
    v17 = 56LL * v15;
    v18 = *(_DWORD *)(v14 + v17);
    v19 = (volatile signed __int32 *)(v14 + v17);
    if ( v18 == v5 )
      break;
    if ( v18 )
    {
LABEL_41:
      v15 = v12 & (v15 + 1);
      if ( v15 == v16 )
      {
        ExpInsertPoolTrackerExpansion(v5, v10, v9);
        goto LABEL_48;
      }
    }
    else
    {
      if ( (v9 & 0x20) != 0 )
        goto LABEL_35;
      v20 = *(_DWORD *)(PoolTrackTable + 56LL * v15);
      if ( v20 )
      {
        *v19 = v20;
        v16 = v12 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
      }
      else
      {
        v16 = v12 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
LABEL_35:
        if ( v15 == v13 - 1 )
          goto LABEL_41;
        if ( (v9 & 0x20) != 0 )
        {
          _InterlockedCompareExchange(v19, v5, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          if ( !*(_DWORD *)(PoolTrackTable + 56LL * v15) )
          {
            *(_DWORD *)(PoolTrackTable + 56LL * v15) = v5;
            *v19 = v5;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v13 = v52;
          v14 = v53;
          v16 = v12 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
        }
      }
    }
  }
  v21 = v9 & 1;
  v22 = 4LL;
  if ( v21 )
    v22 = 10LL;
  _InterlockedIncrement64((volatile signed __int64 *)&v19[v22]);
  v23 = 2LL;
  if ( v21 )
    v23 = 8LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v19[v23], v10);
LABEL_48:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return SpecialPool;
}

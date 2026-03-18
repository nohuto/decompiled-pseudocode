/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x14012A7A0
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140022E90 (IopVerifierExAllocatePoolWithQuota.c)
 *     IoAllocateWorkItem @ 0x140024D50 (IoAllocateWorkItem.c)
 *     IopVerifierExAllocatePool @ 0x140031B44 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140032020 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140033E50 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopBuildDeviceIoControlRequest @ 0x14004A740 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140081250 (IopBuildAsynchronousFsdRequest.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x14014B3F4 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x1401F47F4 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F4C88 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopQueryFullDriverPath @ 0x1401F5180 (IopQueryFullDriverPath.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401F5D34 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1401F5D70 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePool_3 @ 0x1401F65E4 (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePool_4 @ 0x1401F6E00 (IopVerifierExAllocatePool_4.c)
 *     NtFlushBuffersFileEx @ 0x1404401B4 (NtFlushBuffersFileEx.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x1404D9704 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404D98B8 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     IopQueryNameInternal @ 0x1404FBBC0 (IopQueryNameInternal.c)
 *     NtRemoveIoCompletionEx @ 0x140527090 (NtRemoveIoCompletionEx.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     IopAllocateMiniCompletionPacket @ 0x14055DE1C (IopAllocateMiniCompletionPacket.c)
 *     IoCreateSystemThread @ 0x140573E70 (IoCreateSystemThread.c)
 *     IopGetRegistryKeyInformation @ 0x140586A18 (IopGetRegistryKeyInformation.c)
 *     IopCreateArcName @ 0x14059C120 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x140689284 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x140689A20 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x140689D60 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x140689EC4 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 *     IoVerifierCheckForSettingsChange @ 0x1407628CC (IoVerifierCheckForSettingsChange.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1407649F0 (ViGrowPoolAllocation.c)
 *     VfInitVerifierComponents @ 0x1407657A0 (VfInitVerifierComponents.c)
 *     VfPendingCheckForChanges @ 0x140771A44 (VfPendingCheckForChanges.c)
 *     VfFaultsInitPhase0 @ 0x140775B94 (VfFaultsInitPhase0.c)
 *     VfKeCheckForChanges @ 0x140778050 (VfKeCheckForChanges.c)
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1407F83BC (IopCreateArcNames.c)
 *     IopStoreArcInformation @ 0x1407F8A30 (IopStoreArcInformation.c)
 *     IopInitializeBuiltinDriver @ 0x1407F9B40 (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformationLite @ 0x1408053E4 (IopGetBootDiskInformationLite.c)
 *     IopApplySystemPartitionProt @ 0x1408332A0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MmResourcesAvailable @ 0x14012A820 (MmResourcesAvailable.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14012BA70 (ExpInsertPoolTrackerExpansion.c)
 *     EtwTracePool @ 0x14017D8C0 (EtwTracePool.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     MiSessionPoolVector @ 0x14051EA00 (MiSessionPoolVector.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  EX_POOL_PRIORITY v4; // edi
  ULONG v5; // r12d
  SIZE_T v6; // r15
  POOL_TYPE v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int32 v11; // esi
  void *SpecialPool; // r13
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // r14d
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  int v19; // edx
  __int64 v20; // r15
  int v21; // eax
  int v22; // edx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r10
  _QWORD *v27; // r14
  __int64 v28; // r10
  int v29; // edi
  __int64 v30; // rbp
  __int64 v31; // rsi
  _QWORD *v32; // r14
  unsigned __int64 v33; // r15
  unsigned int v34; // r12d
  __int64 v35; // rax
  _QWORD *v36; // r14
  __int64 v37; // r10
  int v38; // edi
  __int64 v39; // rbp
  __int64 v40; // rsi
  unsigned int v41; // edi
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
  __int64 v52; // [rsp+30h] [rbp-78h]
  __int64 v53; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  ULONG v57; // [rsp+C0h] [rbp+18h]

  v57 = Tag;
  v4 = Priority;
  v5 = Tag;
  v6 = NumberOfBytes;
  v7 = PoolType;
  if ( (Priority & 8) == 0 || NumberOfBytes > 0xFE0 )
    goto LABEL_2;
  v11 = PoolType & 0xFFFFFFDF;
  if ( (PoolType & 0x21) != 0x20 )
    v11 = PoolType;
  v5 = Tag & 0x7FFFFFFF;
  if ( (Tag & 0x7FFFFFFF) == 0 )
    v5 = 811884866;
  v57 = v5;
  SpecialPool = (void *)MmAllocateSpecialPool(NumberOfBytes);
  if ( !SpecialPool )
  {
    v4 &= 0xFFFFFFF6;
LABEL_2:
    if ( v4 == HighPoolPriority
      || (v7 & 2) != 0
      || (unsigned int)MmResourcesAvailable((unsigned int)v7, v6, (unsigned int)v4) )
    {
      return ExAllocatePoolWithTag(v7, v6, v5);
    }
    if ( v6 > 0xFE0 )
      return 0LL;
    v23 = v7 & 1;
    if ( (v7 & 1) != 0 && (v7 & 0x20) != 0 )
    {
      v24 = (_QWORD *)MiSessionPoolVector(v23, v8, v9);
      v25 = (unsigned int)v24[10] + (unsigned int)v24[9] - (unsigned int)v24[17] - (unsigned int)v24[18];
      v26 = (unsigned int)v24[11] - (unsigned int)v24[19];
    }
    else
    {
      v25 = 0LL;
      v27 = (_QWORD *)PoolVector[v23];
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
        v5 = v57;
        v26 = v33;
        v6 = NumberOfBytes;
      }
    }
    v49 = v25 | 1;
    v50 = v26 >> 12;
    v51 = v49;
    if ( v50 <= v49 )
      v51 = v50;
    if ( (unsigned int)(100 * v51 / v49) < 0x50 )
      return ExAllocatePoolWithTag(v7, v6, v5);
    else
      return 0LL;
  }
  v13 = v6 - 8;
  if ( (v7 & 0x40) == 0 )
    v13 = v6;
  if ( v5 == PoolHitTag )
    __debugbreak();
  v14 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v14 = EtwTracePool(3616, v11, v5, (_DWORD)SpecialPool, v13);
  if ( (v11 & 0x20) != 0 )
  {
    v17 = ExpSessionPoolTrackTable;
    v15 = ExpSessionPoolTrackTableMask;
    v16 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v14) = KeGetPcr()->Prcb.Number;
    v15 = PoolTrackTableMask;
    v16 = PoolTrackTableSize;
    v17 = (__int64)*(&ExPoolTagTables + v14);
  }
  v53 = v16;
  v52 = v17;
  v18 = v15 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
  v19 = v18;
  while ( 1 )
  {
    v20 = 40LL * v18;
    v21 = *(_DWORD *)(v20 + v17);
    if ( v21 == v5 )
      break;
    if ( v21 )
    {
LABEL_34:
      v18 = v15 & (v18 + 1);
      if ( v18 == v19 )
      {
        ExpInsertPoolTrackerExpansion(v5, v13, v11);
        goto LABEL_39;
      }
    }
    else
    {
      if ( (v11 & 0x20) != 0 )
        goto LABEL_28;
      v22 = *(_DWORD *)(v20 + PoolTrackTable);
      if ( v22 )
      {
        *(_DWORD *)(v20 + v17) = v22;
        v19 = v15 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
      }
      else
      {
        v19 = v15 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
LABEL_28:
        if ( v18 == v16 - 1 )
          goto LABEL_34;
        if ( (v11 & 0x20) != 0 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v20 + v17), v5, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          if ( !*(_DWORD *)(v20 + PoolTrackTable) )
          {
            *(_DWORD *)(v20 + PoolTrackTable) = v5;
            *(_DWORD *)(v20 + v52) = v5;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v16 = v53;
          v17 = v52;
          v19 = v15 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
        }
      }
    }
  }
  if ( (v11 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + v17 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + v17 + 32), v13);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + v17 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + v17 + 16), v13);
  }
LABEL_39:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return SpecialPool;
}

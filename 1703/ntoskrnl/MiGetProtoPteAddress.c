/*
 * XREFs of MiGetProtoPteAddress @ 0x1400BD630
 * Callers:
 *     MiUpControlAreaRefs @ 0x14000308C (MiUpControlAreaRefs.c)
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiPteNeedsCommitCharge @ 0x14001DF70 (MiPteNeedsCommitCharge.c)
 *     MiIsCfgBitMapPageShared @ 0x1400637A0 (MiIsCfgBitMapPageShared.c)
 *     MiProtoFault @ 0x14006B9C4 (MiProtoFault.c)
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiExpandSharedZeroCluster @ 0x140076550 (MiExpandSharedZeroCluster.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiCheckUserVirtualAddress @ 0x14007C120 (MiCheckUserVirtualAddress.c)
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveSharedZeroFault @ 0x1400C18A0 (MiResolveSharedZeroFault.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400FA3B0 (MiSetReadOnlyOnSectionView.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiComputeImageVadCommitCharge @ 0x14020B220 (MiComputeImageVadCommitCharge.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14020CE14 (MiUpdatePrivateDemandZeroView.c)
 *     MiGetLargeVadMappingIndex @ 0x14021BEC0 (MiGetLargeVadMappingIndex.c)
 *     MiGetClusterPage @ 0x140222084 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     MiIsRangeFullyCommitted @ 0x14047B7F8 (MiIsRangeFullyCommitted.c)
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x140549FD0 (MiCommitPagefileBackedSection.c)
 *     MiFillMapFileInfo @ 0x1406B2E54 (MiFillMapFileInfo.c)
 *     MiDeletePartialCloneVad @ 0x1406BF360 (MiDeletePartialCloneVad.c)
 * Callees:
 *     MiTryLockVad @ 0x140033F8C (MiTryLockVad.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiLocateSubsectionNode @ 0x1400A7F30 (MiLocateSubsectionNode.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // r15
  unsigned __int64 v13; // rdi
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  _QWORD *SubsectionNode; // rax
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR v26; // r13
  __int64 v27; // rcx
  struct _KTHREAD *v28; // rbx
  __int64 SessionId; // rdx
  unsigned int v30; // r8d
  __int64 v31; // r9
  bool v32; // zf
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  _KLOCK_ENTRY *v36; // r13
  __int16 v37; // ax
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned int v40; // eax
  BOOL v41; // [rsp+34h] [rbp-44h]
  ULONG_PTR v42; // [rsp+38h] [rbp-40h]
  unsigned __int8 CurrentIrql; // [rsp+48h] [rbp-30h]
  int v44; // [rsp+80h] [rbp+8h] BYREF

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (*(_DWORD *)(a1 + 48) & 7) != 2 || (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) & 0x4000000) == 0 )
  {
    v9 = a2 - v7;
    if ( (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3 >= v9 && (a3 & 8) == 0 )
    {
      *a4 = *(_QWORD *)(a1 + 72);
      return *(_QWORD *)(a1 + 80) + 8 * v9;
    }
  }
  *a4 = 0LL;
  v11 = *(_QWORD **)(a1 + 72);
  v12 = *v11;
  v13 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - v11[1]) >> 3) - v7;
  if ( !*(_QWORD *)(*v11 + 64LL) )
  {
    if ( (*(_DWORD *)(v12 + 56) & 0x1000) != 0 || *((_DWORD *)v11 + 12) >= 0x40000000u )
    {
      v19 = 0x100000LL;
      if ( *((_DWORD *)v11 + 12) >= 0x40000000u )
        v19 = 0x200000LL;
      v20 = v19 >> 3;
      v21 = v13 / v20;
      v13 %= v20;
      v22 = (unsigned int)((a2 + ((__int64)(*(_QWORD *)(a1 + 80) - v11[1]) >> 3) - v7) / v20);
      if ( v13 )
        ++v22;
      if ( v22 > *(unsigned int *)(v12 + 96) )
        return 0LL;
      v11 += 10 * v21;
      v18 = *((unsigned int *)v11 + 11);
    }
    else
    {
      v18 = *((unsigned int *)v11 + 11);
    }
    if ( v13 < v18 )
    {
      if ( v11 )
      {
        *a4 = v11;
        v17 = v11[1];
        if ( v17 )
          goto LABEL_14;
      }
    }
    return 0LL;
  }
  v14 = *(_DWORD *)(a1 + 48);
  if ( (v14 & 0x20000) == 0 )
  {
    v15 = *((unsigned int *)v11 + 11);
    v16 = 0LL;
    if ( v13 >= v15 )
    {
      do
      {
        v11 = (_QWORD *)v11[2];
        v13 -= v15;
        ++v16;
        if ( !v11 )
          break;
        v15 = *((unsigned int *)v11 + 11);
      }
      while ( v13 >= v15 );
      if ( v16 > 0x10 && (*(_DWORD *)(v12 + 56) & 0x20) == 0 )
      {
        if ( (a3 & 1) != 0 )
        {
          *(_DWORD *)(a1 + 48) = v14 | 0x20000;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql < 2u )
            --CurrentThread->SpecialApcDisable;
          if ( (unsigned int)MiTryLockVad((__int64)CurrentThread, a1) == 1 )
          {
            *(_DWORD *)(a1 + 48) |= 0x20000u;
            v26 = a1 + 40;
            LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
            v42 = a1 + 40;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(a1 + 40);
            v44 = 0;
            v27 = a1 + 40;
            v28 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v27) == 1 )
              SessionId = (unsigned int)MmGetSessionIdEx(v28->ApcState.Process);
            else
              SessionId = 0xFFFFFFFFLL;
            --v28->SpecialApcDisable;
            ++v28->AbAllocationRegionCount;
            v30 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
            v41 = v28->AbAllocationRegionCount == 1;
            v31 = v26 & 0x7FFFFFFFFFFFFFFCLL;
            v32 = !_BitScanReverse((unsigned int *)&v33, v30);
            if ( v32 )
            {
LABEL_46:
              if ( (*((_DWORD *)&v28->0 + 1) & 0x8000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v28, v26, (unsigned int)SessionId, 0LL);
            }
            else
            {
              while ( 1 )
              {
                v34 = 1 << v33;
                v35 = v33;
                v36 = &v28->LockEntries[v35];
                v30 &= ~v34;
                if ( (v36->AcquiredByte & 1) != 0
                  && (*(_DWORD *)&v36->LockState.0 & 1) == 0
                  && (*(_QWORD *)&v36->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v31
                  && v36->LockState.SessionId == (_DWORD)SessionId )
                {
                  v36->AcquiredByte &= ~1u;
                  if ( v36->LockState.0 )
                    break;
                }
                v32 = !_BitScanReverse((unsigned int *)&v33, v30);
                if ( v32 )
                  goto LABEL_45;
              }
              if ( !v36 )
              {
LABEL_45:
                v26 = v42;
                goto LABEL_46;
              }
              v36->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v36->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v28->LockEntries[v35].TreeNode, SessionId);
              v44 = 0;
              v44 = v36->BoostBitmap.AllFields & 0x1FFFF;
              v36->BoostBitmap.AllFields &= 0xFFFE0000;
              v36->ThreadLocalFlags &= ~1u;
              v36->LockState.0 = 0LL;
              v38 = (unsigned __int128)(((char *)v36 - (char *)v28 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
              v26 = v42;
              v39 = ((unsigned __int64)v38 >> 63) + (v38 >> 4);
              if ( v41 )
                v28->AbEntrySummary |= 1 << v39;
              else
                _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v39);
            }
            --v28->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts(v28, v26, &v44);
            v37 = v28->SpecialApcDisable + 1;
            v28->SpecialApcDisable = v37;
            if ( !v37 && ($69CD3F157F9F39B6F7113F2231989901 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
              KiCheckForKernelApcDelivery();
          }
          if ( CurrentIrql < 2u )
            KiLeaveGuardedRegionUnsafe(CurrentThread);
        }
      }
    }
    if ( v11 )
      goto LABEL_13;
    return 0LL;
  }
  v23 = ((*((unsigned int *)v11 + 9) | ((unsigned __int64)((_WORD)v11[4] & 0xFFC0) << 26)) + v13) << 12;
  SubsectionNode = MiLocateSubsectionNode(*v11, v23, (a3 & 2) != 0);
  v11 = SubsectionNode;
  if ( !SubsectionNode )
    return 0LL;
  v13 = (v23 >> 12)
      - (*((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26));
LABEL_13:
  v17 = v11[1];
  *a4 = v11;
LABEL_14:
  if ( (*((_BYTE *)v11 + 34) & 2) != 0 && (*(_DWORD *)(v12 + 56) & 0x4000000) != 0 && (a3 & 4) == 0 )
  {
    v40 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v17 = *(_QWORD *)(MiGetSharedProtos(v12, v40, v11) + 32);
  }
  return v17 + 8 * v13;
}

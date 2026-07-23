/*
 * XREFs of MiGetProtoPteAddress @ 0x140040460
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14000BD64 (MiExpandSharedZeroCluster.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiResolveSharedZeroFault @ 0x140040630 (MiResolveSharedZeroFault.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiCountSharedPages @ 0x1400592B0 (MiCountSharedPages.c)
 *     MiIsCfgBitMapPageShared @ 0x1400A6230 (MiIsCfgBitMapPageShared.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiCheckUserVirtualAddress @ 0x140109820 (MiCheckUserVirtualAddress.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiPteNeedsCommitCharge @ 0x14011570C (MiPteNeedsCommitCharge.c)
 *     MiUpControlAreaRefs @ 0x140120C6C (MiUpControlAreaRefs.c)
 *     MiProtoFault @ 0x1401269B8 (MiProtoFault.c)
 *     MiComputeImageVadCommitCharge @ 0x140212118 (MiComputeImageVadCommitCharge.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140213E14 (MiUpdatePrivateDemandZeroView.c)
 *     MiGetLargeVadMappingIndex @ 0x1402287CC (MiGetLargeVadMappingIndex.c)
 *     MiGetClusterPage @ 0x14022EEDC (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     MiCommitPagefileBackedSection @ 0x140460420 (MiCommitPagefileBackedSection.c)
 *     MiIsRangeFullyCommitted @ 0x1404627C4 (MiIsRangeFullyCommitted.c)
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x1406DEE20 (MiFillMapFileInfo.c)
 *     MiCloneLargeFileOnlyVad @ 0x1406E3EE8 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1406EC69C (MiDeletePartialCloneVads.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     MiLocateSubsectionNode @ 0x1400A2890 (MiLocateSubsectionNode.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiTryLockVad @ 0x14012E314 (MiTryLockVad.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiGetSharedProtos @ 0x14022DECC (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  char v5; // bp
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // r15
  unsigned __int64 v13; // rdi
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rtt
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdi
  __int64 SubsectionNode; // rax
  struct _KTHREAD *CurrentThread; // r12
  _KLOCK_ENTRY *CurrentIrql; // r13
  ULONG_PTR v29; // r12
  __int64 v30; // rcx
  struct _KTHREAD *v31; // rbx
  unsigned int SessionId; // edx
  unsigned int v33; // r9d
  bool v34; // zf
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned int v40; // eax
  int v41; // [rsp+30h] [rbp-48h] BYREF
  int v42; // [rsp+34h] [rbp-44h]
  _KLOCK_ENTRY *v43; // [rsp+38h] [rbp-40h]
  struct _KTHREAD *v44; // [rsp+40h] [rbp-38h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+80h] [rbp+8h]

  v5 = a3;
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
      v18 = 0x100000LL;
      if ( *((_DWORD *)v11 + 12) >= 0x40000000u )
        v18 = 0x200000LL;
      v19 = v18 >> 3;
      v21 = v13;
      v20 = v13 / v19;
      v13 %= v19;
      v22 = (unsigned int)(v21 / v19);
      v23 = v22 + 1;
      if ( !v13 )
        v23 = v22;
      if ( v23 > *(unsigned int *)(v12 + 96) )
        return 0LL;
      v11 += 10 * v20;
      v24 = *((unsigned int *)v11 + 11);
    }
    else
    {
      v24 = *((unsigned int *)v11 + 11);
    }
    if ( v13 < v24 )
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
          v44 = CurrentThread;
          CurrentIrql = (_KLOCK_ENTRY *)KeGetCurrentIrql();
          v43 = CurrentIrql;
          if ( (unsigned __int8)CurrentIrql < 2u )
            --CurrentThread->SpecialApcDisable;
          if ( (unsigned int)MiTryLockVad(CurrentThread, a1) == 1 )
          {
            *(_DWORD *)(a1 + 48) |= 0x20000u;
            LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
            v29 = a1 + 40;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(a1 + 40);
            v41 = 0;
            v30 = a1 + 40;
            v31 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
              SessionId = MmGetSessionIdEx(v31->ApcState.Process);
            else
              SessionId = -1;
            --v31->SpecialApcDisable;
            ++v31->AbAllocationRegionCount;
            v33 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
            AbAllocationRegionCount = v31->AbAllocationRegionCount;
            v34 = !_BitScanReverse((unsigned int *)&v35, v33);
            v42 = v35;
            if ( v34 )
            {
LABEL_63:
              if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v31, v29, SessionId, 0LL);
            }
            else
            {
              while ( 1 )
              {
                v36 = 1 << v35;
                v37 = v35;
                CurrentIrql = &v31->LockEntries[v37];
                v33 &= ~v36;
                if ( (CurrentIrql->AcquiredByte & 1) != 0
                  && (*(_DWORD *)&CurrentIrql->LockState.0 & 1) == 0
                  && (*(_QWORD *)&CurrentIrql->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v29 & 0x7FFFFFFFFFFFFFFCLL)
                  && CurrentIrql->LockState.SessionId == SessionId )
                {
                  CurrentIrql->AcquiredByte &= ~1u;
                  if ( CurrentIrql->LockState.0 )
                    break;
                }
                v34 = !_BitScanReverse((unsigned int *)&v35, v33);
                v42 = v35;
                if ( v34 )
                  goto LABEL_62;
              }
              if ( !CurrentIrql )
              {
LABEL_62:
                LOBYTE(CurrentIrql) = (_BYTE)v43;
                goto LABEL_63;
              }
              CurrentIrql->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)CurrentIrql->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v31->LockEntries[v37].TreeNode);
              v41 = 0;
              v41 = CurrentIrql->BoostBitmap.AllFields & 0x1FFFF;
              CurrentIrql->BoostBitmap.AllFields &= 0xFFFE0000;
              CurrentIrql->ThreadLocalFlags &= ~1u;
              CurrentIrql->LockState.0 = 0LL;
              v38 = (unsigned __int128)(((char *)CurrentIrql - (char *)v31 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
              LOBYTE(CurrentIrql) = (_BYTE)v43;
              v39 = ((unsigned __int64)v38 >> 63) + (v38 >> 4);
              if ( AbAllocationRegionCount == 1 )
                v31->AbEntrySummary |= 1 << v39;
              else
                _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v39);
            }
            --v31->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts(v31, v29, &v41);
            v34 = v31->SpecialApcDisable++ == -1;
            if ( v34 && ($B476B70DB57F76B110DA5B9238C3E934 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
              KiCheckForKernelApcDelivery();
            CurrentThread = v44;
          }
          if ( (unsigned __int8)CurrentIrql < 2u )
            KiLeaveGuardedRegionUnsafe(CurrentThread);
        }
      }
    }
    if ( v11 )
      goto LABEL_13;
    return 0LL;
  }
  v25 = ((*((unsigned int *)v11 + 9) | ((unsigned __int64)((_WORD)v11[4] & 0xFFC0) << 26)) + v13) << 12;
  SubsectionNode = MiLocateSubsectionNode(*v11, v25, (a3 >> 1) & 1);
  v11 = (_QWORD *)SubsectionNode;
  if ( !SubsectionNode )
    return 0LL;
  v13 = (v25 >> 12)
      - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
LABEL_13:
  v17 = v11[1];
  *a4 = v11;
LABEL_14:
  if ( (*((_BYTE *)v11 + 34) & 2) != 0 && (*(_DWORD *)(v12 + 56) & 0x4000000) != 0 && (v5 & 4) == 0 )
  {
    v40 = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v17 = *(_QWORD *)(MiGetSharedProtos(v12, v40, v11) + 32);
  }
  return v17 + 8 * v13;
}

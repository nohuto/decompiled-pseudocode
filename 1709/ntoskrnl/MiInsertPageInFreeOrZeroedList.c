/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x14004F970
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDrainZeroLookasides @ 0x140031040 (MiDrainZeroLookasides.c)
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 *     MiWriteCompletePfn @ 0x1400A5320 (MiWriteCompletePfn.c)
 *     MiReturnPhysicalPoolPages @ 0x1400C0230 (MiReturnPhysicalPoolPages.c)
 *     MiDemoteLocalLargePage @ 0x1400C62F0 (MiDemoteLocalLargePage.c)
 *     MiReturnFreeZeroPage @ 0x1400CABF0 (MiReturnFreeZeroPage.c)
 *     MiDeleteClusterSection @ 0x1400CB53C (MiDeleteClusterSection.c)
 *     MiFreeSmallPageFromMdl @ 0x1400E1408 (MiFreeSmallPageFromMdl.c)
 *     MiFreePageFileHashPfns @ 0x1400F0478 (MiFreePageFileHashPfns.c)
 *     MiRelinkStandbyPage @ 0x1400F0F68 (MiRelinkStandbyPage.c)
 *     MiFreeLargePageMemory @ 0x1400F43C0 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x140108CB0 (MiDeleteClusterPage.c)
 *     MiPruneStandbyPages @ 0x1401353D0 (MiPruneStandbyPages.c)
 *     MiReturnPfnList @ 0x1401390C4 (MiReturnPfnList.c)
 *     MiLockAndInsertPageInFreeList @ 0x140150B54 (MiLockAndInsertPageInFreeList.c)
 *     MiPurgeSubsection @ 0x1402115B4 (MiPurgeSubsection.c)
 *     MiEnableNewPfns @ 0x140214488 (MiEnableNewPfns.c)
 *     MiMoveEccPagesToFreeList @ 0x1402149CC (MiMoveEccPagesToFreeList.c)
 *     MmFreeNonChargedSecurePages @ 0x140217864 (MmFreeNonChargedSecurePages.c)
 *     MiPurgeImageSection @ 0x14021F0FC (MiPurgeImageSection.c)
 *     MiDeleteEnclavePage @ 0x1402295DC (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x140229AD8 (MiReturnEnclavePage.c)
 *     MiPurgeZeroList @ 0x14022A7B0 (MiPurgeZeroList.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 *     MiPurgePartitionStandby @ 0x14022B540 (MiPurgePartitionStandby.c)
 *     MiDeleteDirectMapFixupPfn @ 0x14022C0B0 (MiDeleteDirectMapFixupPfn.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 *     MiTransferPartitionPageRun @ 0x140238208 (MiTransferPartitionPageRun.c)
 *     MiScrubNode @ 0x140238CDC (MiScrubNode.c)
 *     MiComputeOptimalZeroPath @ 0x140829810 (MiComputeOptimalZeroPath.c)
 *     MxCreateFreePfns @ 0x14082A9F8 (MxCreateFreePfns.c)
 *     MxSwapPages @ 0x14082C2BC (MxSwapPages.c)
 *     MiCreateEnclaveRegions @ 0x140850F58 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x140137060 (MiUpdateAvailableEvents.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     KeCheckForZeroPage @ 0x140184CB0 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x1402226D0 (MiClearFileOnlyPfn.c)
 *     MiPageNotZero @ 0x14022A530 (MiPageNotZero.c)
 *     MiSetPfnSlist @ 0x14022A9D4 (MiSetPfnSlist.c)
 */

void __fastcall MiInsertPageInFreeOrZeroedList(__int64 a1, __int16 a2)
{
  __int64 v2; // r9
  __int64 v4; // rbx
  __int64 v5; // r8
  PSLIST_ENTRY v6; // rdi
  unsigned __int64 v7; // rcx
  int v8; // r15d
  __int64 v9; // r13
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rsi
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // r8
  char v15; // al
  unsigned __int64 v16; // r8
  int v17; // esi
  unsigned int v18; // r9d
  _SLIST_ENTRY *Next; // rcx
  char v20; // al
  unsigned __int64 v21; // rdx
  unsigned int v22; // r9d
  int v23; // r10d
  unsigned __int64 v24; // r14
  __int64 v25; // rbx
  int v26; // ecx
  unsigned int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // r11
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 *v32; // r8
  _QWORD *v33; // rdx
  __int64 v34; // r10
  __int64 *v35; // r9
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // rax
  unsigned __int64 v39; // r8
  unsigned __int16 **v40; // r10
  __int64 v41; // r11
  unsigned __int16 *v42; // rcx
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  char v45; // cl
  struct _KEVENT *v46; // rbx
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  _QWORD *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r11
  __int64 v54; // rdx
  signed __int64 v55; // r8
  signed __int64 v56; // rcx
  __int64 v57; // rcx
  volatile signed __int64 *v58; // rbx
  unsigned __int64 v59; // r12
  _KSPIN_LOCK_QUEUE *volatile v60; // rax
  signed __int32 v61[8]; // [rsp+0h] [rbp-79h] BYREF
  unsigned int v62; // [rsp+20h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE v63; // [rsp+28h] [rbp-51h] BYREF
  unsigned __int64 v64; // [rsp+40h] [rbp-39h]
  int v65; // [rsp+48h] [rbp-31h]
  unsigned __int64 v66; // [rsp+50h] [rbp-29h]
  __int64 v67; // [rsp+58h] [rbp-21h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-19h]
  _QWORD *v69; // [rsp+68h] [rbp-11h]
  __int64 v70; // [rsp+70h] [rbp-9h]
  unsigned __int64 v71; // [rsp+78h] [rbp-1h]
  volatile signed __int64 *v72; // [rsp+80h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned __int8 v76; // [rsp+F0h] [rbp+77h] BYREF
  int v77; // [rsp+F8h] [rbp+7Fh]

  v2 = 48 * a1;
  v4 = a1;
  v5 = *(_QWORD *)(48 * a1 - 0x58000000000LL + 24);
  v6 = (PSLIST_ENTRY)(48 * a1 - 0x58000000000LL);
  v7 = *((_QWORD *)&v6[2].Next + 1);
  ListEntry = v6;
  if ( (v5 & 0x4000000000000000LL) != 0 )
  {
    if ( (v7 & 0x10000000000000LL) == 0 )
      goto LABEL_3;
LABEL_13:
    MiClearPfnImageVerified(v6, 12LL);
    MiClearFileOnlyPfn(v6);
    return;
  }
  if ( (v7 & 0x10000000000000LL) != 0 )
    goto LABEL_13;
LABEL_3:
  v8 = 0;
  v9 = *(_QWORD *)(qword_140388AF0 + 8 * ((v7 >> 40) & 0x3FF));
  if ( (a2 & 1) != 0 )
  {
    if ( (MiFlags & 0x80u) != 0
      && (BYTE3(v6[2].Next) & 0x40) == 0
      && (++dword_140388C10 & MmPageValidationFrequency) == 0 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v10 = v2 / 48;
        v11 = MiMapPageInHyperSpaceWorker(v2 / 48, &v76, 0x80000000LL);
        if ( KeCheckForZeroPage(v11) )
          MiPageNotZero(v11, v10);
        MiUnmapPageInHyperSpaceWorker(v11, v76, 0x80000000LL);
        v4 = a1;
      }
    }
    v77 = 0;
    v12 = 2112LL;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      v13 = BYTE2(v6[2].Next);
      *((_QWORD *)&v6[1].Next + 1) = v5 & 0xBFFFFFFFFFFFFFFFuLL;
      BYTE2(v6[2].Next) = v13 & 0xF8 | 5;
      BYTE3(v6[2].Next) |= 0x10u;
      MiInsertPageInList(v6, 256LL);
      return;
    }
    v8 = 1;
    v77 = 1;
    v12 = 2176LL;
  }
  v72 = (volatile signed __int64 *)(v12 + v9);
  MiClearPfnImageVerified(v6, 12LL);
  *((_QWORD *)&v6[1].Next + 1) &= ~0x4000000000000000uLL;
  _InterlockedOr(v61, 0);
  v14 = *((_QWORD *)&v6[2].Next + 1);
  v15 = BYTE3(v6[2].Next);
  *((_QWORD *)&v6[1].Next + 1) ^= (*((_QWORD *)&v6[1].Next + 1) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v15 &= 0xF8u;
  BYTE3(v6[2].Next) = v15;
  *((_QWORD *)&v6->Next + 1) |= 0x8000000000000000uLL;
  v16 = v14 & 0xFE3FFFFFFFFFFFFFuLL;
  *((_QWORD *)&v6[2].Next + 1) = v16;
  if ( (v15 & 0x40) != 0 )
  {
    MiInsertPageInList(v6, 32LL);
    return;
  }
  v17 = a2 & 0x400;
  v65 = v17;
  v18 = dword_140388540 & v4 | (((v16 >> 36) & 3) << byte_140388502) | (v16 >> 58 << byte_140388501);
  v64 = v18;
  Next = v6[1].Next;
  v20 = (v8 ^ BYTE2(v6[2].Next)) & 7;
  v71 = *(_QWORD *)(v9 + 16) + 8256 * ((unsigned __int64)v18 >> byte_140388501);
  BYTE2(v6[2].Next) ^= v20;
  v62 = v18;
  v6[1].Next = (_SLIST_ENTRY *)MiUpdatePageFileHighInPte(Next, -(__int64)(v17 != 0) & 0xFFFFFFFDLL);
  if ( (a2 & 0x40) != 0 )
    goto LABEL_51;
  if ( v8 == 1 )
  {
    *((_QWORD *)&v6[2].Next + 1) &= ~0x200000000000000uLL;
    BYTE2(v6[2].Next) &= 0xC7u;
    BYTE3(v6[2].Next) &= ~0x20u;
  }
  if ( (a2 & 0x200) == 0 )
  {
    if ( (unsigned int)MiCoalesceFreePages(v4) == 1 )
      return;
    v22 = v62;
    v23 = 1024;
  }
  v24 = v64;
  if ( v17 )
  {
LABEL_52:
    v43 = _InterlockedIncrement64((volatile signed __int64 *)(v9 + 5952));
    if ( v43 <= 0x420 )
    {
      switch ( v43 )
      {
        case 0xA0uLL:
          v44 = 4840LL;
LABEL_63:
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4800);
          v46 = (struct _KEVENT *)(v44 + v9);
          KxAcquireQueuedSpinLock(&LockHandle);
          KeSetEvent(v46, 0, 0);
          ++v46[1].Header.LockNV;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          break;
        case 0x420uLL:
          v44 = 4872LL;
          goto LABEL_63;
        case 0x22uLL:
          v44 = 4808LL;
          goto LABEL_63;
      }
    }
    v47 = v43 - 1;
    if ( v47 == *(_QWORD *)(v9 + 4968) || v47 == *(_QWORD *)(v9 + 4976) )
      MiUpdateAvailableEvents(v9, v21);
    v48 = v71;
    _InterlockedIncrement64((volatile signed __int64 *)(v71 + 8LL * v8 + 8032));
    if ( (unsigned int)MmNumberOfChannels > 1 )
      _InterlockedIncrement64((volatile signed __int64 *)(v48
                                                        + 8
                                                        * (v8
                                                         + 2LL
                                                         * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v62 >> byte_140388502)))
                                                        + 8096));
    v49 = *(_QWORD *)(v9 + 8LL * v8 + 2048);
    v63.LockQueue.Next = 0LL;
    v50 = (_QWORD *)(v49 + 40 * v24);
    v63.LockQueue.Lock = v50 + 4;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v63, v50 + 4);
    }
    else if ( _InterlockedExchange64(v50 + 4, (__int64)&v63) )
    {
      KxWaitForLockOwnerShip(&v63);
    }
    v51 = v50[2];
    if ( v51 == 0xFFFFFFFFFLL )
    {
      v52 = (unsigned int)(1 << (v62 & dword_140388540 & 0x1F));
      _InterlockedOr(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 16 * (v8 + 516 * (v24 >> byte_140388501)) + 7944)
                                  + 4 * ((unsigned __int64)(v62 & dword_140388540) >> 5)),
        v52);
      *((_QWORD *)&v6[1].Next + 1) |= 0xFFFFFFFFFuLL;
      v6->Next = (_SLIST_ENTRY *)((unsigned __int64)v6->Next | 0xFFFFFFFFFLL);
      v50[2] = a1;
      v50[3] = a1;
    }
    else if ( v8 == 1 || v65 )
    {
      v57 = 48LL * v50[3];
      v52 = (*((_QWORD *)&v6[1].Next + 1) ^ (v57 / 48)) & 0xFFFFFFFFFLL;
      *((_QWORD *)&v6[1].Next + 1) ^= v52;
      *(_QWORD *)(v57 - 0x58000000000LL) ^= (a1 ^ *(_QWORD *)(v57 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
      v50[3] = a1;
      v6->Next = (_SLIST_ENTRY *)((unsigned __int64)v6->Next | 0xFFFFFFFFFLL);
    }
    else
    {
      v53 = 48 * v51;
      *((_QWORD *)&v6[1].Next + 1) |= 0xFFFFFFFFFuLL;
      v54 = *(_QWORD *)(48 * v51 - 0x58000000000LL + 24);
      v55 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v53 - 0x58000000000LL + 24),
              a1 & 0xFFFFFFFFFLL | v54 & 0xFFFFFFF000000000uLL,
              *(_QWORD *)(v53 - 0x58000000000LL + 24));
      if ( v54 != v55 )
      {
        do
        {
          v56 = v55;
          v55 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v53 - 0x58000000000LL + 24),
                  a1 & 0xFFFFFFFFFLL | v55 & 0xFFFFFFF000000000uLL,
                  v55);
        }
        while ( v56 != v55 );
      }
      v50[2] = a1;
      v52 = ((__int64)v6->Next ^ (v53 / 48)) & 0xFFFFFFFFFLL;
      v6->Next = (_SLIST_ENTRY *)((__int64)v6->Next ^ v52);
    }
    ++*v50;
    v58 = v72;
    v59 = _InterlockedIncrement64(v72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v63, retaddr);
LABEL_87:
      if ( v8 == 1 && !*(_BYTE *)(v9 + 5208) && v59 >= 8 && (unsigned int)MiSufficientAvailablePages(v9, 160LL) )
      {
        v63.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 4800);
        v63.LockQueue.Next = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v63, v9 + 4800);
        }
        else if ( _InterlockedExchange64((volatile __int64 *)(v9 + 4800), (__int64)&v63) )
        {
          KxWaitForLockOwnerShip(&v63);
        }
        if ( !*(_BYTE *)(v9 + 5208) && *v58 >= 8uLL )
        {
          *(_BYTE *)(v9 + 5208) = 1;
          KeSetEvent((PRKEVENT)(v9 + 5184), 0, 0);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v63);
      }
      return;
    }
    _m_prefetchw(&v63);
    v60 = v63.LockQueue.Next;
    if ( !v63.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)v63.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&v63) == &v63 )
        goto LABEL_87;
      v60 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v63, v52);
    }
    v63.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v60->Lock, 1uLL);
    goto LABEL_87;
  }
  v25 = *(_QWORD *)(v9 + 16) + 8256 * (v64 >> byte_140388501);
  v26 = v23;
  v27 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v22 >> byte_140388502));
  v69 = (_QWORD *)(v9 + 8LL * v77 + 4072);
  if ( !v77 )
    v26 = 1026;
  v21 = 16 * v64;
  v28 = *(_QWORD *)(v9 + 8LL * v77 + 4072);
  v70 = 16 * v64;
  if ( *(unsigned __int16 *)(v28 + 16 * v64) >= *(int *)(v9 + 5212) )
  {
    v8 = v77;
    goto LABEL_52;
  }
  v21 = 0LL;
  v29 = 0LL;
  v67 = ((unsigned int)~v26 >> 1) & 1;
  do
  {
    if ( (unsigned int)MmNumberOfChannels <= 1 )
      v30 = *(_QWORD *)(v25 + 8 * v29 + 8032);
    else
      v30 = *(_QWORD *)(v25 + 8 * (v29 + 2 * (v27 + 506LL)));
    v21 += v30;
    v66 = v21;
    if ( v23 )
    {
      v31 = 0LL;
      v32 = MiLargePageSizes;
      v33 = (_QWORD *)v25;
      v34 = 4 * v29;
      v35 = (__int64 *)(v25 + 8 * v29);
      v36 = 3LL;
      do
      {
        v37 = *v32;
        if ( v27 == 4 )
        {
          if ( v29 == 2 )
            v38 = *v33 + v33[1];
          else
            v38 = *v35;
        }
        else
        {
          v38 = *(_QWORD *)(v25 + 8 * (v34 + v27) + 48) + *(_QWORD *)(v25 + 8 * (v34 + v27) + 112);
        }
        ++v32;
        v33 += 2;
        v31 += v37 * v38;
        v35 += 2;
        v34 += 16LL;
        --v36;
      }
      while ( v36 );
      v23 = 1024;
      v21 = v31 + v66;
    }
    ++v29;
  }
  while ( v29 <= v67 );
  v6 = ListEntry;
  if ( v21 <= 0x40 )
  {
LABEL_50:
    v8 = v77;
LABEL_51:
    v24 = v64;
    goto LABEL_52;
  }
  v39 = *(_QWORD *)(v9 + 5952);
  if ( v39 < 0x420 )
  {
    v40 = (unsigned __int16 **)(v9 + 4072);
    v41 = 0LL;
    while ( 1 )
    {
      v42 = *v40;
      v21 = 0LL;
      if ( dword_140388544 )
        break;
LABEL_49:
      ++v41;
      ++v40;
      if ( v41 > 1 )
        goto LABEL_50;
    }
    while ( 1 )
    {
      v39 += *v42;
      if ( v39 >= 0x420 )
        break;
      v21 = (unsigned int)(v21 + 1);
      v42 += 8;
      if ( (unsigned int)v21 >= dword_140388544 )
        goto LABEL_49;
    }
  }
  v45 = BYTE2(ListEntry[2].Next);
  if ( (v45 & 7) != 5 )
    BYTE2(ListEntry[2].Next) = v45 & 0xF8 | 5;
  MiSetPfnSlist(v6, (unsigned int)v77);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*v69 + v70), v6);
}

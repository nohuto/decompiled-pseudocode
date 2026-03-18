/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x14002BD00
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140029290 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiWriteCompletePfn @ 0x14002F710 (MiWriteCompletePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiDeleteClusterSection @ 0x1400512C0 (MiDeleteClusterSection.c)
 *     MiReturnFreeZeroPage @ 0x1400517A8 (MiReturnFreeZeroPage.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiFreePageFileHashPfns @ 0x140080B6C (MiFreePageFileHashPfns.c)
 *     MiRelinkStandbyPage @ 0x1400810F8 (MiRelinkStandbyPage.c)
 *     MiDrainZeroLookasides @ 0x1400B1B20 (MiDrainZeroLookasides.c)
 *     MiDemoteLocalLargePage @ 0x1400E6D90 (MiDemoteLocalLargePage.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiClearNonPagedPtes @ 0x1401354A0 (MiClearNonPagedPtes.c)
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
 *     MiFreeSmallPageFromMdl @ 0x140136B00 (MiFreeSmallPageFromMdl.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     MiPurgeZeroList @ 0x14014F71C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x14014FB3C (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MiReturnPhysicalPoolPages @ 0x14017039C (MiReturnPhysicalPoolPages.c)
 *     MiReturnPfnList @ 0x14017C188 (MiReturnPfnList.c)
 *     MiLockAndInsertPageInFreeList @ 0x14017EC2C (MiLockAndInsertPageInFreeList.c)
 *     MiPurgeSubsection @ 0x14024FA3C (MiPurgeSubsection.c)
 *     MiEnableNewPfns @ 0x140252650 (MiEnableNewPfns.c)
 *     MiUnlinkBadPages @ 0x140252F68 (MiUnlinkBadPages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402551CC (MmFreeNonChargedSecurePages.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MiDeleteEnclavePage @ 0x140264440 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1402648EC (MiReturnEnclavePage.c)
 *     MiPruneStandbyPages @ 0x140266010 (MiPruneStandbyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x140267688 (MiDeleteDirectMapFixupPfn.c)
 *     MiDeleteClusterPage @ 0x1402694A8 (MiDeleteClusterPage.c)
 *     MiTransferPartitionPageRun @ 0x14026FE30 (MiTransferPartitionPageRun.c)
 *     MiScrubNode @ 0x1402707F0 (MiScrubNode.c)
 *     MxCreateFreePfns @ 0x14089A028 (MxCreateFreePfns.c)
 *     MxSwapPages @ 0x14089B798 (MxSwapPages.c)
 *     MiComputeOptimalZeroPath @ 0x14089CFE8 (MiComputeOptimalZeroPath.c)
 *     MiCreateEnclaveRegions @ 0x14089D418 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     MiUpdateAvailableEvents @ 0x1401700A4 (MiUpdateAvailableEvents.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     KeSetPagePrivilege @ 0x14023FCB0 (KeSetPagePrivilege.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiClearFileOnlyPfn @ 0x14025D330 (MiClearFileOnlyPfn.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiSetPfnSlist @ 0x1402654E0 (MiSetPfnSlist.c)
 */

void __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  signed __int64 v2; // rbx
  ULONG_PTR v4; // r15
  __int64 v5; // r9
  PSLIST_ENTRY v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  char v9; // si
  __int64 v10; // r13
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // al
  unsigned __int64 v15; // rbx
  ULONG_PTR v16; // rbx
  char v17; // al
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  char v20; // al
  _SLIST_ENTRY *Next; // rcx
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // r9
  __int64 v25; // rsi
  int v26; // ecx
  __int64 v27; // r14
  _QWORD *v28; // rax
  bool v29; // zf
  unsigned __int64 v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rbp
  __int64 *v35; // r11
  __int64 v36; // rbx
  __int64 *v37; // r10
  _QWORD *v38; // r8
  __int64 v39; // r12
  __int64 v40; // r15
  __int64 v41; // rax
  unsigned __int64 v42; // r8
  unsigned __int16 **v43; // r10
  __int64 v44; // r11
  unsigned __int16 *v45; // rcx
  char v46; // cl
  unsigned __int64 v47; // rsi
  __int64 v48; // rax
  struct _KEVENT *v49; // rbx
  unsigned __int64 v50; // rsi
  __int64 v51; // r8
  __int64 v52; // rcx
  _QWORD *v53; // rbx
  volatile __int64 *v54; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // r8
  __int64 v61; // r11
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // rcx
  volatile signed __int64 *v65; // rbx
  unsigned __int64 v66; // rbp
  _KSPIN_LOCK_QUEUE *volatile v67; // rax
  struct _KPRCB *v68; // rcx
  _DWORD *v69; // rdx
  int v70; // eax
  signed __int32 v71[8]; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 v72; // [rsp+30h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE v73; // [rsp+38h] [rbp-C0h] BYREF
  int v74; // [rsp+50h] [rbp-A8h]
  __int64 v75; // [rsp+58h] [rbp-A0h]
  __int64 v76; // [rsp+60h] [rbp-98h]
  PSLIST_ENTRY ListEntry; // [rsp+68h] [rbp-90h]
  _QWORD *v78; // [rsp+70h] [rbp-88h]
  __int64 v79; // [rsp+78h] [rbp-80h]
  __int64 v80; // [rsp+80h] [rbp-78h]
  volatile signed __int64 *v81; // [rsp+88h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-68h] BYREF
  char v83[24]; // [rsp+A8h] [rbp-50h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+0h]
  int v86; // [rsp+110h] [rbp+18h]
  unsigned int v87; // [rsp+118h] [rbp+20h]

  v2 = 48 * BugCheckParameter2;
  v4 = BugCheckParameter2;
  v5 = *(_QWORD *)(48 * BugCheckParameter2 - 0x58000000000LL + 24);
  v6 = (PSLIST_ENTRY)(48 * BugCheckParameter2 - 0x58000000000LL);
  v7 = *((_QWORD *)&v6[2].Next + 1);
  ListEntry = v6;
  if ( (v5 & 0x4000000000000000LL) == 0 )
  {
    v8 = v7;
    if ( (v7 & 0x10000000000000LL) == 0 )
      goto LABEL_5;
LABEL_107:
    MiClearPfnImageVerified((ULONG_PTR)v6);
    MiClearFileOnlyPfn(v6);
    return;
  }
  if ( (v7 & 0x10000000000000LL) != 0 )
    goto LABEL_107;
  v8 = v7;
LABEL_5:
  v9 = 0;
  v10 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v7 >> 40) & 0x3FF));
  if ( (a2 & 1) != 0 )
  {
    if ( (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(v4);
      v8 = *((_QWORD *)&v6[2].Next + 1);
    }
    v11 = 0;
    v86 = 0;
    v12 = 2176LL;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      v13 = 256LL;
      v14 = BYTE2(v6[2].Next) & 0xFD;
      *((_QWORD *)&v6[1].Next + 1) = v5 & 0xBFFFFFFFFFFFFFFFuLL;
      BYTE2(v6[2].Next) = v14 | 5;
      BYTE3(v6[2].Next) |= 0x10u;
LABEL_12:
      MiInsertPageInList(v6, v13);
      return;
    }
    v12 = 2240LL;
    v11 = 1;
    v86 = 1;
    v9 = 1;
  }
  v81 = (volatile signed __int64 *)(v12 + v10);
  if ( ((v8 >> 54) & 7) == 3 )
  {
    if ( (unsigned int)MiGetPagePrivilege((ULONG_PTR)v6) )
    {
      v15 = (__int64)((unsigned __int128)(v2 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
      v16 = (v15 >> 63) + v15;
      if ( (int)KeSetPagePrivilege(v16, v83, 16LL) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, v16, 0LL, 0LL);
    }
    *((_QWORD *)&v6[2].Next + 1) &= 0xFE3FFFFFFFFFFFFFuLL;
  }
  *((_QWORD *)&v6[1].Next + 1) &= ~0x4000000000000000uLL;
  _InterlockedOr(v71, 0);
  v17 = BYTE3(v6[2].Next);
  *((_QWORD *)&v6[1].Next + 1) ^= (*((_QWORD *)&v6[1].Next + 1) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v17 &= 0xF8u;
  BYTE3(v6[2].Next) = v17;
  *((_QWORD *)&v6->Next + 1) |= 0x8000000000000000uLL;
  v18 = (unsigned __int64)*(&v6[2].Next + 1) & 0xFE3FFFFFFFFFFFFFuLL;
  *((_QWORD *)&v6[2].Next + 1) = v18;
  if ( (v17 & 0x40) != 0 )
  {
    v13 = 32LL;
    goto LABEL_12;
  }
  v19 = dword_1403CB6D8 & (unsigned int)v4 | (((v18 >> 36) & 3) << byte_1403CB69A) | ((unsigned __int16)(v18 >> 58) << byte_1403CB699);
  v80 = *(_QWORD *)(v10 + 16) + 1984 * (v19 >> byte_1403CB699);
  v20 = BYTE2(v6[2].Next) & 0xF8;
  v87 = dword_1403CB6D8 & v4 | (((v18 >> 36) & 3) << byte_1403CB69A) | (v18 >> 58 << byte_1403CB699);
  v72 = v19;
  BYTE2(v6[2].Next) = v9 | v20;
  Next = v6[1].Next;
  v74 = a2 & 0x400;
  v6[1].Next = (_SLIST_ENTRY *)MiUpdatePageFileHighInPte(Next, -(__int64)(v74 != 0) & 0xFFFFFFFDLL);
  if ( (a2 & 0x40) != 0 )
    goto LABEL_55;
  if ( v11 == 1 )
  {
    *((_QWORD *)&v6[2].Next + 1) &= ~0x200000000000000uLL;
    BYTE2(v6[2].Next) &= 0xC7u;
    BYTE3(v6[2].Next) &= ~0x20u;
  }
  if ( (a2 & 0x200) == 0 )
  {
    if ( (unsigned int)MiCoalesceFreePages(v4) == 1 )
      return;
    v23 = v87;
  }
  if ( (a2 & 0x400) != 0 )
  {
LABEL_55:
    v30 = v19;
    goto LABEL_56;
  }
  v25 = *(_QWORD *)(v10 + 16) + 1984 * (v19 >> byte_1403CB699);
  v26 = 4096;
  v27 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v23 >> byte_1403CB69A);
  v28 = (_QWORD *)(v10 + 8LL * v11 + 4136);
  v29 = v11 == 0;
  v78 = v28;
  v30 = v19;
  if ( v29 )
    v26 = 4098;
  v31 = *v28;
  v22 = 16 * v19;
  v79 = 16 * v19;
  if ( *(unsigned __int16 *)(16 * v19 + v31) >= *(int *)(v10 + 6300) )
  {
LABEL_56:
    v47 = _InterlockedIncrement64((volatile signed __int64 *)(v10 + 7040));
    if ( v47 <= 0x420 )
    {
      switch ( v47 )
      {
        case 0xA0uLL:
          v48 = 4904LL;
LABEL_63:
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 4864);
          v49 = (struct _KEVENT *)(v48 + v10);
          KxAcquireQueuedSpinLock(&LockHandle, v10 + 4864);
          KeSetEvent(v49, 0, 0);
          ++v49[1].Header.LockNV;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          break;
        case 0x420uLL:
          v48 = 4936LL;
          goto LABEL_63;
        case 0x22uLL:
          v48 = 4872LL;
          goto LABEL_63;
      }
    }
    v50 = v47 - 1;
    if ( v50 == *(_QWORD *)(v10 + 6120) || v50 == *(_QWORD *)(v10 + 6128) )
      MiUpdateAvailableEvents(v10, v22);
    v51 = v80;
    _InterlockedIncrement64((volatile signed __int64 *)(v80 + 8LL * v86 + 1760));
    if ( (unsigned int)MmNumberOfChannels > 1 )
      _InterlockedIncrement64((volatile signed __int64 *)(v51
                                                        + 8
                                                        * (v86
                                                         + 2LL
                                                         * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v87 >> byte_1403CB69A)))
                                                        + 1824));
    v52 = *(_QWORD *)(v10 + 8LL * v86 + 2112);
    v73.LockQueue.Next = 0LL;
    v53 = (_QWORD *)(v52 + 40 * v30);
    v54 = v53 + 4;
    v73.LockQueue.Lock = v53 + 4;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v57 = SchedulerAssist[5];
        SchedulerAssist[5] = v57 + 1;
        if ( v57 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v73, v54);
    }
    else if ( _InterlockedExchange64(v54, (__int64)&v73) )
    {
      KxWaitForLockOwnerShip(&v73);
    }
    v58 = v53[2];
    if ( v58 == 0xFFFFFFFFFLL )
    {
      v24 = *(_QWORD *)(v10 + 16) + 1984 * (v30 >> byte_1403CB699) + 16 * (v86 + 104LL);
      v59 = (unsigned int)(1 << (v87 & dword_1403CB6D8 & 0x1F));
      v60 = (unsigned __int64)(v87 & dword_1403CB6D8) >> 5;
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v24 + 8) + 4 * v60), v59);
      *((_QWORD *)&v6[1].Next + 1) |= 0xFFFFFFFFFuLL;
      v6->Next = (_SLIST_ENTRY *)((unsigned __int64)v6->Next | 0xFFFFFFFFFLL);
      v53[2] = v4;
      v53[3] = v4;
    }
    else if ( v86 == 1 || v74 )
    {
      v64 = 48LL * v53[3];
      v60 = v64 - 0x58000000000LL;
      v59 = v64 / 48;
      *((_QWORD *)&v6[1].Next + 1) ^= ((v64 / 48) ^ *((_QWORD *)&v6[1].Next + 1)) & 0xFFFFFFFFFLL;
      *(_QWORD *)(v64 - 0x58000000000LL) ^= (v4 ^ *(_QWORD *)(v64 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
      v53[3] = v4;
      v6->Next = (_SLIST_ENTRY *)((unsigned __int64)v6->Next | 0xFFFFFFFFFLL);
    }
    else
    {
      v61 = 48 * v58;
      *((_QWORD *)&v6[1].Next + 1) |= 0xFFFFFFFFFuLL;
      v24 = v61 - 0x58000000000LL;
      v62 = *(_QWORD *)(48 * v58 - 0x58000000000LL + 24);
      v60 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v61 - 0x58000000000LL + 24),
              v4 & 0xFFFFFFFFFLL | v62 & 0xFFFFFFF000000000uLL,
              *(_QWORD *)(v61 - 0x58000000000LL + 24));
      if ( v62 != v60 )
      {
        do
        {
          v63 = v60;
          v60 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v24 + 24),
                  v4 & 0xFFFFFFFFFLL | v60 & 0xFFFFFFF000000000uLL,
                  v60);
        }
        while ( v63 != v60 );
      }
      v53[2] = v4;
      v59 = ((__int64)v6->Next ^ (v61 / 48)) & 0xFFFFFFFFFLL;
      v6->Next = (_SLIST_ENTRY *)((__int64)v6->Next ^ v59);
    }
    ++*v53;
    v65 = v81;
    v66 = _InterlockedIncrement64(v81);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v73, retaddr, v60, v24);
      goto LABEL_93;
    }
    _m_prefetchw(&v73);
    v67 = v73.LockQueue.Next;
    if ( !v73.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)v73.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&v73) == &v73 )
        goto LABEL_93;
      v67 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v73, v59, v60, v24);
    }
    v73.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v67->Lock, 1uLL);
LABEL_93:
    v68 = KeGetCurrentPrcb();
    v69 = v68->SchedulerAssist;
    if ( v69 )
    {
      if ( v68->NestingLevel <= 1u )
      {
        v70 = v69[5] - 1;
        v69[5] = v70;
        if ( !v70 && !*((_BYTE *)v69 + 25) && !*((_BYTE *)v69 + 27) )
          KiPerformUnboostKick(v68);
      }
    }
    if ( v86 == 1 && !*(_BYTE *)(v10 + 6296) && v66 >= 8 && (unsigned int)MiSufficientAvailablePages(v10, 160LL) )
    {
      v73.LockQueue.Next = 0LL;
      v73.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 4864);
      KxAcquireQueuedSpinLock(&v73, v10 + 4864);
      if ( !*(_BYTE *)(v10 + 6296) && *v65 >= 8uLL )
      {
        *(_BYTE *)(v10 + 6296) = 1;
        KeSetEvent((PRKEVENT)(v10 + 6272), 0, 0);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73);
    }
    return;
  }
  v32 = 0LL;
  v24 = 0LL;
  v76 = ((unsigned int)~v26 >> 1) & 1;
  do
  {
    v22 = v27;
    if ( (unsigned int)MmNumberOfChannels <= 1 )
      v33 = *(_QWORD *)(v25 + 8 * v24 + 1760);
    else
      v33 = *(_QWORD *)(v25 + 8 * (v24 + 2 * v27) + 1824);
    v34 = 0LL;
    v75 = v32 + v33;
    v35 = MiLargePageSizes;
    v36 = 0LL;
    v37 = (__int64 *)(v25 + 8 * v24);
    v38 = (_QWORD *)v25;
    v39 = 3LL;
    do
    {
      v40 = *v35;
      if ( (_DWORD)v27 == 4 )
      {
        if ( v24 == 2 )
        {
          v22 = v27;
          v41 = *v38 + v38[1];
        }
        else
        {
          v41 = *v37;
          v22 = v27;
        }
      }
      else
      {
        v41 = *(_QWORD *)(v25 + 8 * (v22 + v36 + 4 * v24) + 16) + *(_QWORD *)(v25 + 8 * (v22 + v36 + 4 * v24) + 80);
      }
      ++v35;
      v38 += 34;
      v34 += v40 * v41;
      v36 += 34LL;
      v37 += 34;
      --v39;
    }
    while ( v39 );
    ++v24;
    v32 = v34 + v75;
  }
  while ( v24 <= v76 );
  v6 = ListEntry;
  if ( v32 <= 0x40 )
  {
    v4 = BugCheckParameter2;
    v30 = v72;
    goto LABEL_56;
  }
  v42 = *(_QWORD *)(v10 + 7040);
  if ( v42 < 0x420 )
  {
    v24 = (unsigned int)dword_1403CB6DC;
    v43 = (unsigned __int16 **)(v10 + 4136);
    v44 = 0LL;
    while ( 1 )
    {
      v45 = *v43;
      v22 = 0LL;
      if ( dword_1403CB6DC )
        break;
LABEL_49:
      ++v44;
      ++v43;
      if ( v44 > 1 )
      {
        v4 = BugCheckParameter2;
        v30 = v72;
        goto LABEL_56;
      }
    }
    while ( 1 )
    {
      v42 += *v45;
      if ( v42 >= 0x420 )
        break;
      v22 = (unsigned int)(v22 + 1);
      v45 += 8;
      if ( (unsigned int)v22 >= dword_1403CB6DC )
        goto LABEL_49;
    }
  }
  v46 = BYTE2(ListEntry[2].Next);
  if ( (v46 & 7) != 5 )
    BYTE2(ListEntry[2].Next) = v46 & 0xF8 | 5;
  MiSetPfnSlist(v6, (unsigned int)v86);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*v78 + v79), v6);
}

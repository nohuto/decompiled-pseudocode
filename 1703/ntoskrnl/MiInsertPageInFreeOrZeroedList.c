/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x1400C6A20
 * Callers:
 *     MiDeleteClusterPage @ 0x14000D020 (MiDeleteClusterPage.c)
 *     MiDrainZeroLookasides @ 0x14001C448 (MiDrainZeroLookasides.c)
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MiDeleteTransitionPte @ 0x14007A23C (MiDeleteTransitionPte.c)
 *     MiFreePageFileHashPfns @ 0x140083F7C (MiFreePageFileHashPfns.c)
 *     MiFreeSmallPageFromMdl @ 0x1400B5540 (MiFreeSmallPageFromMdl.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x1400C58B0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiZeroSinglePage @ 0x1400C6290 (MiZeroSinglePage.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiWriteCompletePfn @ 0x1400CB520 (MiWriteCompletePfn.c)
 *     MiRelinkStandbyPage @ 0x1400CBAFC (MiRelinkStandbyPage.c)
 *     MiWsleFree @ 0x1400D6AB0 (MiWsleFree.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x14010A950 (MiDeleteClusterSection.c)
 *     MiReturnFreeZeroPage @ 0x14010AE0C (MiReturnFreeZeroPage.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiReturnPhysicalPoolPages @ 0x140125E80 (MiReturnPhysicalPoolPages.c)
 *     MiFreeLargePageMemory @ 0x140126770 (MiFreeLargePageMemory.c)
 *     MiPurgeZeroList @ 0x140138B04 (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140138E54 (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015976C (MiLockAndInsertPageInFreeList.c)
 *     MiReturnPfnList @ 0x14015B5D8 (MiReturnPfnList.c)
 *     MiPurgeSubsection @ 0x14020A93C (MiPurgeSubsection.c)
 *     MiEnableNewPfns @ 0x14020D3DC (MiEnableNewPfns.c)
 *     MiMoveEccPagesToFreeList @ 0x14020D91C (MiMoveEccPagesToFreeList.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 *     MiDeleteEnclavePage @ 0x14021C7C0 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x14021CC10 (MiReturnEnclavePage.c)
 *     MiTransferPartitionPageRun @ 0x14021EA0C (MiTransferPartitionPageRun.c)
 *     MiPruneStandbyPages @ 0x14021FA24 (MiPruneStandbyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x140220B00 (MiDeleteDirectMapFixupPfn.c)
 *     MiScrubNode @ 0x140226610 (MiScrubNode.c)
 *     MxCreateFreePfns @ 0x140800A20 (MxCreateFreePfns.c)
 *     MxSwapPages @ 0x140802304 (MxSwapPages.c)
 *     MiComputeOptimalZeroPath @ 0x1408043E0 (MiComputeOptimalZeroPath.c)
 *     MiCreateEnclaveRegions @ 0x14080480C (MiCreateEnclaveRegions.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KiSignalThread @ 0x1400E2F70 (KiSignalThread.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x1401548AC (MiUpdateAvailableEvents.c)
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 *     MiSwizzleInvalidPte @ 0x14017D094 (MiSwizzleInvalidPte.c)
 *     KeCheckForZeroPage @ 0x140185210 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x1402183C4 (MiClearFileOnlyPfn.c)
 *     MiPageNotZero @ 0x14021F048 (MiPageNotZero.c)
 *     MiSetPfnSlist @ 0x14021F374 (MiSetPfnSlist.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

PSLIST_ENTRY __fastcall MiInsertPageInFreeOrZeroedList(__int64 a1, __int16 a2)
{
  __int64 v3; // r9
  __int64 v4; // r13
  __int64 v5; // r8
  PSLIST_ENTRY v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi
  ULONG_PTR v9; // rbx
  ULONG_PTR v10; // r15
  int v11; // r12d
  PSLIST_ENTRY result; // rax
  char v13; // al
  __int64 v14; // r15
  char v15; // al
  unsigned __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r10
  char v21; // al
  __int64 Next; // rax
  _BOOL8 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int16 v26; // r8
  __int64 v27; // r13
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // r11
  int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // r14
  __int64 *v34; // r8
  _QWORD *v35; // rdx
  __int64 v36; // r10
  __int64 v37; // r12
  __int64 v38; // r15
  __int64 v39; // rax
  char v40; // cl
  unsigned __int64 v41; // r14
  int v42; // eax
  __int64 v43; // rbx
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rbx
  _QWORD *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r11
  __int64 v51; // rdx
  signed __int64 v52; // r8
  signed __int64 v53; // rcx
  __int64 v54; // rcx
  volatile signed __int64 *v55; // rdi
  unsigned __int64 v56; // rbx
  _QWORD *v57; // rdx
  int v58; // ebx
  struct _KPRCB *CurrentPrcb; // r10
  int v60; // eax
  _QWORD *v61; // r12
  __int64 v62; // rbx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  char v65; // al
  bool v66; // zf
  int v67; // r14d
  __int64 v68; // rdi
  _QWORD *v69; // r14
  struct _KPRCB *v70; // r13
  _KTHREAD *v71; // r15
  unsigned __int8 v72; // al
  int v73; // ecx
  __int64 *v74; // rdx
  _QWORD *v75; // rcx
  _QWORD *v76; // r12
  __int64 v77; // rdi
  char v78; // al
  __int64 v79; // r14
  __int64 v80; // rbx
  __int64 v81; // r8
  __int64 v82; // rbx
  _QWORD *v83; // r14
  struct _KPRCB *v84; // r13
  _KTHREAD *CurrentThread; // r15
  unsigned __int8 IsThreadRunning; // al
  int v87; // ecx
  __int64 *v88; // rdx
  signed __int32 v89[8]; // [rsp+0h] [rbp-99h] BYREF
  _SLIST_ENTRY *v90; // [rsp+30h] [rbp-69h] BYREF
  volatile signed __int64 *v91; // [rsp+38h] [rbp-61h]
  unsigned int v92; // [rsp+48h] [rbp-51h]
  int v93; // [rsp+4Ch] [rbp-4Dh]
  int v94; // [rsp+50h] [rbp-49h] BYREF
  int v95; // [rsp+54h] [rbp-45h] BYREF
  unsigned __int64 v96; // [rsp+58h] [rbp-41h]
  unsigned __int64 v97; // [rsp+60h] [rbp-39h]
  unsigned __int64 v98; // [rsp+68h] [rbp-31h]
  volatile signed __int64 *v99; // [rsp+70h] [rbp-29h]
  __int64 v100; // [rsp+78h] [rbp-21h]
  PSLIST_ENTRY ListEntry; // [rsp+80h] [rbp-19h]
  __int64 *v102; // [rsp+88h] [rbp-11h]
  __int64 v103; // [rsp+90h] [rbp-9h]
  unsigned __int64 v104; // [rsp+98h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp+7h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  struct _KPRCB *v108; // [rsp+100h] [rbp+67h]
  unsigned __int8 v109; // [rsp+110h] [rbp+77h] BYREF
  __int64 CurrentIrql; // [rsp+118h] [rbp+7Fh]

  v3 = 48 * a1;
  v4 = a1;
  v5 = *(_QWORD *)(48 * a1 - 0x58000000000LL + 24);
  v6 = (PSLIST_ENTRY)(48 * a1 - 0x58000000000LL);
  v7 = *((_QWORD *)&v6[2].Next + 1);
  ListEntry = v6;
  if ( (v5 & 0x4000000000000000LL) == 0 )
  {
    if ( (v7 & 0x10000000000000LL) == 0 )
      goto LABEL_3;
LABEL_13:
    MiClearPfnImageVerified(v6, 12LL, v5);
    return (PSLIST_ENTRY)MiClearFileOnlyPfn(v6);
  }
  if ( (v7 & 0x10000000000000LL) != 0 )
    goto LABEL_13;
LABEL_3:
  v8 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v7 >> 40) & 0x3FF));
  if ( (a2 & 1) != 0 )
  {
    v99 = (volatile signed __int64 *)(v8 + 1984);
    if ( (MiFlags & 0x80u) != 0
      && (BYTE3(v6[2].Next) & 0x40) == 0
      && (++dword_14036CA18 & MmPageValidationFrequency) == 0 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v9 = v3 / 48;
        v10 = MiMapPageInHyperSpaceWorker(v3 / 48, &v109, 0x80000000LL);
        if ( KeCheckForZeroPage(v10) )
          MiPageNotZero(v10, v9);
        MiUnmapPageInHyperSpaceWorker(v10, v109, 0x80000000LL);
      }
    }
    v11 = 0;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      v13 = BYTE2(v6[2].Next);
      *((_QWORD *)&v6[1].Next + 1) = v5 & 0xBFFFFFFFFFFFFFFFuLL;
      BYTE2(v6[2].Next) = v13 & 0xF8 | 5;
      BYTE3(v6[2].Next) |= 0x10u;
      return (PSLIST_ENTRY)MiInsertPageInList(48 * a1 - 0x58000000000LL, 256LL);
    }
    v11 = 1;
    v99 = (volatile signed __int64 *)(v8 + 2048);
  }
  LODWORD(CurrentIrql) = v11;
  MiClearPfnImageVerified(v6, 12LL, v5);
  *((_QWORD *)&v6[1].Next + 1) &= ~0x4000000000000000uLL;
  _InterlockedOr(v89, 0);
  v14 = *((_QWORD *)&v6[2].Next + 1);
  v15 = BYTE3(v6[2].Next);
  *((_QWORD *)&v6[1].Next + 1) ^= (*((_QWORD *)&v6[1].Next + 1) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v15 &= 0xF8u;
  BYTE3(v6[2].Next) = v15;
  *((_QWORD *)&v6->Next + 1) |= 0x8000000000000000uLL;
  v16 = v14 & 0xFE3FFFFFFFFFFFFFuLL;
  *((_QWORD *)&v6[2].Next + 1) = v16;
  if ( (v15 & 0x40) != 0 )
    return (PSLIST_ENTRY)MiInsertPageInList(v6, 32LL);
  v17 = (unsigned __int8)byte_14036C1B9;
  v18 = (unsigned __int8)byte_14036C1BA;
  v19 = dword_14036C1F8 & (unsigned int)v4 | (((v16 >> 36) & 3) << byte_14036C1BA) | ((unsigned __int8)((v16 >> 58) & 0x3F) << byte_14036C1B9);
  v20 = (unsigned int)v19;
  v104 = *(_QWORD *)(v8 + 48) + 2184 * ((unsigned __int64)(unsigned int)v19 >> byte_14036C1B9);
  v21 = v11 ^ BYTE2(v6[2].Next);
  v97 = v19;
  v98 = (unsigned int)v19;
  BYTE2(v6[2].Next) ^= v21 & 7;
  Next = (__int64)v6[1].Next;
  v23 = (a2 & 0x400) != 0;
  v93 = a2 & 0x400;
  if ( Next )
    Next = MiReverseSwizzleInvalidPte(Next, v23, v17, v18);
  v24 = ((unsigned __int16)Next ^ (32 * v23)) & 0x3E0 ^ Next;
  if ( v24 )
    v24 = MiSwizzleInvalidPte(v24);
  v6[1].Next = (_SLIST_ENTRY *)v24;
  if ( (a2 & 0x40) == 0 )
  {
    if ( v11 == 1 )
    {
      *((_QWORD *)&v6[2].Next + 1) &= ~0x200000000000000uLL;
      BYTE2(v6[2].Next) &= 0xC7u;
      BYTE3(v6[2].Next) &= ~0x20u;
    }
    if ( (a2 & 0x200) == 0 )
    {
      result = (PSLIST_ENTRY)MiCoalesceFreePages(v4);
      if ( (_DWORD)result == 1 )
        return result;
      v18 = (unsigned __int8)byte_14036C1BA;
      LOBYTE(v17) = byte_14036C1B9;
      v20 = v98;
    }
    if ( (a2 & 0x400) == 0 )
    {
      v25 = *(_QWORD *)(v8 + 48) + 2184 * (v20 >> v17);
      v26 = 1024;
      v27 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v19 >> v18);
      if ( !v11 )
        v26 = 1026;
      v102 = (__int64 *)(v8 + 8 * (v11 + 493LL));
      v28 = *v102;
      v103 = 16 * v20;
      if ( *(unsigned __int16 *)(16 * v20 + v28) < *(int *)(v8 + 5084) )
      {
        v29 = 0LL;
        v30 = 0LL;
        v31 = ((unsigned __int8)~(_BYTE)v26 >> 1) & 1;
        v32 = v26 & 0x400;
        v100 = v31;
        v92 = v32;
        do
        {
          if ( (unsigned int)MmNumberOfChannels <= 1 )
            v29 += *(_QWORD *)(v25 + 8 * v30 + 2008);
          else
            v29 += *(_QWORD *)(v25 + 8 * (v30 + 2 * v27) + 2072);
          v96 = v29;
          if ( (_DWORD)v32 )
          {
            v33 = 0LL;
            v34 = MiLargePageSizes;
            v35 = (_QWORD *)v25;
            v36 = 4 * v30;
            v18 = v25 + 8 * v30;
            v37 = 3LL;
            do
            {
              v38 = *v34;
              if ( (_DWORD)v27 == 4 )
              {
                if ( v30 == 2 )
                  v39 = *v35 + v35[1];
                else
                  v39 = *(_QWORD *)v18;
              }
              else
              {
                v39 = *(_QWORD *)(v25 + 8 * (v36 + v27) + 816) + *(_QWORD *)(v25 + 8 * (v36 + v27) + 880);
              }
              ++v34;
              v35 += 2;
              v33 += v38 * v39;
              v18 += 16LL;
              v36 += 16LL;
              --v37;
            }
            while ( v37 );
            v32 = v92;
            v29 = v33 + v96;
          }
          ++v30;
        }
        while ( v30 <= v100 );
        v6 = ListEntry;
        if ( v29 > 0x40 && *(_QWORD *)(v8 + 5760) >= 0x420uLL )
        {
          v40 = BYTE2(ListEntry[2].Next);
          if ( (v40 & 7) != 5 )
            BYTE2(ListEntry[2].Next) = v40 & 0xF8 | 5;
          MiSetPfnSlist(v6, (unsigned int)CurrentIrql, v32, v18);
          return RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*v102 + v103), v6);
        }
        v11 = CurrentIrql;
        LODWORD(v19) = v97;
      }
      v4 = a1;
    }
  }
  v41 = _InterlockedIncrement64((volatile signed __int64 *)(v8 + 5760));
  if ( v41 <= 0x420 )
  {
    switch ( v41 )
    {
      case 0xA0uLL:
        v42 = 1;
LABEL_61:
        v43 = 32LL * v42;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 4672);
        LockHandle.LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v8 + 4672));
        KeSetEvent((PRKEVENT)(v43 + v8 + 4680), 0, 0);
        ++*(_DWORD *)(v43 + v8 + 4704);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        break;
      case 0x420uLL:
        v42 = 2;
        goto LABEL_61;
      case 0x22uLL:
        v42 = 0;
        goto LABEL_61;
    }
  }
  v44 = v41 - 1;
  if ( v44 == *(_QWORD *)(v8 + 4840) || v44 == *(_QWORD *)(v8 + 4848) )
    MiUpdateAvailableEvents(v8);
  v45 = v104;
  _InterlockedIncrement64((volatile signed __int64 *)(v104 + 8LL * v11 + 2008));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(v45
                                                      + 8
                                                      * (v11
                                                       + 2LL
                                                       * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v19 >> byte_14036C1BA)))
                                                      + 2072));
  v46 = *(_QWORD *)(v8 + 8LL * v11 + 1920);
  v90 = 0LL;
  v47 = v46 + 40 * v98;
  v91 = (volatile signed __int64 *)(v47 + 32);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v90, v47 + 32);
  }
  else
  {
    v48 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v47 + 32), (__int64)&v90);
    if ( v48 )
      KxWaitForLockOwnerShip((__int64)&v90, v48);
  }
  v49 = *(_QWORD *)(v47 + 16);
  if ( v49 == 0xFFFFFFFFFLL )
  {
    *((_QWORD *)&v6[1].Next + 1) |= 0xFFFFFFFFFuLL;
    v6->Next = (_SLIST_ENTRY *)((unsigned __int64)v6->Next | 0xFFFFFFFFFLL);
    *(_QWORD *)(v47 + 16) = v4;
    *(_QWORD *)(v47 + 24) = v4;
  }
  else if ( v11 == 1 || v93 )
  {
    v54 = 48LL * *(_QWORD *)(v47 + 24);
    *((_QWORD *)&v6[1].Next + 1) ^= ((v54 / 48) ^ *((_QWORD *)&v6[1].Next + 1)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v54 - 0x58000000000LL) ^= (v4 ^ *(_QWORD *)(v54 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v47 + 24) = v4;
    v6->Next = (_SLIST_ENTRY *)((unsigned __int64)v6->Next | 0xFFFFFFFFFLL);
  }
  else
  {
    v50 = 48 * v49;
    *((_QWORD *)&v6[1].Next + 1) |= 0xFFFFFFFFFuLL;
    v51 = *(_QWORD *)(48 * v49 - 0x58000000000LL + 24);
    v52 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v50 - 0x58000000000LL + 24),
            v4 & 0xFFFFFFFFFLL | v51 & 0xFFFFFFF000000000uLL,
            *(_QWORD *)(v50 - 0x58000000000LL + 24));
    if ( v51 != v52 )
    {
      do
      {
        v53 = v52;
        v52 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v50 - 0x58000000000LL + 24),
                v4 & 0xFFFFFFFFFLL | v52 & 0xFFFFFFF000000000uLL,
                v52);
      }
      while ( v53 != v52 );
    }
    *(_QWORD *)(v47 + 16) = v4;
    v6->Next = (_SLIST_ENTRY *)((__int64)v6->Next ^ ((__int64)v6->Next ^ (v50 / 48)) & 0xFFFFFFFFFLL);
  }
  ++*(_QWORD *)v47;
  v55 = v99;
  v56 = _InterlockedIncrement64(v99);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v90);
    result = v90;
    if ( !v90 )
    {
      result = (PSLIST_ENTRY)_InterlockedCompareExchange64(v91, 0LL, (signed __int64)&v90);
      if ( result == (PSLIST_ENTRY)&v90 )
        goto LABEL_85;
      result = (PSLIST_ENTRY)KxWaitForLockChainValid(&v90);
    }
    v90 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&result->Next + 1, 1uLL);
    goto LABEL_85;
  }
  result = (PSLIST_ENTRY)KiReleaseQueuedSpinLockInstrumented(&v90, retaddr);
LABEL_85:
  if ( v11 != 1 || *(_BYTE *)(v8 + 5080) || v56 < 8 || *(_QWORD *)(v8 + 5760) < 0xA0uLL )
    return result;
  v91 = (volatile signed __int64 *)(v8 + 4672);
  v90 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v90, v8 + 4672);
  }
  else
  {
    v57 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v8 + 4672), (__int64)&v90);
    if ( v57 )
      KxWaitForLockOwnerShip((__int64)&v90, v57);
  }
  if ( *(_BYTE *)(v8 + 5080) || *v55 < 8uLL )
    goto LABEL_113;
  *(_BYTE *)(v8 + 5080) = 1;
  if ( (*(_BYTE *)(v8 + 5056) & 0x7F) != 0 )
  {
    v58 = 0;
LABEL_99:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v94 = 0;
    v108 = CurrentPrcb;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v8 + 5056), 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v94);
        while ( (*(_DWORD *)(v8 + 5056) & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)(v8 + 5056), 7u) );
      CurrentPrcb = v108;
    }
    v60 = *(_DWORD *)(v8 + 5060);
    *(_DWORD *)(v8 + 5060) = 1;
    if ( !v60 )
    {
      if ( v58 )
      {
        v75 = (_QWORD *)(v8 + 5064);
        v76 = *(_QWORD **)(v8 + 5064);
        if ( v76 == (_QWORD *)(v8 + 5064) )
        {
          v67 = (int)v108;
        }
        else
        {
          while ( 1 )
          {
            v77 = (__int64)v76;
            v76 = (_QWORD *)*v76;
            v78 = *(_BYTE *)(v77 + 16);
            if ( v78 == 1 )
            {
              v79 = *(unsigned __int16 *)(v77 + 18);
              v80 = *(_QWORD *)(v77 + 24);
              v95 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v80 + 64), 0LL) )
              {
                do
                  KeYieldProcessorEx(&v95);
                while ( *(_QWORD *)(v80 + 64) );
              }
              if ( *(_BYTE *)(v80 + 388) == 5 )
              {
                v81 = v79;
                v67 = (int)v108;
                KiSignalThread(v108, v80, v81, v77);
              }
              else
              {
                v67 = (int)v108;
              }
              *(_QWORD *)(v80 + 64) = 0LL;
              ++*(_BYTE *)(v77 + 17);
            }
            else
            {
              if ( v78 == 2 )
              {
                *(_BYTE *)(v77 + 17) = 5;
                v82 = *(_QWORD *)(v77 + 24);
                *(_QWORD *)v77 = 0LL;
                v83 = (_QWORD *)(v82 + 8);
                KeGetCurrentIrql();
                __writecr8(2uLL);
                v84 = KeGetCurrentPrcb();
                CurrentThread = v84->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(v84->CurrentThread);
                  EtwTraceEnqueueWork(CurrentThread, v77, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v82);
                if ( (_QWORD *)*v83 == v83
                  || *(_DWORD *)(v82 + 40) >= *(_DWORD *)(v82 + 44)
                  || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v82 && CurrentThread->WaitReason == 15
                  || !KiWakeQueueWaiter((__int64)v84, v82, v77) )
                {
                  v87 = *(_DWORD *)(v82 + 4);
                  *(_DWORD *)(v82 + 4) = v87 + 1;
                  v88 = *(__int64 **)(v82 + 32);
                  if ( *v88 != v82 + 24 )
                    __fastfail(3u);
                  *(_QWORD *)v77 = v82 + 24;
                  *(_QWORD *)(v77 + 8) = v88;
                  *v88 = v77;
                  *(_QWORD *)(v82 + 32) = v77;
                  if ( !v87 && (_QWORD *)*v83 != v83 )
                    KiWakeOtherQueueWaiters((__int64)v84, v82);
                }
                _InterlockedAnd((volatile signed __int32 *)v82, 0xFFFFFF7F);
              }
              else
              {
                KiTryUnwaitThread(CurrentPrcb, v77, 256LL, 0LL);
              }
              v67 = (int)v108;
            }
            v75 = (_QWORD *)(v8 + 5064);
            if ( v76 == (_QWORD *)(v8 + 5064) )
              break;
            CurrentPrcb = v108;
          }
        }
        v75[1] = v75;
        *v75 = v75;
        goto LABEL_112;
      }
      v61 = *(_QWORD **)(v8 + 5064);
      if ( v61 != (_QWORD *)(v8 + 5064) )
      {
        while ( 1 )
        {
          v62 = (__int64)v61;
          v61 = (_QWORD *)*v61;
          v63 = *(_QWORD *)v62;
          v64 = *(_QWORD **)(v62 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v62 + 8LL) != v62 || *v64 != v62 )
            __fastfail(3u);
          *v64 = v63;
          *(_QWORD *)(v63 + 8) = v64;
          v65 = *(_BYTE *)(v62 + 16);
          if ( v65 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v62, *(unsigned __int16 *)(v62 + 18), 0LL) )
            {
              v66 = (*(_DWORD *)(v8 + 5060))-- == 1;
              if ( v66 )
                break;
            }
          }
          else if ( v65 == 2 )
          {
            *(_BYTE *)(v62 + 17) = 5;
            v68 = *(_QWORD *)(v62 + 24);
            *(_QWORD *)v62 = 0LL;
            v69 = (_QWORD *)(v68 + 8);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v70 = KeGetCurrentPrcb();
            v71 = v70->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v72 = KeIsThreadRunning(v70->CurrentThread);
              EtwTraceEnqueueWork(v71, v62, v72);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v68);
            if ( (_QWORD *)*v69 == v69
              || *(_DWORD *)(v68 + 40) >= *(_DWORD *)(v68 + 44)
              || v71->Queue == (_DISPATCHER_HEADER *volatile)v68 && v71->WaitReason == 15
              || !KiWakeQueueWaiter((__int64)v70, v68, v62) )
            {
              v73 = *(_DWORD *)(v68 + 4);
              *(_DWORD *)(v68 + 4) = v73 + 1;
              v74 = *(__int64 **)(v68 + 32);
              if ( *v74 != v68 + 24 )
                __fastfail(3u);
              *(_QWORD *)v62 = v68 + 24;
              *(_QWORD *)(v62 + 8) = v74;
              *v74 = v62;
              *(_QWORD *)(v68 + 32) = v62;
              if ( !v73 && (_QWORD *)*v69 != v69 )
                KiWakeOtherQueueWaiters((__int64)v70, v68);
            }
            _InterlockedAnd((volatile signed __int32 *)v68, 0xFFFFFF7F);
            v66 = (*(_DWORD *)(v8 + 5060))-- == 1;
            if ( v66 )
              break;
          }
          else
          {
            KiTryUnwaitThread(CurrentPrcb, v62, 256LL, 0LL);
          }
          if ( v61 == (_QWORD *)(v8 + 5064) )
            break;
          CurrentPrcb = v108;
        }
      }
    }
    v67 = (int)v108;
LABEL_112:
    _InterlockedAnd((volatile signed __int32 *)(v8 + 5056), 0xFFFFFF7F);
    KiExitDispatcher(v67, 0, 1, 0, CurrentIrql);
    goto LABEL_113;
  }
  if ( *(_DWORD *)(v8 + 5060) != 1 )
  {
    v58 = 1;
    goto LABEL_99;
  }
LABEL_113:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return (PSLIST_ENTRY)KiReleaseQueuedSpinLockInstrumented(&v90, retaddr);
  _m_prefetchw(&v90);
  result = v90;
  if ( !v90 )
  {
    result = (PSLIST_ENTRY)_InterlockedCompareExchange64(v91, 0LL, (signed __int64)&v90);
    if ( result == (PSLIST_ENTRY)&v90 )
      return result;
    result = (PSLIST_ENTRY)KxWaitForLockChainValid(&v90);
  }
  v90 = 0LL;
  _InterlockedXor64((volatile signed __int64 *)&result->Next + 1, 1uLL);
  return result;
}

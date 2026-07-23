/*
 * XREFs of MiGetPage @ 0x140018200
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiTradeTransitionPage @ 0x140002F48 (MiTradeTransitionPage.c)
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiGetSystemPage @ 0x14004DEB4 (MiGetSystemPage.c)
 *     MiAllocateMdlPagesByLists @ 0x14005105C (MiAllocateMdlPagesByLists.c)
 *     MiBuildMdlForMappedFileFault @ 0x140056680 (MiBuildMdlForMappedFileFault.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiGetPageTablePages @ 0x1400716C0 (MiGetPageTablePages.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     MiGetPoolPages @ 0x1400F0860 (MiGetPoolPages.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013A78C (MiCreateUltraThreadContextHelper.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1401424AC (MiDoneWithThisPageGetAnother.c)
 *     MiGetFileHashPage @ 0x140155748 (MiGetFileHashPage.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x140255080 (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14025B7C8 (MiReplaceLockedPage.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 *     MiSplitDirectMapPage @ 0x14025E808 (MiSplitDirectMapPage.c)
 *     MiPruneStandbyPages @ 0x140266010 (MiPruneStandbyPages.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140512C1C (MiAllocateTopLevelPage.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1405BB3F0 (MiAllocateDriverPage.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 *     MxSwapPages @ 0x14089B798 (MxSwapPages.c)
 *     MiAllocateDummyPage @ 0x14089BBF0 (MiAllocateDummyPage.c)
 *     MiComputeOptimalZeroPath @ 0x14089CFE8 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x14089D23C (MiInitializeCacheFlushing.c)
 *     MiInitializeGapFrames @ 0x1408BAAB8 (MiInitializeGapFrames.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReturnFreeZeroPage @ 0x1400517A8 (MiReturnFreeZeroPage.c)
 *     MiPfnZeroingNeeded @ 0x140052058 (MiPfnZeroingNeeded.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetPerfectColorHeadPage @ 0x1400D4EA0 (MiGetPerfectColorHeadPage.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1400D508C (KxTryToAcquireQueuedSpinLock.c)
 *     MiReplenishPageSlist @ 0x1400D5110 (MiReplenishPageSlist.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400E6CC0 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiCheckZeroFreeRebalance @ 0x140121EB0 (MiCheckZeroFreeRebalance.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiCheckNodeChannelStandbyCount @ 0x140264EB4 (MiCheckNodeChannelStandbyCount.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 *     MiPageAvailable @ 0x14026B798 (MiPageAvailable.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r11d
  __int64 v4; // r14
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned __int8 *v7; // r8
  unsigned int v8; // r12d
  unsigned int v9; // r9d
  __int64 v10; // rdx
  int v11; // r10d
  BOOL v12; // r10d
  unsigned __int8 *v13; // rdx
  char *v14; // rcx
  int v15; // r9d
  __int64 v16; // r8
  int v17; // eax
  int *v18; // rbp
  int v19; // eax
  int v20; // edi
  __int64 v21; // r13
  __int64 v22; // rsi
  _SLIST_HEADER *v23; // rcx
  __int64 PerfectColorHeadPage; // rbx
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rbp
  __int16 i; // cx
  unsigned __int8 CurrentIrql; // si
  int v31; // edi
  int *v32; // rsi
  unsigned int v33; // ebp
  int j; // edi
  _SLIST_HEADER *v35; // rcx
  __int64 FreeOrZeroPageAnyColor; // rax
  __int64 v37; // rax
  int v38; // r10d
  int v39; // eax
  unsigned int v40; // ebp
  __int64 v41; // rax
  unsigned int v42; // r14d
  ULONG_PTR v43; // rdi
  int v44; // esi
  unsigned int v45; // esi
  unsigned __int8 *v47; // [rsp+30h] [rbp-98h]
  unsigned int v48; // [rsp+38h] [rbp-90h]
  int v49; // [rsp+3Ch] [rbp-8Ch]
  char v50; // [rsp+40h] [rbp-88h] BYREF
  char v51; // [rsp+41h] [rbp-87h] BYREF
  int v52; // [rsp+44h] [rbp-84h]
  unsigned int v53; // [rsp+48h] [rbp-80h]
  int v54; // [rsp+4Ch] [rbp-7Ch]
  int v55; // [rsp+50h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int8 *v57; // [rsp+70h] [rbp-58h]
  int *v58; // [rsp+78h] [rbp-50h]
  unsigned int v60; // [rsp+D8h] [rbp+10h]
  unsigned int v62; // [rsp+E8h] [rbp+20h]

  v60 = a2;
  v3 = MmNumberOfChannels;
  v49 = 1;
  v4 = a1;
  v52 = 0;
  v5 = a2 >> byte_1403CB699;
  v6 = a3;
  v7 = 0LL;
  v53 = a2 >> byte_1403CB699;
  v48 = a2 >> byte_1403CB699;
  v62 = 0;
  v8 = a2;
  v9 = a2 >> byte_1403CB699;
  v55 = MmNumberOfChannels;
LABEL_2:
  v47 = 0LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v4 + 16) + 1984LL * v9;
    if ( *(_QWORD *)(v10 + 1808) || !(_DWORD)InitializationPhase )
    {
      if ( v3 > 1 )
      {
        v7 = (unsigned __int8 *)(v10 + 1914);
        v47 = (unsigned __int8 *)(v10 + 1914);
        if ( v9 == v5 )
        {
          v12 = (*(_DWORD *)(v10 + 1888) & 1) == 0;
          v13 = (unsigned __int8 *)(((v6 & 8 | 0xEF4uLL) >> 1) + v10);
          v49 = v12;
          v47 = v13;
          v7 = v13;
          if ( (v6 & 0x20) != 0 )
          {
            v47 = v13;
            if ( !v12 )
            {
              v14 = &v51;
              v15 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v8 >> byte_1403CB69A));
              v50 = MiChannelMaximumPowerOf2Mask & (v8 >> byte_1403CB69A);
              v16 = v3;
              do
              {
                v17 = *v13;
                if ( v17 != v15 )
                  *v14++ = v17;
                ++v13;
                --v16;
              }
              while ( v16 );
              v9 = v48;
              v7 = (unsigned __int8 *)&v50;
              v47 = (unsigned __int8 *)&v50;
            }
          }
          v62 = *v7;
        }
      }
      v18 = (int *)&MiZeroThenZero;
      v57 = &v7[v3];
      v54 = v6 & 2;
      if ( (v6 & 2) == 0 )
        v18 = (int *)&MiFreeThenFree;
      v58 = v18;
      while ( 1 )
      {
        if ( v7 )
        {
          v19 = v8 & dword_1403CB6D8;
          v8 = v8 & dword_1403CB6D8 | (v9 << byte_1403CB699) | (*v7 << byte_1403CB69A);
          v60 = v19 | (v9 << byte_1403CB699) | (*v7 << byte_1403CB69A);
        }
        v20 = *v18;
        v21 = 16LL * v8;
        v22 = v8;
        while ( 1 )
        {
          v23 = (_SLIST_HEADER *)(v21 + *(_QWORD *)(v4 + 8LL * v20 + 4136));
          if ( LOWORD(v23->Alignment) )
          {
            PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v23);
            if ( PerfectColorHeadPage )
              break;
          }
          if ( v20 == v18[1] )
          {
            v25 = *v18;
            v26 = *(_QWORD *)(v4 + 8 * v25 + 2112);
            v27 = *(_QWORD *)(v26 + 40 * v22 + 16);
            v28 = v26 + 40 * v22;
            if ( v27 == 0xFFFFFFFFFLL )
            {
LABEL_64:
              PerfectColorHeadPage = 0LL;
              goto LABEL_65;
            }
            for ( i = a3; ; i = a3 )
            {
              PerfectColorHeadPage = 48 * v27 - 0x58000000000LL;
              if ( (a3 & 1) != 0 )
              {
                if ( _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL) )
                  goto LABEL_64;
                CurrentIrql = 17;
                v31 = i & 0x4000;
              }
              else
              {
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                v31 = i & 0x4000;
                if ( (i & 0x4000) != 0 )
                {
                  MiLockPageAtDpcInline(48 * v27 - 0x58000000000LL);
                }
                else
                {
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL) )
                    goto LABEL_63;
                  v31 = 0;
                }
              }
              if ( (*(_BYTE *)(PerfectColorHeadPage + 34) & 7) == (_DWORD)v25 )
              {
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v28 + 32);
                if ( v31 )
                {
                  KxAcquireQueuedSpinLock(&LockHandle, v28 + 32);
                }
                else if ( !(unsigned int)KxTryToAcquireQueuedSpinLock(&LockHandle) )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(PerfectColorHeadPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( CurrentIrql == 17 )
                    goto LABEL_64;
LABEL_63:
                  __writecr8(CurrentIrql);
                  goto LABEL_64;
                }
                if ( v27 == *(_QWORD *)(v28 + 16) )
                {
                  if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v27, v28, a3) )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(PerfectColorHeadPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    if ( (a3 & 1) == 0 && *(_QWORD *)(v28 + 16) != 0xFFFFFFFFFLL )
                      MiReplenishPageSlist(a1, (unsigned int)v25, v60);
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                    if ( CurrentIrql != 17 )
                      __writecr8(CurrentIrql);
                  }
                  else
                  {
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                    MiReturnFreeZeroPage(48 * v27 - 0x58000000000LL, 0LL);
                    _InterlockedAnd64((volatile signed __int64 *)(PerfectColorHeadPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    if ( CurrentIrql != 17 )
                      __writecr8(CurrentIrql);
                    PerfectColorHeadPage = 1LL;
                  }
LABEL_65:
                  v4 = a1;
                  v6 = a3;
                  v8 = v60;
                  goto LABEL_66;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              _InterlockedAnd64((volatile signed __int64 *)(PerfectColorHeadPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( CurrentIrql != 17 )
                __writecr8(CurrentIrql);
              v27 = *(_QWORD *)(v28 + 16);
              if ( v27 == 0xFFFFFFFFFLL )
                goto LABEL_64;
            }
          }
          v20 = v18[1];
        }
        *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
        if ( v20 )
        {
          MiSetFreshPfnFromFreeList(PerfectColorHeadPage);
        }
        else if ( (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
        {
          MiArePageContentsZero((PerfectColorHeadPage + 0x58000000000LL) / 48);
          *(_QWORD *)PerfectColorHeadPage = 0LL;
          goto LABEL_66;
        }
        *(_QWORD *)PerfectColorHeadPage = 0LL;
LABEL_66:
        if ( PerfectColorHeadPage == 1 )
          return -1LL;
        if ( PerfectColorHeadPage )
          goto LABEL_103;
        v32 = (int *)&MiZeroThenZero;
        v33 = v6 | 2;
        if ( v54 )
          v33 = v6 & 0xFFFFFFFD;
        if ( (v33 & 2) == 0 )
          v32 = (int *)&MiFreeThenFree;
        for ( j = *v32; ; j = v32[1] )
        {
          v35 = (_SLIST_HEADER *)(v21 + *(_QWORD *)(v4 + 8LL * j + 4136));
          if ( LOWORD(v35->Alignment) )
          {
            PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v35);
            if ( PerfectColorHeadPage )
              break;
          }
          if ( j == v32[1] )
          {
            PerfectColorHeadPage = MiGetPerfectColorHeadPage(
                                     v4,
                                     (unsigned int)*(_QWORD *)(v4 + 8LL * *v32 + 2112) + 40 * v8,
                                     v8,
                                     *v32,
                                     v33);
            goto LABEL_84;
          }
        }
        *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
        if ( j )
        {
          MiSetFreshPfnFromFreeList(PerfectColorHeadPage);
        }
        else if ( (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
        {
          MiArePageContentsZero((PerfectColorHeadPage + 0x58000000000LL) / 48);
          *(_QWORD *)PerfectColorHeadPage = 0LL;
          goto LABEL_84;
        }
        *(_QWORD *)PerfectColorHeadPage = 0LL;
LABEL_84:
        if ( PerfectColorHeadPage == 1 )
          return -1LL;
        if ( PerfectColorHeadPage )
          goto LABEL_103;
        MiCheckZeroFreeRebalance(v4, v8);
        FreeOrZeroPageAnyColor = MiGetFreeOrZeroPageAnyColor(v4, v8, v6);
        PerfectColorHeadPage = FreeOrZeroPageAnyColor;
        if ( FreeOrZeroPageAnyColor == 1 )
          return -1LL;
        if ( FreeOrZeroPageAnyColor )
          goto LABEL_103;
        v37 = MiGetFreeOrZeroPageAnyColor(v4, v8, v33);
        PerfectColorHeadPage = v37;
        if ( v37 == 1 )
          return -1LL;
        if ( v37 )
        {
LABEL_103:
          v40 = v62;
          goto LABEL_104;
        }
        if ( !(unsigned int)MiPageAvailable(v4, v6) )
          return -1LL;
        v18 = v58;
        v7 = v47 + 1;
        v9 = v48;
        v47 = v7;
        if ( v7 == v57 )
        {
          v3 = v55;
          v11 = v52;
          v5 = v53;
          goto LABEL_93;
        }
      }
    }
    if ( !(unsigned int)MiPageAvailable(v4, v6) )
      return -1LL;
    v7 = v47;
LABEL_93:
    if ( (v6 & 0x4000) != 0 )
      return -1LL;
    v38 = v11 + 1;
    v52 = v38;
    if ( v38 == (unsigned __int16)KeNumberNodes || (v6 & 0x10) != 0 )
      break;
    v9 = *((unsigned __int16 *)qword_1403CB6A0 + v38 + v5 * (unsigned __int16)KeNumberNodes);
    v48 = v9;
    if ( v3 == 1 )
    {
      v7 = 0LL;
      v39 = v8 & dword_1403CB6D8;
      v8 = v8 & dword_1403CB6D8 | (v9 << byte_1403CB699);
      v60 = v39 | (v9 << byte_1403CB699);
      goto LABEL_2;
    }
  }
  if ( (v6 & 1) != 0 )
    return -1LL;
  v40 = v62;
  if ( (v6 & 0x30) != 0 && !(unsigned int)MiCheckNodeChannelStandbyCount(v4, v5, v62) )
    return -1LL;
  v41 = MiRemoveLowestPriorityStandbyPage(v4, 8LL, v6);
  if ( v41 == -1 )
    return -1LL;
  PerfectColorHeadPage = 48 * v41 - 0x58000000000LL;
LABEL_104:
  v42 = v53;
  *(_QWORD *)PerfectColorHeadPage = 0LL;
  v43 = (PerfectColorHeadPage + 0x58000000000LL) / 48;
  if ( *(_QWORD *)(PerfectColorHeadPage + 40) >> 58 != v42 )
  {
    v44 = v49;
    goto LABEL_110;
  }
  if ( ((*(_QWORD *)(PerfectColorHeadPage + 40) >> 36) & 3) != v40 )
  {
    v44 = v49;
    if ( !v49 )
    {
LABEL_110:
      if ( (v6 & 1) != 0 )
        goto LABEL_107;
      if ( (v6 & 0x80u) == 0 )
      {
        v43 = MiSwapNumaStandbyPage((PerfectColorHeadPage + 0x58000000000LL) / 48, v42, v40, v6 | 0x10);
        PerfectColorHeadPage = 48 * v43 - 0x58000000000LL;
      }
      if ( ((v6 & 0x10) == 0 || *(_QWORD *)(PerfectColorHeadPage + 40) >> 58 == v42)
        && ((v6 & 0x20) == 0 || ((*(_QWORD *)(PerfectColorHeadPage + 40) >> 36) & 3) == v40 || v44) )
      {
        goto LABEL_107;
      }
      MiReleaseFreshPage(PerfectColorHeadPage);
      return -1LL;
    }
  }
LABEL_107:
  if ( (v6 & 0x200) != 0 )
  {
    v45 = 1;
  }
  else if ( (v6 & 0x400) != 0 )
  {
    v45 = 0;
  }
  else
  {
    v45 = ((v6 & 0x800) == 0) | 2;
  }
  if ( (v6 & 0x100) != 0 && (unsigned int)MiPfnZeroingNeeded(PerfectColorHeadPage, v45) )
  {
    MiZeroPhysicalPage(v43);
    *(_QWORD *)(PerfectColorHeadPage + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  if ( v45 != 3 && *(unsigned __int8 *)(PerfectColorHeadPage + 34) >> 6 != v45 )
    MiChangePageAttribute(PerfectColorHeadPage, v45, 0LL);
  return v43;
}

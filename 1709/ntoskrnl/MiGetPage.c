/*
 * XREFs of MiGetPage @ 0x1400489F0
 * Callers:
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiGetPageTablePages @ 0x140027ECC (MiGetPageTablePages.c)
 *     MiBuildMdlForMappedFileFault @ 0x140028510 (MiBuildMdlForMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x140029AB0 (MiAllocateKernelStackPages.c)
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiGetPageChain @ 0x1400484F0 (MiGetPageChain.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiFindNonPagedPoolPages @ 0x140089100 (MiFindNonPagedPoolPages.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1400CB06C (MiTradeTransitionPage.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x1400CEC64 (MiDoneWithThisPageGetAnother.c)
 *     MiCreateUltraThreadContextHelper @ 0x1400CF880 (MiCreateUltraThreadContextHelper.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiGetSystemPage @ 0x1400EE160 (MiGetSystemPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140128900 (MiAllocateMdlPagesByLists.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x140217718 (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14021FEC0 (MiReplaceLockedPage.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MiSplitDirectMapPage @ 0x140223AD4 (MiSplitDirectMapPage.c)
 *     MiGetFileHashPage @ 0x140231FD0 (MiGetFileHashPage.c)
 *     MiAllocateTopLevelPage @ 0x14043CD94 (MiAllocateTopLevelPage.c)
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateDriverPage @ 0x140509740 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     MiFillPagedPoolLockedDown @ 0x1406E3220 (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x1406EB4D0 (MiFillPerSessionProtos.c)
 *     MiComputeOptimalZeroPath @ 0x140829810 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140829A64 (MiInitializeCacheFlushing.c)
 *     MxSwapPages @ 0x14082C2BC (MxSwapPages.c)
 *     MiAllocateDummyPage @ 0x14082C7C0 (MiAllocateDummyPage.c)
 *     MiInitializeGapFrames @ 0x140849A88 (MiInitializeGapFrames.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiPfnZeroingNeeded @ 0x1400C4A48 (MiPfnZeroingNeeded.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiReplenishPageSlist @ 0x1400C53D0 (MiReplenishPageSlist.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400C6214 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiCheckZeroFreeRebalance @ 0x1400C6F10 (MiCheckZeroFreeRebalance.c)
 *     MiReturnFreeZeroPage @ 0x1400CABF0 (MiReturnFreeZeroPage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400CAD78 (MiGetPerfectColorHeadPage.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1400CAF3C (KxTryToAcquireQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     KeCheckForZeroPage @ 0x140184CB0 (KeCheckForZeroPage.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     MiCheckNodeChannelStandbyCount @ 0x14022A404 (MiCheckNodeChannelStandbyCount.c)
 *     MiPageNotZero @ 0x14022A530 (MiPageNotZero.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 *     MiPageAvailable @ 0x140230484 (MiPageAvailable.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r14
  __int64 v5; // r12
  unsigned __int8 *v6; // r15
  unsigned int v7; // edx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r11
  bool v12; // cc
  __int64 v13; // rcx
  unsigned __int8 *v14; // r8
  char *v15; // rcx
  int v16; // r9d
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rbp
  int *v21; // rsi
  __int64 v22; // r12
  int i; // edi
  _SLIST_HEADER *v24; // rcx
  PSLIST_ENTRY v25; // rax
  __int64 PerfectColorHeadPage; // rbx
  ULONG_PTR v27; // rsi
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned int v33; // ebp
  int *v34; // rsi
  int j; // edi
  _SLIST_HEADER *v36; // rcx
  PSLIST_ENTRY v37; // rax
  ULONG_PTR v38; // rsi
  __int64 FreeOrZeroPageAnyColor; // rax
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // esi
  __int64 v45; // rax
  __int64 v46; // rdx
  ULONG_PTR v47; // rdi
  BOOL v48; // ebp
  unsigned int v49; // esi
  unsigned int v51; // [rsp+30h] [rbp-A8h]
  unsigned int v52; // [rsp+34h] [rbp-A4h]
  unsigned int v53; // [rsp+38h] [rbp-A0h]
  unsigned int v54; // [rsp+3Ch] [rbp-9Ch]
  BOOL v55; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v56; // [rsp+48h] [rbp-90h]
  char v57; // [rsp+50h] [rbp-88h] BYREF
  char v58; // [rsp+51h] [rbp-87h] BYREF
  int v59; // [rsp+54h] [rbp-84h]
  unsigned int v60; // [rsp+58h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-78h] BYREF
  __int64 v62; // [rsp+78h] [rbp-60h]
  unsigned __int8 *v63; // [rsp+80h] [rbp-58h]
  unsigned int v65; // [rsp+E8h] [rbp+10h]
  unsigned __int8 v66; // [rsp+F0h] [rbp+18h] BYREF
  unsigned __int8 v67; // [rsp+F8h] [rbp+20h] BYREF

  v65 = a2;
  v3 = MmNumberOfChannels;
  v4 = a1;
  v5 = a2;
  v6 = 0LL;
  v7 = a2 >> byte_140388501;
  v9 = a3 & 2;
  v55 = 1;
  v53 = v9;
  v10 = v7;
  v59 = 0;
  v11 = (unsigned int)MmNumberOfChannels;
  v52 = v7;
  v54 = v7;
  v51 = 0;
  v60 = MmNumberOfChannels;
LABEL_2:
  v56 = 0LL;
  v12 = v3 <= 1;
  while ( 2 )
  {
    if ( !v12 )
    {
      v13 = *(_QWORD *)(v4 + 16) + 8256LL * (unsigned int)v10;
      v6 = (unsigned __int8 *)(v13 + 8185);
      v56 = (unsigned __int8 *)(v13 + 8185);
      if ( (_DWORD)v10 == v7 )
      {
        v6 = (unsigned __int8 *)(v13 + ((a3 & 8 | 0x3FF2uLL) >> 1));
        v55 = (*(_DWORD *)(v13 + 8160) & 1) == 0;
        v56 = v6;
        v14 = v6;
        if ( (a3 & 0x10) != 0 )
        {
          v56 = (unsigned __int8 *)(v13 + ((a3 & 8 | 0x3FF2uLL) >> 1));
          if ( (*(_DWORD *)(v13 + 8160) & 1) != 0 )
          {
            v15 = &v58;
            v16 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v5 >> byte_140388502);
            v57 = MiChannelMaximumPowerOf2Mask & ((unsigned int)v5 >> byte_140388502);
            if ( v3 )
            {
              v17 = v11;
              do
              {
                v18 = *v14;
                if ( v18 != v16 )
                  *v15++ = v18;
                ++v14;
                --v17;
              }
              while ( v17 );
            }
            v10 = v54;
            v6 = (unsigned __int8 *)&v57;
            v56 = (unsigned __int8 *)&v57;
          }
        }
        v9 = v53;
        v51 = *v6;
      }
    }
    v63 = &v6[v11];
    do
    {
      if ( v6 )
      {
        v19 = v5 & dword_140388540;
        v5 = (unsigned int)v5 & dword_140388540 | ((_DWORD)v10 << byte_140388501) | (*v6 << byte_140388502);
        v65 = v19 | ((_DWORD)v10 << byte_140388501) | (*v6 << byte_140388502);
      }
      v20 = (unsigned int)v5;
      v21 = (int *)&MiZeroThenZero;
      v62 = (unsigned int)v5;
      if ( !(_DWORD)v9 )
        v21 = (int *)&MiFreeThenFree;
      v22 = 16 * v5;
      for ( i = *v21; ; i = v21[1] )
      {
        v24 = (_SLIST_HEADER *)(v22 + *(_QWORD *)(v4 + 8LL * i + 4072));
        if ( LOWORD(v24->Alignment) )
        {
          v25 = RtlpInterlockedPopEntrySList(v24);
          PerfectColorHeadPage = (__int64)v25;
          if ( v25 )
          {
            v25[1].Next = 0LL;
            if ( i )
            {
              MiSetFreshPfnFromFreeList(v25);
            }
            else if ( (MiFlags & 0x80u) != 0
                   && (BYTE3(v25[2].Next) & 0x40) == 0
                   && (++dword_140388C10 & MmPageValidationFrequency) == 0 )
            {
              if ( KeGetCurrentPrcb()->HyperPte )
              {
                v27 = MiMapPageInHyperSpaceWorker((__int64)&v25[0x5800000000LL] / 48, &v66, 0x80000000LL);
                if ( KeCheckForZeroPage(v27) )
                  MiPageNotZero(v27, (PerfectColorHeadPage + 0x58000000000LL) / 48);
                MiUnmapPageInHyperSpaceWorker(v27, v66, 0x80000000LL);
                *(_QWORD *)PerfectColorHeadPage = 0LL;
                goto LABEL_64;
              }
            }
            *(_QWORD *)PerfectColorHeadPage = 0LL;
            goto LABEL_64;
          }
        }
        if ( i == v21[1] )
          break;
      }
      v28 = *v21;
      v29 = *(_QWORD *)(v4 + 8 * v28 + 2048);
      v30 = *(_QWORD *)(v29 + 40 * v20 + 16);
      v31 = v29 + 40 * v20;
      if ( v30 == 0xFFFFFFFFFLL )
      {
LABEL_62:
        PerfectColorHeadPage = 0LL;
        goto LABEL_63;
      }
      while ( 1 )
      {
        PerfectColorHeadPage = 48 * v30 - 0x58000000000LL;
        if ( (a3 & 1) != 0 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL) )
            goto LABEL_62;
          CurrentIrql = 17;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (a3 & 0x1000) != 0 )
          {
            MiLockPageAtDpcInline(48 * v30 - 0x58000000000LL);
          }
          else if ( _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL) )
          {
            goto LABEL_61;
          }
        }
        if ( (*(_BYTE *)(PerfectColorHeadPage + 34) & 7) == (_DWORD)v28 )
          break;
LABEL_47:
        _InterlockedAnd64((volatile signed __int64 *)(PerfectColorHeadPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql != 17 )
          __writecr8(CurrentIrql);
        v30 = *(_QWORD *)(v31 + 16);
        if ( v30 == 0xFFFFFFFFFLL )
          goto LABEL_62;
      }
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v31 + 32);
      if ( (a3 & 0x1000) != 0 )
      {
        KxAcquireQueuedSpinLock(&LockHandle);
      }
      else if ( !(unsigned int)KxTryToAcquireQueuedSpinLock(&LockHandle, v31 + 32, v9, v10) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(PerfectColorHeadPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql == 17 )
          goto LABEL_62;
LABEL_61:
        __writecr8(CurrentIrql);
        goto LABEL_62;
      }
      if ( v30 != *(_QWORD *)(v31 + 16) )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_47;
      }
      if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v30, v31, a3) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(PerfectColorHeadPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (a3 & 1) == 0 && *(_QWORD *)(v31 + 16) != 0xFFFFFFFFFLL )
          MiReplenishPageSlist(a1, (unsigned int)v28, v65);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( CurrentIrql != 17 )
          __writecr8(CurrentIrql);
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        MiReturnFreeZeroPage(48 * v30 - 0x58000000000LL, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(PerfectColorHeadPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql != 17 )
          __writecr8(CurrentIrql);
        PerfectColorHeadPage = 1LL;
      }
LABEL_63:
      v4 = a1;
      v6 = v56;
LABEL_64:
      if ( PerfectColorHeadPage == 1 )
        return -1LL;
      if ( PerfectColorHeadPage )
        goto LABEL_104;
      if ( v53 )
        v33 = a3 & 0xFFFFFFFD;
      else
        v33 = a3 | 2;
      v34 = (int *)&MiZeroThenZero;
      if ( (v33 & 2) == 0 )
        v34 = (int *)&MiFreeThenFree;
      for ( j = *v34; ; j = v34[1] )
      {
        v36 = (_SLIST_HEADER *)(v22 + *(_QWORD *)(v4 + 8LL * j + 4072));
        if ( LOWORD(v36->Alignment) )
        {
          v37 = RtlpInterlockedPopEntrySList(v36);
          PerfectColorHeadPage = (__int64)v37;
          if ( v37 )
            break;
        }
        if ( j == v34[1] )
        {
          v5 = v65;
          PerfectColorHeadPage = MiGetPerfectColorHeadPage(
                                   v4,
                                   *(_QWORD *)(v4 + 8LL * *v34 + 2048) + 40 * v62,
                                   v65,
                                   *v34,
                                   v33);
          goto LABEL_87;
        }
      }
      v37[1].Next = 0LL;
      if ( j )
      {
        MiSetFreshPfnFromFreeList(v37);
LABEL_85:
        *(_QWORD *)PerfectColorHeadPage = 0LL;
        v5 = v65;
        goto LABEL_87;
      }
      if ( (MiFlags & 0x80u) == 0 )
        goto LABEL_85;
      if ( (BYTE3(v37[2].Next) & 0x40) != 0 )
        goto LABEL_85;
      if ( (++dword_140388C10 & MmPageValidationFrequency) != 0 || !KeGetCurrentPrcb()->HyperPte )
        goto LABEL_85;
      v38 = MiMapPageInHyperSpaceWorker((__int64)&v37[0x5800000000LL] / 48, &v67, 0x80000000LL);
      if ( KeCheckForZeroPage(v38) )
        MiPageNotZero(v38, (PerfectColorHeadPage + 0x58000000000LL) / 48);
      MiUnmapPageInHyperSpaceWorker(v38, v67, 0x80000000LL);
      *(_QWORD *)PerfectColorHeadPage = 0LL;
      v5 = v65;
LABEL_87:
      if ( PerfectColorHeadPage == 1 )
        return -1LL;
      if ( PerfectColorHeadPage )
        goto LABEL_104;
      MiCheckZeroFreeRebalance(v4, (unsigned int)v5);
      FreeOrZeroPageAnyColor = MiGetFreeOrZeroPageAnyColor(v4, (unsigned int)v5, a3);
      PerfectColorHeadPage = FreeOrZeroPageAnyColor;
      if ( FreeOrZeroPageAnyColor == 1 )
        return -1LL;
      if ( FreeOrZeroPageAnyColor )
        goto LABEL_104;
      v40 = MiGetFreeOrZeroPageAnyColor(v4, (unsigned int)v5, v33);
      PerfectColorHeadPage = v40;
      if ( v40 == 1 )
        return -1LL;
      if ( v40 )
      {
LABEL_104:
        v44 = v51;
LABEL_105:
        *(_QWORD *)PerfectColorHeadPage = 0LL;
        v46 = v52;
        v47 = (PerfectColorHeadPage + 0x58000000000LL) / 48;
        if ( *(_QWORD *)(PerfectColorHeadPage + 40) >> 58 == v52 )
        {
          if ( ((*(_QWORD *)(PerfectColorHeadPage + 40) >> 36) & 3) == v44 || (v48 = v55) )
          {
LABEL_108:
            if ( (a3 & 0x80u) == 0 )
            {
              if ( (a3 & 0x100) != 0 )
                v49 = 0;
              else
                v49 = ((a3 & 0x200) == 0) | 2;
            }
            else
            {
              v49 = 1;
            }
            if ( (a3 & 0x40) != 0 && (unsigned int)MiPfnZeroingNeeded(PerfectColorHeadPage, v49, v9) )
            {
              MiZeroPhysicalPage(v47);
              *(_QWORD *)(PerfectColorHeadPage + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
            }
            if ( v49 != 3 && *(unsigned __int8 *)(PerfectColorHeadPage + 34) >> 6 != v49 )
              MiChangePageAttribute(PerfectColorHeadPage, v49, 0LL);
            return v47;
          }
        }
        else
        {
          v48 = v55;
        }
        if ( (a3 & 1) == 0 )
        {
          if ( (a3 & 0x20) == 0 )
          {
            v47 = MiSwapNumaStandbyPage((PerfectColorHeadPage + 0x58000000000LL) / 48, v52, v44, a3);
            v46 = v52;
            PerfectColorHeadPage = 48 * v47 - 0x58000000000LL;
          }
          if ( (a3 & 0x10) != 0
            && (*(_QWORD *)(PerfectColorHeadPage + 40) >> 58 != (_DWORD)v46
             || ((*(_QWORD *)(PerfectColorHeadPage + 40) >> 36) & 3) != v44 && !v48) )
          {
            MiReleaseFreshPage(PerfectColorHeadPage, v46);
            return -1LL;
          }
        }
        goto LABEL_108;
      }
      if ( !(unsigned int)MiPageAvailable(v4, a3) )
        return -1LL;
      v9 = v53;
      v10 = v54;
      v56 = ++v6;
    }
    while ( v6 != v63 );
    if ( (a3 & 0x1000) == 0 )
    {
      v41 = v59 + 1;
      v59 = v41;
      if ( v41 != (unsigned __int16)KeNumberNodes )
      {
        v3 = v60;
        v11 = v60;
        v42 = v41 + v52 * (unsigned __int16)KeNumberNodes;
        v7 = v52;
        v10 = *((unsigned __int16 *)qword_140388508 + v42);
        v54 = *((unsigned __int16 *)qword_140388508 + v42);
        v12 = v60 <= 1;
        if ( v60 != 1 )
          continue;
        v6 = 0LL;
        v43 = v5 & dword_140388540;
        v7 = v52;
        v5 = (unsigned int)v5 & dword_140388540 | ((_DWORD)v10 << byte_140388501);
        v65 = v43 | ((_DWORD)v10 << byte_140388501);
        goto LABEL_2;
      }
      if ( (a3 & 1) == 0 )
      {
        v44 = v51;
        if ( (a3 & 0x10) == 0 || (unsigned int)MiCheckNodeChannelStandbyCount(v4, v52, v51, v54) )
        {
          v45 = MiRemoveLowestPriorityStandbyPage(v4, 8LL, a3, v10);
          if ( v45 != -1 )
          {
            PerfectColorHeadPage = 48 * v45 - 0x58000000000LL;
            goto LABEL_105;
          }
        }
      }
    }
    return -1LL;
  }
}

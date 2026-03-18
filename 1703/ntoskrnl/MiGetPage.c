/*
 * XREFs of MiGetPage @ 0x1400BBC00
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140002DEC (MiDoneWithThisPageGetAnother.c)
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MiObtainTransitionPage @ 0x140074E48 (MiObtainTransitionPage.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiGetPageChain @ 0x1400BB6F0 (MiGetPageChain.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiAllocateKernelStackPages @ 0x1401059E0 (MiAllocateKernelStackPages.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x140107600 (MiBuildMdlForMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiGetSystemPage @ 0x140109CF0 (MiGetSystemPage.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiGetPageTablePages @ 0x14010E79C (MiGetPageTablePages.c)
 *     MiFindNonPagedPoolPages @ 0x14010E930 (MiFindNonPagedPoolPages.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiAllocateMdlPagesByLists @ 0x140133DC0 (MiAllocateMdlPagesByLists.c)
 *     MiGetFileHashPage @ 0x14013D880 (MiGetFileHashPage.c)
 *     MiCreateZeroThreadContext @ 0x14015892C (MiCreateZeroThreadContext.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14021670C (MiReplaceLockedPage.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 *     MiSplitDirectMapPage @ 0x1402191C4 (MiSplitDirectMapPage.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 *     MiAllocateTopLevelPage @ 0x14041D294 (MiAllocateTopLevelPage.c)
 *     MiPfPrepareReadList @ 0x140518E60 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140519D10 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateDriverPage @ 0x14053D888 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     MiFillPagedPoolLockedDown @ 0x1406B6770 (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 *     MxSwapPages @ 0x140802304 (MxSwapPages.c)
 *     MiAllocateDummyPage @ 0x14080276C (MiAllocateDummyPage.c)
 *     MiComputeOptimalZeroPath @ 0x1408043E0 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140804634 (MiInitializeCacheFlushing.c)
 *     MiInitializeGapFrames @ 0x1408165A8 (MiInitializeGapFrames.c)
 * Callees:
 *     MiPageAvailable @ 0x140075688 (MiPageAvailable.c)
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiGetFreeOrZeroPage @ 0x1400BBDA0 (MiGetFreeOrZeroPage.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCheckNodeChannelStandbyCount @ 0x14021EF2C (MiCheckNodeChannelStandbyCount.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  unsigned int v5; // ebp
  unsigned __int8 *v7; // rsi
  __int64 v8; // r9
  unsigned int v9; // r13d
  unsigned int i; // r12d
  __int64 v11; // rdx
  char v12; // cl
  unsigned int v13; // edi
  ULONG_PTR FreeOrZeroPage; // r14
  __int64 v15; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int8 *v19; // r9
  char *v20; // r10
  int v21; // r8d
  int v22; // eax
  unsigned __int16 v23; // ax
  int v24; // r8d
  int v25; // r8d
  __int64 v26; // rcx
  BOOL v27; // r15d
  __int64 v28; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 *v29; // [rsp+28h] [rbp-40h]
  unsigned int v31; // [rsp+78h] [rbp+10h]
  BOOL v32; // [rsp+88h] [rbp+20h]

  v3 = (unsigned int)MmNumberOfChannels;
  v4 = a1;
  v5 = a2 >> byte_14036C1B9;
  v31 = a2 >> byte_14036C1B9;
  v7 = 0LL;
  v32 = 1;
  v8 = a2 >> byte_14036C1B9;
  HIDWORD(v28) = 0;
  v9 = 0;
  for ( i = a2; ; i = i & dword_14036C1F8 | ((_DWORD)v8 << byte_14036C1B9) )
  {
    v11 = v3;
LABEL_3:
    v12 = byte_14036C1BA;
    if ( (unsigned int)v3 > 1 )
    {
      v18 = *(_QWORD *)(v4 + 48) + 2184LL * (unsigned int)v8;
      v7 = (unsigned __int8 *)(v18 + 2161);
      if ( (_DWORD)v8 == v5 )
      {
        v19 = (unsigned __int8 *)(v18 + ((a3 & 8 | 0x10E2uLL) >> 1));
        v32 = (*(_DWORD *)(v18 + 2136) & 1) == 0;
        v7 = v19;
        if ( (a3 & 0x10) != 0 && (*(_DWORD *)(v18 + 2136) & 1) != 0 )
        {
          v20 = (char *)&v28 + 1;
          v21 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (i >> byte_14036C1BA));
          LOBYTE(v28) = MiChannelMaximumPowerOf2Mask & (i >> byte_14036C1BA);
          do
          {
            v22 = *v19;
            if ( v22 != v21 )
              *v20++ = v22;
            ++v19;
            --v11;
          }
          while ( v11 );
          v7 = (unsigned __int8 *)&v28;
        }
        v9 = *v7;
        v8 = v31;
      }
    }
    v13 = 1;
    v29 = &v7[v3];
    while ( 1 )
    {
      if ( v7 )
        i = i & dword_14036C1F8 | ((_DWORD)v8 << byte_14036C1B9) | (*v7 << v12);
      FreeOrZeroPage = MiGetFreeOrZeroPage(v4, i, a3, v8, v28);
      if ( FreeOrZeroPage != -1LL )
        goto LABEL_8;
      v4 = a1;
      if ( !(unsigned int)MiPageAvailable(a1, a3) )
        break;
      if ( ++v7 == v29 )
      {
        v23 = KeNumberNodes;
        v24 = HIDWORD(v28);
        goto LABEL_35;
      }
      v12 = byte_14036C1BA;
      v8 = v31;
    }
    v23 = KeNumberNodes;
    v24 = (unsigned __int16)KeNumberNodes - 1;
LABEL_35:
    if ( (a3 & 0x1000) != 0 )
      return -1LL;
    v25 = v24 + 1;
    HIDWORD(v28) = v25;
    if ( v25 == v23 )
      break;
    v11 = v3;
    v26 = v25 + v5 * v23;
    v8 = *((unsigned __int16 *)qword_14036C1C0 + v26);
    v31 = *((unsigned __int16 *)qword_14036C1C0 + v26);
    if ( (_DWORD)v3 != 1 )
      goto LABEL_3;
    v7 = 0LL;
  }
  if ( (a3 & 1) != 0 || (a3 & 0x10) != 0 && !(unsigned int)MiCheckNodeChannelStandbyCount(v17, v5, v9) )
    return -1LL;
  FreeOrZeroPage = MiRemoveLowestPriorityStandbyPage(a1, 8LL, a3);
  if ( FreeOrZeroPage == -1LL )
    return -1LL;
LABEL_8:
  v15 = 48 * FreeOrZeroPage - 0x58000000000LL;
  if ( *(_QWORD *)(v15 + 40) >> 58 == v5 )
  {
    if ( ((*(_QWORD *)(v15 + 40) >> 36) & 3) == v9 )
      goto LABEL_10;
    v27 = v32;
    if ( v32 )
      goto LABEL_10;
  }
  else
  {
    v27 = v32;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 0x20) == 0 )
    {
      FreeOrZeroPage = MiSwapNumaStandbyPage(FreeOrZeroPage, v5, v9, a3);
      v15 = 48 * FreeOrZeroPage - 0x58000000000LL;
    }
    if ( (a3 & 0x10) != 0 && (*(_QWORD *)(v15 + 40) >> 58 != v5 || ((*(_QWORD *)(v15 + 40) >> 36) & 3) != v9 && !v27) )
    {
      MiReleaseFreshPage(v15);
      return -1LL;
    }
  }
LABEL_10:
  if ( (a3 & 0x80u) == 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v13 = 0;
    }
    else
    {
      v13 = 3;
      if ( (a3 & 0x200) != 0 )
        v13 = 2;
    }
  }
  if ( (a3 & 0x40) != 0 && MiPfnZeroingNeeded() )
  {
    MiZeroPhysicalPage(FreeOrZeroPage, (a3 & 0x2000) == 0, v13);
    *(_QWORD *)(v15 + 16) = 0LL;
  }
  if ( v13 != 3 && *(unsigned __int8 *)(v15 + 34) >> 6 != v13 )
    MiChangePageAttribute(v15, v13, 2LL);
  return FreeOrZeroPage;
}

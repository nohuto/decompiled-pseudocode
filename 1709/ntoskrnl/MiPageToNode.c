/*
 * XREFs of MiPageToNode @ 0x1400C7140
 * Callers:
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiAttemptHugePageCoalesce @ 0x1400C59B0 (MiAttemptHugePageCoalesce.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiReplaceTransitionPage @ 0x1400C75F8 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1400CB06C (MiTradeTransitionPage.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140126570 (MiTryUnlinkNodeLargePage.c)
 *     MiDescribePageRun @ 0x14013756C (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x140137634 (MiInitializeUnusablePfns.c)
 *     MiReplaceLockedPage @ 0x14021FEC0 (MiReplaceLockedPage.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MiSwitchToPfns @ 0x14082A50C (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x14082A9F8 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x14082B05C (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x14082B318 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x14082B8F0 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxCreatePfn @ 0x14082C120 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x14084A574 (MiFreeBootPageTable.c)
 *     MxSwitchDescriptors @ 0x14086C2D0 (MxSwitchDescriptors.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiPageToNode(unsigned __int64 a1, __int64 a2)
{
  KIRQL v3; // di
  int v4; // ett
  unsigned int v5; // ecx
  unsigned int i; // r9d
  unsigned int v7; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !qword_140388518 )
    return 0LL;
  if ( qword_140388CC8 )
  {
    if ( (_DWORD)a2 == 1 )
    {
      v3 = 17;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(a2) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140388280, a2);
      }
      else
      {
        _m_prefetchw(&dword_140388280);
        v4 = dword_140388280 & 0x7FFFFFFF;
        if ( v4 != _InterlockedCompareExchange(
                     &dword_140388280,
                     (dword_140388280 & 0x7FFFFFFF) + 1,
                     dword_140388280 & 0x7FFFFFFF) )
          ExpWaitForSpinLockSharedAndAcquire(&dword_140388280, 0xFFu);
      }
    }
    else
    {
      v3 = ExAcquireSpinLockShared(&dword_140388280);
    }
  }
  else
  {
    v3 = 18;
  }
  v5 = dword_1403884FC;
  if ( a1 < *(_QWORD *)(qword_140388518 + 16LL * (unsigned int)dword_1403884FC) )
  {
    do
      --v5;
    while ( a1 < *(_QWORD *)(qword_140388518 + 16LL * v5) );
  }
  else
  {
    for ( i = dword_1403884FC + 1; a1 >= *(_QWORD *)(qword_140388518 + 16LL * i); ++v5 )
      ++i;
  }
  v7 = *(_DWORD *)(qword_140388518 + 16LL * v5 + 8);
  dword_1403884FC = v5;
  if ( v3 != 18 )
  {
    if ( v3 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140388280, retaddr);
      }
      else
      {
        _InterlockedAnd(&dword_140388280, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_140388280);
      }
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140388280);
      __writecr8(v3);
    }
  }
  return v7;
}

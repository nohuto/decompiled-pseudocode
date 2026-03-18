/*
 * XREFs of MiPageToNode @ 0x1400B70B0
 * Callers:
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MiObtainTransitionPage @ 0x140074E48 (MiObtainTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 *     MiAttemptHugePageCoalesce @ 0x1400B58B0 (MiAttemptHugePageCoalesce.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140128BFC (MiTryUnlinkNodeLargePage.c)
 *     MiDescribePageRun @ 0x140154454 (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x14015451C (MiInitializeUnusablePfns.c)
 *     MiReplaceLockedPage @ 0x14021670C (MiReplaceLockedPage.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiSwitchToPfns @ 0x14080053C (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140800A20 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1408010A0 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140801360 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x14080190C (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxCreatePfns @ 0x140801D90 (MxCreatePfns.c)
 *     MxCreatePfn @ 0x1408021CC (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x140813674 (MiFreeBootPageTable.c)
 *     MxSwitchDescriptors @ 0x140835120 (MxSwitchDescriptors.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14025C84C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiPageToNode(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r8
  KIRQL v4; // di
  int v5; // ett
  unsigned int v6; // edx
  unsigned int i; // r9d
  unsigned int v8; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = qword_14036C1D0;
  if ( !qword_14036C1D0 )
    return 0LL;
  if ( qword_14036CAC8 )
  {
    if ( (_DWORD)a2 == 1 )
    {
      v4 = 17;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(a2) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14036BF60, a2);
      }
      else
      {
        _m_prefetchw(&dword_14036BF60);
        v5 = dword_14036BF60 & 0x7FFFFFFF;
        if ( v5 != _InterlockedCompareExchange(
                     &dword_14036BF60,
                     (dword_14036BF60 & 0x7FFFFFFF) + 1,
                     dword_14036BF60 & 0x7FFFFFFF) )
          ExpWaitForSpinLockSharedAndAcquire(&dword_14036BF60, 0xFFu);
      }
    }
    else
    {
      v4 = ExAcquireSpinLockShared(&dword_14036BF60);
    }
    v2 = qword_14036C1D0;
  }
  else
  {
    v4 = 18;
  }
  v6 = dword_14036C1B4;
  if ( a1 < *(_QWORD *)(v2 + 16LL * (unsigned int)dword_14036C1B4) )
  {
    do
      --v6;
    while ( a1 < *(_QWORD *)(v2 + 16LL * v6) );
  }
  else
  {
    for ( i = dword_14036C1B4 + 1; a1 >= *(_QWORD *)(v2 + 16LL * i); ++v6 )
      ++i;
  }
  v8 = *(_DWORD *)(v2 + 16LL * v6 + 8);
  dword_14036C1B4 = v6;
  if ( v4 != 18 )
  {
    if ( v4 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14036BF60, retaddr);
      }
      else
      {
        _InterlockedAnd(&dword_14036BF60, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_14036BF60);
      }
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_14036BF60);
      __writecr8(v4);
    }
  }
  return v8;
}

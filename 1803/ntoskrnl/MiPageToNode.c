/*
 * XREFs of MiPageToNode @ 0x140122B50
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiTradeTransitionPage @ 0x140002F48 (MiTradeTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140003CC0 (MiTryUnlinkNodeLargePage.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiDescribePageRun @ 0x14016F8B4 (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x14016F97C (MiInitializeUnusablePfns.c)
 *     MiReplaceLockedPage @ 0x14025B7C8 (MiReplaceLockedPage.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiSwitchToPfns @ 0x140899CB8 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x14089A028 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x14089A66C (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x14089A954 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x14089AEA4 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxCreatePfn @ 0x14089B5E0 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x1408BC09C (MiFreeBootPageTable.c)
 *     MxSwitchDescriptors @ 0x1408E100C (MxSwitchDescriptors.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiPageToNode(unsigned __int64 a1, int a2)
{
  KIRQL v3; // di
  unsigned int v4; // edx
  unsigned int i; // r9d
  unsigned int v6; // ebx

  if ( !qword_1403CB6B0 )
    return 0LL;
  if ( qword_1403CBF88 )
  {
    if ( a2 == 1 )
    {
      v3 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_1403CB420);
    }
    else
    {
      v3 = ExAcquireSpinLockShared(&dword_1403CB420);
    }
  }
  else
  {
    v3 = 18;
  }
  v4 = dword_1403CB694;
  if ( a1 < *(_QWORD *)(qword_1403CB6B0 + 16LL * (unsigned int)dword_1403CB694) )
  {
    do
      --v4;
    while ( a1 < *(_QWORD *)(qword_1403CB6B0 + 16LL * v4) );
  }
  else
  {
    for ( i = dword_1403CB694 + 1; a1 >= *(_QWORD *)(qword_1403CB6B0 + 16LL * i); ++v4 )
      ++i;
  }
  v6 = *(_DWORD *)(qword_1403CB6B0 + 16LL * v4 + 8);
  dword_1403CB694 = v4;
  if ( v3 != 18 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CB420);
    if ( v3 != 17 )
      __writecr8(v3);
  }
  return v6;
}

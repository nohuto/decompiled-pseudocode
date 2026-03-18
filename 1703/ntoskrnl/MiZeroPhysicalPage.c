/*
 * XREFs of MiZeroPhysicalPage @ 0x1400A59A0
 * Callers:
 *     MiZeroInParallelWorker @ 0x14007CF90 (MiZeroInParallelWorker.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiGetPageChain @ 0x1400BB6F0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiPerformFinalZeroing @ 0x14021F1F8 (MiPerformFinalZeroing.c)
 *     MiZeroAndConvertLargePage @ 0x140225624 (MiZeroAndConvertLargePage.c)
 *     MiComputeOptimalZeroPath @ 0x1408043E0 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140804634 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x1401852C0 (KeZeroPages.c)
 *     MxFillPhysicalPage @ 0x1408025BC (MxFillPhysicalPage.c)
 */

char __fastcall MiZeroPhysicalPage(ULONG_PTR BugCheckParameter2, char a2, int a3)
{
  ULONG_PTR v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // ebp
  unsigned __int64 v9; // rbx
  int ProtectionPfnCompatible; // eax
  __int64 v11; // rcx
  char result; // al
  __int64 v13; // rbx
  unsigned __int8 v14; // [rsp+58h] [rbp+10h] BYREF

  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v7 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v8 = *(unsigned __int8 *)(v6 + 34) >> 6;
  if ( (a2 & 2) == 0 )
  {
    v8 = *((_DWORD *)&unk_14036C220 + 4 * v7 + a3);
    if ( v8 != (_DWORD)v7 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v8, 0LL);
  }
  v9 = 0LL;
  if ( (a2 & 1) != 0 && (v9 = MiReservePtes(&qword_14036D0A0, 1LL)) != 0 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v6);
    *(_QWORD *)v9 = MiMakeValidPte(v9, BugCheckParameter2, ProtectionPfnCompatible | 0xA0000000);
    if ( (unsigned int)MiPteInShadowRange(v9) )
      MiWritePteShadow(v11);
    KeZeroPages((__int64)(v9 << 25) >> 16, 4096LL);
    result = MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v9, 1u);
  }
  else if ( KeGetCurrentPrcb()->HyperPte )
  {
    v13 = MiMapPageInHyperSpaceWorker(BugCheckParameter2, &v14, 0x80000000LL);
    KeZeroPages(v13, 4096LL);
    result = MiUnmapPageInHyperSpaceWorker(v13, v14, 0x80000000LL);
    v9 = 1LL;
  }
  else
  {
    result = MxFillPhysicalPage(BugCheckParameter2);
  }
  if ( v8 != (_DWORD)v7 && v8 != a3 )
  {
    if ( v9 )
      return MiChangePageAttribute(v6, (unsigned int)v7, 0LL);
  }
  return result;
}

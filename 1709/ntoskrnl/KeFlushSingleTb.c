/*
 * XREFs of KeFlushSingleTb @ 0x1400CA124
 * Callers:
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiValidateInPage @ 0x1400CCA70 (MiValidateInPage.c)
 *     MiMapSinglePage @ 0x1400CD194 (MiMapSinglePage.c)
 *     MiTradeActivePage @ 0x1400CDE24 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x1400CE7A0 (MiSwapStackPageNoDpc.c)
 *     MiJumpStackTarget @ 0x1400D00F0 (MiJumpStackTarget.c)
 *     MmStealTopLevelPage @ 0x1400D08FC (MmStealTopLevelPage.c)
 *     MiAbortCombineScan @ 0x1400ED698 (MiAbortCombineScan.c)
 *     MiNoFaultFound @ 0x140116D14 (MiNoFaultFound.c)
 *     MiLockPagedAddress @ 0x140120470 (MiLockPagedAddress.c)
 *     MiDbgReleaseAddress @ 0x140227BA8 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140227C44 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140227F74 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x140228A74 (MiLargePageFault.c)
 *     MiClearPageFileHash @ 0x140231C5C (MiClearPageFileHash.c)
 *     MiScrubAweMappedPage @ 0x140238654 (MiScrubAweMappedPage.c)
 *     MiRelocateImagePfn @ 0x140495F60 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x1405B76A0 (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x14082BAD0 (MxCopyPage.c)
 *     MxSwapPages @ 0x14082C2BC (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x14082C5B4 (MxFillPhysicalPage.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1400574F0 (KiIsSecureProcessFlush.c)
 *     KiFlushViaHypervisor @ 0x140059270 (KiFlushViaHypervisor.c)
 *     KxFlushSingleTb @ 0x1400CA228 (KxFlushSingleTb.c)
 *     HvlFlushSingleTb @ 0x140141058 (HvlFlushSingleTb.c)
 *     VmFlushTb @ 0x1402781F8 (VmFlushTb.c)
 *     ExFlushTb @ 0x140287438 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  bool IsSecureProcessFlush; // bp
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  if ( !IsSecureProcessFlush && !KiFlushViaHypervisor() )
    goto LABEL_9;
  if ( a3 )
    v8 = 0LL;
  else
    v8 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  LOBYTE(v7) = IsSecureProcessFlush;
  if ( KiKvaShadow )
    v8 = 0LL;
  result = HvlFlushSingleTb(v8, 0LL, v7, a1);
  if ( !(_BYTE)result )
LABEL_9:
    result = KxFlushSingleTb(a1, a2, a3);
  if ( VmTbFlushEnabled )
  {
    v11 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    result = VmFlushTb(1LL, &v11, a2);
  }
  if ( ExTbFlushActive )
  {
    v11 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(1LL, &v11, a2);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

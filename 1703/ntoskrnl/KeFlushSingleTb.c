/*
 * XREFs of KeFlushSingleTb @ 0x14010DE88
 * Callers:
 *     MiMapSinglePage @ 0x140025508 (MiMapSinglePage.c)
 *     MiTradeActivePage @ 0x140027F94 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x14002C2E0 (MiSwapStackPageNoDpc.c)
 *     MiClearPageFileHash @ 0x140035D80 (MiClearPageFileHash.c)
 *     MiLockPagedAddress @ 0x140036C60 (MiLockPagedAddress.c)
 *     MiJumpStackTarget @ 0x140040A00 (MiJumpStackTarget.c)
 *     MiNoFaultFound @ 0x1400B0400 (MiNoFaultFound.c)
 *     MiValidateInPage @ 0x1400CB690 (MiValidateInPage.c)
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiAbortCombineScan @ 0x140103628 (MiAbortCombineScan.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x14013497C (MmStealTopLevelPage.c)
 *     MiDbgReleaseAddress @ 0x14021B304 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14021B390 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x14021B6BC (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x14021C114 (MiLargePageFault.c)
 *     MiScrubAweMappedPage @ 0x140226064 (MiScrubAweMappedPage.c)
 *     MiRelocateImagePfn @ 0x140518C20 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x1405A7878 (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x140801AEC (MxCopyPage.c)
 *     MxSwapPages @ 0x140802304 (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x1408025BC (MxFillPhysicalPage.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1400D8F70 (KiIsSecureProcessFlush.c)
 *     KiFlushViaHypervisor @ 0x1400D9420 (KiFlushViaHypervisor.c)
 *     KxFlushSingleTb @ 0x14010DF88 (KxFlushSingleTb.c)
 *     HvlFlushSingleTb @ 0x1401EB87C (HvlFlushSingleTb.c)
 *     VmFlushTb @ 0x140251988 (VmFlushTb.c)
 *     ExFlushTb @ 0x14025D8F8 (ExFlushTb.c)
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
    result = VmFlushTb(1LL, &v11);
  }
  if ( ExTbFlushActive )
  {
    v11 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(1LL, &v11, 0LL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

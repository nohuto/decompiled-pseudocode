/*
 * XREFs of MiIsAddressValid @ 0x140066790
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MmIsSpecialPoolAddress @ 0x14006660C (MmIsSpecialPoolAddress.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     MiRecheckVaVm @ 0x140066A38 (MiRecheckVaVm.c)
 *     MiConvertAndFlushWsleVas @ 0x1400E6890 (MiConvertAndFlushWsleVas.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiMakeSystemAddressValidSystemWs @ 0x14012069C (MiMakeSystemAddressValidSystemWs.c)
 *     MiFreeUnusedPfnPages @ 0x140144320 (MiFreeUnusedPfnPages.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140152114 (MiDeprioritizeVirtualAddresses.c)
 *     IopIsAddressRangeValid @ 0x14015ADD0 (IopIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x1401F6200 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401F6880 (IoSetDumpRange.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401F756C (IopAddRunTimeTriageDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1401F7B74 (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidSectionSize @ 0x1401F7BEC (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x1401F7C34 (IopGetMaxValidSectionSizeDown.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140206278 (KeValidateBugCheckCallbackRecord.c)
 *     KiDumpParameterImages @ 0x140206870 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x140206A98 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x140206C88 (KiScanBugCheckCallbackList.c)
 *     MmIsAddressValid @ 0x140219970 (MmIsAddressValid.c)
 *     MiDbgCopyMemory @ 0x1402276C0 (MiDbgCopyMemory.c)
 *     MiDbgWriteCheck @ 0x140228014 (MiDbgWriteCheck.c)
 *     MiScrubLargeMappedPage @ 0x1402387C4 (MiScrubLargeMappedPage.c)
 *     ViFreeTrackedPool @ 0x1407A653C (ViFreeTrackedPool.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

bool __fastcall MiIsAddressValid(__int64 a1)
{
  unsigned __int64 v1; // r10
  __int64 v3; // r9
  unsigned __int64 v4; // r11
  _QWORD *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // [rsp+20h] [rbp-38h]
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]
  unsigned __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]

  v1 = a1;
  if ( a1 >> 47 != -1 && a1 >> 47 != 0 )
    return 0;
  v7 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v3) = 4;
  v4 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    v3 = (unsigned int)(v3 - 1);
    v5 = (_QWORD *)*(&v7 + v3);
    v6 = *v5;
    if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= v4 )
      LOBYTE(v6) = MiReadPteShadow(v5, *v5);
    if ( (v6 & 1) == 0 )
      break;
    if ( (v6 & 0x80u) != 0LL )
      return v1 < 0xFFFFF68000000000uLL || v1 > 0xFFFFF6FFFFFFFFFFuLL;
    if ( !(_DWORD)v3 )
      return 1;
  }
  return 0;
}

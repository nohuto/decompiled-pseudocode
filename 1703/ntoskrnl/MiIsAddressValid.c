/*
 * XREFs of MiIsAddressValid @ 0x1400A58A0
 * Callers:
 *     MiMakeSystemAddressValidSystemWs @ 0x140004860 (MiMakeSystemAddressValidSystemWs.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14007F294 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertAndFlushWsleVas @ 0x14007FA24 (MiConvertAndFlushWsleVas.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiUpdatePageTableUseCount @ 0x1400A56C0 (MiUpdatePageTableUseCount.c)
 *     MiRecheckVaVm @ 0x1400A5790 (MiRecheckVaVm.c)
 *     MmIsSpecialPoolAddress @ 0x1400A5B4C (MmIsSpecialPoolAddress.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiFreeUnusedPfnPages @ 0x14015A8A0 (MiFreeUnusedPfnPages.c)
 *     IopIsAddressRangeValid @ 0x140167028 (IopIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x1401F0AC0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401F0F40 (IoSetDumpRange.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401F1C10 (IopAddRunTimeTriageDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1401F221C (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidSectionSize @ 0x1401F2294 (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x1401F22DC (IopGetMaxValidSectionSizeDown.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1401FFDEC (KeValidateBugCheckCallbackRecord.c)
 *     KiDumpParameterImages @ 0x1402003E0 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x140200608 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1402007F8 (KiScanBugCheckCallbackList.c)
 *     MmIsAddressValid @ 0x140211F10 (MmIsAddressValid.c)
 *     MiDbgCopyMemory @ 0x14021AE1C (MiDbgCopyMemory.c)
 *     MiDbgWriteCheck @ 0x14021B75C (MiDbgWriteCheck.c)
 *     MiScrubLargeMappedPage @ 0x14022617C (MiScrubLargeMappedPage.c)
 *     ViFreeTrackedPool @ 0x14076481C (ViFreeTrackedPool.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

bool __fastcall MiIsAddressValid(__int64 a1)
{
  int v1; // r9d
  char v2; // al
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v6; // [rsp+20h] [rbp-38h]
  unsigned __int64 v7; // [rsp+28h] [rbp-30h]
  unsigned __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+38h] [rbp-20h]

  if ( a1 >> 47 == -1 || a1 >> 47 == 0 )
  {
    v6 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v1 = 4;
    v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      v2 = MI_READ_PTE_LOCK_FREE(*(&v6 + (unsigned int)(v1 - 1)));
      if ( (v2 & 1) == 0 )
        break;
      if ( v2 < 0 )
        return v3 < v4 || v3 > 0xFFFFF6FFFFFFFFFFuLL;
      if ( !v1 )
        return 1;
    }
  }
  return 0;
}

/*
 * XREFs of MiIsAddressValid @ 0x140122C40
 * Callers:
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MmIsSpecialPoolAddress @ 0x14004C860 (MmIsSpecialPoolAddress.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MiReturnNonPagedPoolPde @ 0x1400DC5A0 (MiReturnNonPagedPoolPde.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiFreeUnusedPfnPages @ 0x14017A360 (MiFreeUnusedPfnPages.c)
 *     KiIsAddressRangeValid @ 0x140185978 (KiIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x140233710 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x140233B90 (IoSetDumpRange.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x140234884 (IopAddRunTimeTriageDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x140234EB0 (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidSectionSize @ 0x140234F28 (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x140234F70 (IopGetMaxValidSectionSizeDown.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140243A50 (KeValidateBugCheckCallbackRecord.c)
 *     KiDumpParameterImages @ 0x140244050 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x140244414 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x140244604 (KiScanBugCheckCallbackList.c)
 *     KiValidateComponentName @ 0x1402446D8 (KiValidateComponentName.c)
 *     MmIsAddressValid @ 0x140256450 (MmIsAddressValid.c)
 *     MiDbgCopyMemory @ 0x1402607B8 (MiDbgCopyMemory.c)
 *     MiDbgWriteCheck @ 0x140261220 (MiDbgWriteCheck.c)
 *     ViFreeTrackedPool @ 0x140813698 (ViFreeTrackedPool.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsAddressValid(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  char v8; // r9
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-10h]

  if ( a1 >> 47 != -1 && a1 >> 47 != 0 )
    return 0;
  v10 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v9 + v2--);
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v4 & 1) == 0 )
        return 0;
      if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
      {
        v6 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 8 * ((v3 >> 3) & 0x1FF));
          v8 = v4 | 0x20;
          if ( (v7 & 0x20) == 0 )
            v8 = v4;
          LOBYTE(v4) = v8;
          if ( (v7 & 0x42) != 0 )
            LOBYTE(v4) = v8 | 0x42;
        }
      }
    }
    if ( (v4 & 1) == 0 )
      return 0;
    if ( (v4 & 0x80u) != 0LL )
      break;
    if ( !v2 )
      return 1;
  }
  return (unsigned __int64)a1 < 0xFFFFF68000000000uLL || (unsigned __int64)a1 > 0xFFFFF6FFFFFFFFFFuLL;
}

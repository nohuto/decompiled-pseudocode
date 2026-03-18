/*
 * XREFs of RtlClearBitsEx @ 0x140009400
 * Callers:
 *     MiFreePagedPoolPages @ 0x1400094C0 (MiFreePagedPoolPages.c)
 *     MiMakeSystemRangeAvailable @ 0x140049550 (MiMakeSystemRangeAvailable.c)
 *     RtlpHpFixedVsFree @ 0x1400AC960 (RtlpHpFixedVsFree.c)
 *     MiExpandNonPagedPool @ 0x1400BE8FC (MiExpandNonPagedPool.c)
 *     MiExpandPagedPool @ 0x1400C631C (MiExpandPagedPool.c)
 *     MiReleaseSessionVa @ 0x1400CD1E0 (MiReleaseSessionVa.c)
 *     MiScanLeafNonPagedPool @ 0x1400D7D50 (MiScanLeafNonPagedPool.c)
 *     MiReturnNonPagedPoolPde @ 0x1400DC5A0 (MiReturnNonPagedPoolPde.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 *     RtlFindSetBitsAndClearEx @ 0x14013A270 (RtlFindSetBitsAndClearEx.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14015767C (MiMirrorOmitPagesFromCopy.c)
 *     ExpSaPageGroupFreeMemory @ 0x14015E660 (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x1401832A4 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x140234658 (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1402352D8 (IopRemovePageFromPageMap.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14026E0FC (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x14026E6B0 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x140288E70 (RtlShiftLeftBitMapEx.c)
 *     MiFreeToSubAllocatedRegion @ 0x140562CBC (MiFreeToSubAllocatedRegion.c)
 *     MiActOnMirrorBitmap @ 0x1405EFFA8 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14071FC44 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiCleanPhysicalProcessPages @ 0x14074F9E0 (MiCleanPhysicalProcessPages.c)
 *     MiInitializeDriverImages @ 0x1408AC7B8 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall RtlClearBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdx
  _BYTE *v6; // rbx
  char v7; // al

  if ( a3 )
  {
    v3 = a3;
    v5 = a2 & 7;
    v6 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    if ( v5 + a3 <= 8 )
    {
      v7 = ~(byte_1402FEA38[a3] << v5);
LABEL_4:
      *v6 &= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ &= byte_1402FEA38[v5];
      v3 = a3 - (unsigned int)(8 - v5);
    }
    if ( v3 > 8 )
    {
      memset(v6, 0, v3 >> 3);
      v6 += v3 >> 3;
      v3 &= 7u;
    }
    if ( v3 )
    {
      v7 = byte_1402FEA48[v3];
      goto LABEL_4;
    }
  }
}

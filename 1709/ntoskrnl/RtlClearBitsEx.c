/*
 * XREFs of RtlClearBitsEx @ 0x140036470
 * Callers:
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     NtResetWriteWatch @ 0x14003D7F0 (NtResetWriteWatch.c)
 *     MiScanLeafNonPagedPool @ 0x1400C1F00 (MiScanLeafNonPagedPool.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     RtlFindSetBitsAndClearEx @ 0x1400CF180 (RtlFindSetBitsAndClearEx.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MiMakeSystemRangeAvailable @ 0x1400F6D54 (MiMakeSystemRangeAvailable.c)
 *     MiExpandPagedPool @ 0x1400F7CD0 (MiExpandPagedPool.c)
 *     MiReleaseSessionVa @ 0x1400F7EA8 (MiReleaseSessionVa.c)
 *     ExpSaPageGroupFreeMemory @ 0x140156564 (ExpSaPageGroupFreeMemory.c)
 *     MiExtendDynamicBitMap @ 0x140157140 (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x1401F7340 (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1401F7F94 (IopRemovePageFromPageMap.c)
 *     MiMirrorNodeLargePages @ 0x140232DD4 (MiMirrorNodeLargePages.c)
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x140236734 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x140236CD0 (MiClearRangeInPartitionTree.c)
 *     RtlShiftLeftBitMapEx @ 0x140253800 (RtlShiftLeftBitMapEx.c)
 *     RtlpHpFixedVsFree @ 0x14025C410 (RtlpHpFixedVsFree.c)
 *     MiFreeToSubAllocatedRegion @ 0x14056A828 (MiFreeToSubAllocatedRegion.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1406BACB8 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiActOnMirrorBitmap @ 0x1406E0F88 (MiActOnMirrorBitmap.c)
 *     MiCleanPhysicalProcessPages @ 0x1406E54AC (MiCleanPhysicalProcessPages.c)
 *     MiInitializeNonPagedPool @ 0x14082D7A8 (MiInitializeNonPagedPool.c)
 *     MiInitializeDriverImages @ 0x14082EE90 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
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
      v7 = ~(byte_1402C7730[a3] << v5);
LABEL_4:
      *v6 &= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ &= byte_1402C7730[v5];
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
      v7 = byte_1402C7740[v3];
      goto LABEL_4;
    }
  }
}

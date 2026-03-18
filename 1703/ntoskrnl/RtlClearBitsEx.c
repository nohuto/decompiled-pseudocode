/*
 * XREFs of RtlClearBitsEx @ 0x1400CDB30
 * Callers:
 *     NtResetWriteWatch @ 0x14001DB40 (NtResetWriteWatch.c)
 *     MiReleaseSessionVa @ 0x140035AD4 (MiReleaseSessionVa.c)
 *     MiMakeSystemRangeAvailable @ 0x1400825B4 (MiMakeSystemRangeAvailable.c)
 *     MiScanLeafNonPagedPool @ 0x1400ACC90 (MiScanLeafNonPagedPool.c)
 *     MiFreeSmallPageFromMdl @ 0x1400B5540 (MiFreeSmallPageFromMdl.c)
 *     MiFreePagedPoolPages @ 0x1400CCF60 (MiFreePagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 *     MiExpandPagedPool @ 0x140126B48 (MiExpandPagedPool.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiMirrorNodeLargePages @ 0x14013A564 (MiMirrorNodeLargePages.c)
 *     ExpSaPageGroupFreeMemory @ 0x140151FB8 (ExpSaPageGroupFreeMemory.c)
 *     MiZeroNodePages @ 0x1401585A0 (MiZeroNodePages.c)
 *     RtlFindSetBitsAndClearEx @ 0x14015CB70 (RtlFindSetBitsAndClearEx.c)
 *     MiExtendDynamicBitMap @ 0x14016522C (MiExtendDynamicBitMap.c)
 *     IopAddPageRangeToPageMaps @ 0x1401F19E4 (IopAddPageRangeToPageMaps.c)
 *     IopRemovePageFromPageMap @ 0x1401F262C (IopRemovePageFromPageMap.c)
 *     MiActOnPartitionNodePages @ 0x14021CCD8 (MiActOnPartitionNodePages.c)
 *     MiFreeToSubAllocatedRegion @ 0x140499C38 (MiFreeToSubAllocatedRegion.c)
 *     MiActOnMirrorBitmap @ 0x14057AB74 (MiActOnMirrorBitmap.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14068EFF4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiCleanPhysicalProcessPages @ 0x1406B87E4 (MiCleanPhysicalProcessPages.c)
 *     MiInitializeNonPagedPool @ 0x140803DE4 (MiInitializeNonPagedPool.c)
 *     MiInitializeDriverImages @ 0x140814868 (MiInitializeDriverImages.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
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
      v7 = ~(byte_14029EB30[a3] << v5);
LABEL_4:
      *v6 &= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ &= byte_14029EB30[v5];
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
      v7 = byte_14029EB40[v3];
      goto LABEL_4;
    }
  }
}

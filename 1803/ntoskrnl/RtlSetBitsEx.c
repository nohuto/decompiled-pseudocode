/*
 * XREFs of RtlSetBitsEx @ 0x1400DA370
 * Callers:
 *     MiFreePagedPoolPages @ 0x1400094C0 (MiFreePagedPoolPages.c)
 *     MiObtainDynamicVa @ 0x1400499C0 (MiObtainDynamicVa.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400D8720 (RtlFindClearBitsAndSetEx.c)
 *     MiAllocatePagedPoolPages @ 0x1400D9750 (MiAllocatePagedPoolPages.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 *     RtlpHpFixedHeapCreate @ 0x14014B914 (RtlpHpFixedHeapCreate.c)
 *     MiMirrorAddPagesToBrownList @ 0x140156964 (MiMirrorAddPagesToBrownList.c)
 *     MiCheckPoolForContiguousPages @ 0x140162B78 (MiCheckPoolForContiguousPages.c)
 *     IopAddPageRangeToPageMaps @ 0x140234658 (IopAddPageRangeToPageMaps.c)
 *     MiAddRangeToPartitionTree @ 0x14026E0FC (MiAddRangeToPartitionTree.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1404828A0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140482A34 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiActOnMirrorBitmap @ 0x1405EFFA8 (MiActOnMirrorBitmap.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall RtlSetBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
      v7 = byte_1402FEA38[a3] << v5;
LABEL_4:
      *v6 |= v7;
      return;
    }
    if ( (_DWORD)v5 )
    {
      *v6++ |= byte_1402FEA48[v5];
      v3 = a3 - (unsigned int)(8 - v5);
    }
    if ( v3 > 8 )
    {
      memset(v6, 255, v3 >> 3);
      v6 += v3 >> 3;
      v3 &= 7u;
    }
    if ( v3 )
    {
      v7 = byte_1402FEA38[v3];
      goto LABEL_4;
    }
  }
}

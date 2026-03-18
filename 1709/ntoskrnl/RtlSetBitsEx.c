/*
 * XREFs of RtlSetBitsEx @ 0x1400C2EE0
 * Callers:
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400C25F0 (RtlFindClearBitsAndSetEx.c)
 *     MiReplenishNonPagedSlists @ 0x1400C2980 (MiReplenishNonPagedSlists.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiObtainDynamicVa @ 0x1400F6200 (MiObtainDynamicVa.c)
 *     MiCheckPoolForContiguousPages @ 0x140119DCC (MiCheckPoolForContiguousPages.c)
 *     IopAddPageRangeToPageMaps @ 0x1401F7340 (IopAddPageRangeToPageMaps.c)
 *     MiMirrorNodeLargePages @ 0x140232DD4 (MiMirrorNodeLargePages.c)
 *     MiAddRangeToPartitionTree @ 0x140236734 (MiAddRangeToPartitionTree.c)
 *     RtlpHpFixedHeapCreate @ 0x14025C100 (RtlpHpFixedHeapCreate.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x14042BD80 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x14042BF00 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiActOnMirrorBitmap @ 0x1406E0F88 (MiActOnMirrorBitmap.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall RtlSetBitsEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rdi
  char v7; // al

  if ( a3 )
  {
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (a2 >> 3));
    v6 = a3;
    if ( v4 + a3 <= 8 )
    {
      v7 = byte_1402C7730[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_1402C7740[v4];
      v6 = a3 - (unsigned int)(8 - v4);
    }
    if ( v6 > 8 )
    {
      memset(v5, 255, v6 >> 3);
      v5 += v6 >> 3;
      v6 &= 7u;
    }
    if ( v6 )
    {
      v7 = byte_1402C7730[v6];
      goto LABEL_4;
    }
  }
}

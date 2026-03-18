/*
 * XREFs of RtlSetBitsEx @ 0x1400AECC0
 * Callers:
 *     RtlFindClearBitsAndSetEx @ 0x1400AE930 (RtlFindClearBitsAndSetEx.c)
 *     MiFreePagedPoolPages @ 0x1400CCF60 (MiFreePagedPoolPages.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiObtainDynamicVa @ 0x140128308 (MiObtainDynamicVa.c)
 *     MiCheckPoolForContiguousPages @ 0x1401344EC (MiCheckPoolForContiguousPages.c)
 *     MiMirrorNodeLargePages @ 0x14013A564 (MiMirrorNodeLargePages.c)
 *     IopAddPageRangeToPageMaps @ 0x1401F19E4 (IopAddPageRangeToPageMaps.c)
 *     MiAddRangeToPartitionTree @ 0x14021D2DC (MiAddRangeToPartitionTree.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140416D50 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140416ED0 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiActOnMirrorBitmap @ 0x14057AB74 (MiActOnMirrorBitmap.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
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
      v7 = byte_14029EB30[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      *v5++ |= byte_14029EB40[v4];
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
      v7 = byte_14029EB30[v6];
      goto LABEL_4;
    }
  }
}

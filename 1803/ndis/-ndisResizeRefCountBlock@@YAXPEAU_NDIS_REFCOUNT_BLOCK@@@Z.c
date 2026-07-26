/*
 * XREFs of ?ndisResizeRefCountBlock@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C002164C
 * Callers:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0021704 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

void __fastcall ndisResizeRefCountBlock(struct _NDIS_REFCOUNT_BLOCK *a1)
{
  unsigned __int8 NumOverflowTaggedEntries; // cl
  unsigned __int8 v3; // di
  _NDIS_REFCOUNT_TAGGED_ENTRY *PoolWithTag; // rax
  _NDIS_REFCOUNT_TAGGED_ENTRY *v5; // rsi
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rdx

  if ( !a1->Type )
  {
    NumOverflowTaggedEntries = a1->NumOverflowTaggedEntries;
    v3 = -1;
    if ( NumOverflowTaggedEntries == 0xFF )
      goto LABEL_10;
    if ( (unsigned int)NumOverflowTaggedEntries + 2 <= 0xFF )
      v3 = NumOverflowTaggedEntries + 2;
    PoolWithTag = (_NDIS_REFCOUNT_TAGGED_ENTRY *)ExAllocatePoolWithTag(
                                                   NonPagedPoolNx,
                                                   2 * (unsigned int)v3,
                                                   0x7872444Eu);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_10:
      ndisFreeRefCountAuxiliaryMemory(a1);
      a1->Type = 2;
    }
    else
    {
      memset(PoolWithTag, 0, 2 * (unsigned int)v3);
      Tags = a1->TaggedRefCounts.Tags;
      if ( Tags )
        memmove(v5, Tags, 2LL * a1->NumOverflowTaggedEntries);
      ndisFreeRefCountAuxiliaryMemory(a1);
      a1->TaggedRefCounts.Tags = v5;
      a1->NumOverflowTaggedEntries = v3;
    }
  }
}

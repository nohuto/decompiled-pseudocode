/*
 * XREFs of RtlGetNextEntryHashTable @ 0x1400B2520
 * Callers:
 *     SepRmReferenceFindCap @ 0x1402A1BE0 (SepRmReferenceFindCap.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14053F64C (SepFindMatchingCachedHandlesEntry.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x14053F97C (SepFindMatchingLowBoxNumberEntry.c)
 *     SepFindMatchingLuidEntry @ 0x140794070 (SepFindMatchingLuidEntry.c)
 *     SepFindSharedSidEntry @ 0x140794CD4 (SepFindSharedSidEntry.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlGetNextEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  _LIST_ENTRY *ChainHead; // r10
  struct _LIST_ENTRY *Flink; // r9
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v6; // rdx

  ChainHead = Context->ChainHead;
  Flink = Context->PrevLinkage->Flink;
  result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Flink;
  if ( Flink->Flink == Context->ChainHead )
    return 0LL;
  if ( HashTable->NumEnumerators )
  {
    v6 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Flink;
    do
    {
      result = v6;
      if ( v6->Signature )
        break;
      Flink = &v6->Linkage;
      v6 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v6->Linkage.Flink;
    }
    while ( v6 != (PRTL_DYNAMIC_HASH_TABLE_ENTRY)ChainHead );
  }
  if ( result->Signature != Context->Signature )
    return 0LL;
  Context->PrevLinkage = Flink;
  return result;
}

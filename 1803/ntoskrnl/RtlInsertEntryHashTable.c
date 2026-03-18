/*
 * XREFs of RtlInsertEntryHashTable @ 0x14006C450
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1404F0CC4 (SepAddLuidToIndexEntry.c)
 *     SepGetCachedHandlesEntry @ 0x14053F570 (SepGetCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14053F858 (SepGetLowBoxNumberEntry.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140794D64 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x140795114 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlpPopulateContext @ 0x14006C4D0 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlInsertEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // rbx
  struct _LIST_ENTRY *PrevLinkage; // rax
  struct _LIST_ENTRY *Flink; // rcx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  Entry->Signature = Signature;
  v4 = Context;
  ++HashTable->NumEntries;
  if ( Context )
  {
    if ( !Context->ChainHead )
      RtlpPopulateContext(HashTable, Context);
  }
  else
  {
    RtlpPopulateContext(HashTable, v10);
    v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)v10;
  }
  if ( v4->ChainHead->Flink == v4->ChainHead )
    ++HashTable->NonEmptyBuckets;
  PrevLinkage = v4->PrevLinkage;
  Flink = PrevLinkage->Flink;
  if ( PrevLinkage->Flink->Blink != PrevLinkage )
    __fastfail(3u);
  Entry->Linkage.Blink = PrevLinkage;
  Entry->Linkage.Flink = Flink;
  Flink->Blink = &Entry->Linkage;
  PrevLinkage->Flink = &Entry->Linkage;
  return 1;
}

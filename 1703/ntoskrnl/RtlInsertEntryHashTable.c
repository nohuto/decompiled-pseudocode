/*
 * XREFs of RtlInsertEntryHashTable @ 0x140066100
 * Callers:
 *     SepGetCachedHandlesEntry @ 0x140461E70 (SepGetCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140462158 (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x1404A1810 (SepAddLuidToIndexEntry.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406F9A28 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1406F9DD4 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140066190 (RtlpPopulateContext.c)
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
      RtlpPopulateContext(HashTable, Context, Signature);
  }
  else
  {
    RtlpPopulateContext(HashTable, v10, Signature);
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

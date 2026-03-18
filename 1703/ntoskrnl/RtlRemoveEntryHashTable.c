/*
 * XREFs of RtlRemoveEntryHashTable @ 0x1400667C0
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x1400665C4 (SepCleanupMarkedForDeletionEntries.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140430FB8 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140461664 (SepDereferenceCachedHandlesEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x1406F94E0 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406F9A28 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x1406FA444 (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140066190 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  unsigned __int64 Signature; // r8
  struct _LIST_ENTRY *Flink; // r10
  struct _LIST_ENTRY *Blink; // rax

  Signature = Entry->Signature;
  --HashTable->NumEntries;
  if ( Entry->Linkage.Flink == Entry->Linkage.Blink )
    --HashTable->NonEmptyBuckets;
  Flink = Entry->Linkage.Flink;
  Blink = Entry->Linkage.Blink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Entry->Linkage.Flink->Blink != Entry
    || (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Blink->Flink != Entry )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Context && !Context->ChainHead )
    RtlpPopulateContext(HashTable, (__int64)Context, Signature);
  return 1;
}

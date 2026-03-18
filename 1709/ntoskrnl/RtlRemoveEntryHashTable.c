/*
 * XREFs of RtlRemoveEntryHashTable @ 0x140103D20
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x140103B18 (SepCleanupMarkedForDeletionEntries.c)
 *     SepDereferenceCachedHandlesEntry @ 0x14048D324 (SepDereferenceCachedHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14048D434 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x140730F30 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140731478 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x140731E80 (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140103E38 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // r9

  --HashTable->NumEntries;
  if ( Entry->Linkage.Flink == Entry->Linkage.Blink )
    --HashTable->NonEmptyBuckets;
  Flink = Entry->Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Entry->Linkage.Flink->Blink != Entry
    || (Blink = Entry->Linkage.Blink, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Blink->Flink != Entry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Context && !Context->ChainHead )
    RtlpPopulateContext(HashTable, Context);
  return 1;
}

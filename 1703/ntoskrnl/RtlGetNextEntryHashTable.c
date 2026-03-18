/*
 * XREFs of RtlGetNextEntryHashTable @ 0x14001BA40
 * Callers:
 *     SepRmReferenceFindCap @ 0x140248A28 (SepRmReferenceFindCap.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140461F4C (SepFindMatchingCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140462158 (SepGetLowBoxNumberEntry.c)
 *     SepIsValidProcUniqueLuid @ 0x1406F8570 (SepIsValidProcUniqueLuid.c)
 *     SepFindSharedSidEntry @ 0x1406F9998 (SepFindSharedSidEntry.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlGetNextEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_ENTRY Flink; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax

  Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Context->PrevLinkage->Flink;
  result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Linkage.Flink;
  if ( Flink->Linkage.Flink == Context->ChainHead )
    return 0LL;
  if ( HashTable->NumEnumerators )
  {
    do
    {
      result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Linkage.Flink;
      if ( Flink->Linkage.Flink[1].Flink )
        break;
      Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Linkage.Flink;
    }
    while ( result->Linkage.Flink != Context->ChainHead );
  }
  if ( result->Signature != Context->Signature )
    return 0LL;
  Context->PrevLinkage = &Flink->Linkage;
  return result;
}

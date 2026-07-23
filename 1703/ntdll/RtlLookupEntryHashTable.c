/*
 * XREFs of RtlLookupEntryHashTable @ 0x180073C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180073CE8 @ 0x180073CE8 (sub_180073CE8.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlLookupEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // rbx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v5; // rdi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *PrevLinkage; // rax
  char v8; // [rsp+20h] [rbp-28h] BYREF

  v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v8;
  v5 = 0LL;
  if ( Context )
    v4 = Context;
  sub_180073CE8(HashTable, v4, Signature);
  PrevLinkage = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)v4->PrevLinkage;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v4->ChainHead == *PrevLinkage )
    return 0LL;
  if ( (*PrevLinkage)->Signature == Signature )
    return *PrevLinkage;
  return v5;
}

/*
 * XREFs of SepFindMatchingLuidEntry @ 0x140794070
 * Callers:
 *     SepIsValidProcUniqueLuid @ 0x1407940FC (SepIsValidProcUniqueLuid.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x14009F340 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x1400B2520 (RtlGetNextEntryHashTable.c)
 */

unsigned __int64 __fastcall SepFindMatchingLuidEntry(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        struct _LIST_ENTRY **a2,
        unsigned __int64 *a3)
{
  struct _LIST_ENTRY *v3; // rax
  char v4; // bl
  bool v6; // zf
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v9; // rdi
  ULONG_PTR v10; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  unsigned __int64 result; // rax
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  v4 = 0;
  v6 = *a2 == 0LL;
  v9 = 0LL;
  v10 = 1LL;
  if ( !v6 )
    v10 = (ULONG_PTR)v3;
  for ( i = RtlLookupEntryHashTable(HashTable, v10, &Context); i; i = RtlGetNextEntryHashTable(HashTable, &Context) )
  {
    v9 = i;
    if ( *a2 == i[1].Linkage.Blink )
    {
      v4 = 1;
      break;
    }
  }
  result = (unsigned __int64)v9 & -(__int64)(v4 != 0);
  *a3 = result;
  return result;
}

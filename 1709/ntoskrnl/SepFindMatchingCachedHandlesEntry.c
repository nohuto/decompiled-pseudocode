/*
 * XREFs of SepFindMatchingCachedHandlesEntry @ 0x140563E30
 * Callers:
 *     SepGetCachedHandlesEntry @ 0x140563D30 (SepGetCachedHandlesEntry.c)
 * Callees:
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x140101DF0 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140113840 (RtlGetNextEntryHashTable.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall SepFindMatchingCachedHandlesEntry(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR a2,
        int *a3,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY *a4)
{
  char v7; // bl
  PRTL_DYNAMIC_HASH_TABLE_ENTRY NextEntryHashTable; // rax
  int v10; // edi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v11; // rbp
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-38h] BYREF

  memset(&Context, 0, sizeof(Context));
  v7 = 0;
  NextEntryHashTable = RtlLookupEntryHashTable(HashTable, a2, &Context);
  if ( NextEntryHashTable )
  {
    v10 = *a3;
    while ( 1 )
    {
      v11 = NextEntryHashTable;
      if ( v10 == LODWORD(NextEntryHashTable[1].Linkage.Blink) )
      {
        if ( v10 )
        {
          if ( v10 == 1
            && RtlEqualUnicodeString((PCUNICODE_STRING)(a3 + 2), (PCUNICODE_STRING)&NextEntryHashTable[1].Signature, 1u) )
          {
            v7 = 1;
          }
        }
        else if ( RtlEqualSid(*((PSID *)a3 + 1), (PSID)NextEntryHashTable[1].Signature) )
        {
          v7 = 1;
        }
        if ( v7 )
          break;
      }
      NextEntryHashTable = RtlGetNextEntryHashTable(HashTable, &Context);
      if ( !NextEntryHashTable )
        goto LABEL_2;
    }
    *a4 = v11;
  }
  else
  {
LABEL_2:
    *a4 = 0LL;
  }
  return 0LL;
}

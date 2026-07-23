/*
 * XREFs of SepFindMatchingCachedHandlesEntry @ 0x140461F4C
 * Callers:
 *     SepGetCachedHandlesEntry @ 0x140461E70 (SepGetCachedHandlesEntry.c)
 * Callees:
 *     RtlGetNextEntryHashTable @ 0x14001BA40 (RtlGetNextEntryHashTable.c)
 *     RtlLookupEntryHashTable @ 0x14003D9B0 (RtlLookupEntryHashTable.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall SepFindMatchingCachedHandlesEntry(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR a2,
        int *a3,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY *a4)
{
  char v7; // bl
  PRTL_DYNAMIC_HASH_TABLE_ENTRY NextEntryHashTable; // rax
  int v9; // edi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v10; // rbp
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-38h] BYREF

  memset(&Context, 0, sizeof(Context));
  v7 = 0;
  NextEntryHashTable = RtlLookupEntryHashTable(HashTable, a2, &Context);
  if ( NextEntryHashTable )
  {
    v9 = *a3;
    while ( 1 )
    {
      v10 = NextEntryHashTable;
      if ( v9 == LODWORD(NextEntryHashTable[1].Linkage.Blink) )
      {
        if ( v9 )
        {
          if ( v9 == 1
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
        goto LABEL_10;
    }
    *a4 = v10;
  }
  else
  {
LABEL_10:
    *a4 = 0LL;
  }
  return 0LL;
}

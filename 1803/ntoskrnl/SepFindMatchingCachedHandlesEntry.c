/*
 * XREFs of SepFindMatchingCachedHandlesEntry @ 0x14053F64C
 * Callers:
 *     SepGetCachedHandlesEntry @ 0x14053F570 (SepGetCachedHandlesEntry.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x14009F340 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x1400B2520 (RtlGetNextEntryHashTable.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall SepFindMatchingCachedHandlesEntry(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR a2,
        int *a3,
        __int64 *a4)
{
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rbp
  char v8; // bl
  PRTL_DYNAMIC_HASH_TABLE_ENTRY NextEntryHashTable; // rax
  int v10; // edi
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-38h] BYREF

  memset(&Context, 0, sizeof(Context));
  v7 = 0LL;
  v8 = 0;
  NextEntryHashTable = RtlLookupEntryHashTable(HashTable, a2, &Context);
  if ( NextEntryHashTable )
  {
    v10 = *a3;
    do
    {
      v7 = NextEntryHashTable;
      if ( v10 == LODWORD(NextEntryHashTable[1].Linkage.Blink) )
      {
        if ( v10 )
        {
          if ( v10 == 1
            && RtlEqualUnicodeString((PCUNICODE_STRING)(a3 + 2), (PCUNICODE_STRING)&NextEntryHashTable[1].Signature, 1u) )
          {
            v8 = 1;
          }
        }
        else if ( RtlEqualSid(*((PSID *)a3 + 1), (PSID)NextEntryHashTable[1].Signature) )
        {
          v8 = 1;
        }
        if ( v8 )
          break;
      }
      NextEntryHashTable = RtlGetNextEntryHashTable(HashTable, &Context);
    }
    while ( NextEntryHashTable );
  }
  *a4 = (unsigned __int64)v7 & -(__int64)(v8 != 0);
  return 0LL;
}

/*
 * XREFs of SepFindMatchingLowBoxNumberEntry @ 0x14053F97C
 * Callers:
 *     SepGetLowBoxNumberEntry @ 0x14053F858 (SepGetLowBoxNumberEntry.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x14009F340 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x1400B2520 (RtlGetNextEntryHashTable.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 */

__int64 __fastcall SepFindMatchingLowBoxNumberEntry(PRTL_DYNAMIC_HASH_TABLE HashTable, unsigned int *Sid1, __int64 *a3)
{
  char v3; // bl
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rdi
  __int64 v8; // r9
  ULONG_PTR v9; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  v7 = 0LL;
  v8 = Sid1[*((unsigned __int8 *)Sid1 + 1) + 1];
  v9 = 1LL;
  if ( v8 )
    v9 = (unsigned int)v8;
  for ( i = RtlLookupEntryHashTable(HashTable, v9, &Context); i; i = RtlGetNextEntryHashTable(HashTable, &Context) )
  {
    v7 = i;
    if ( RtlEqualSid(Sid1, i[1].Linkage.Blink) )
    {
      v3 = 1;
      break;
    }
  }
  *a3 = (unsigned __int64)v7 & -(__int64)(v3 != 0);
  return 0LL;
}

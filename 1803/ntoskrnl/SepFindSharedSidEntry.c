/*
 * XREFs of SepFindSharedSidEntry @ 0x140794CD4
 * Callers:
 *     SepDeReferenceSharedSidEntries @ 0x14079481C (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140794D64 (SepInsertOrReferenceSharedSidEntries.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x14009F340 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x1400B2520 (RtlGetNextEntryHashTable.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __fastcall SepFindSharedSidEntry(_DWORD *Sid1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rbp
  ULONG_PTR v4; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v6; // rdi
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = g_SepSidMapping;
  v4 = 1LL;
  if ( Sid1[*((unsigned __int8 *)Sid1 + 1) + 1] )
    v4 = (unsigned int)Sid1[*((unsigned __int8 *)Sid1 + 1) + 1];
  for ( i = RtlLookupEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v4, &Context);
        ;
        i = RtlGetNextEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v2 + 8), &Context) )
  {
    v6 = i;
    if ( !i )
      break;
    if ( RtlEqualSid(Sid1, i[1].Linkage.Blink) )
      return v6;
  }
  return (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v1;
}

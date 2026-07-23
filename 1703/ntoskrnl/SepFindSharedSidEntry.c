/*
 * XREFs of SepFindSharedSidEntry @ 0x1406F9998
 * Callers:
 *     SepDeReferenceSharedSidEntries @ 0x1406F94E0 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406F9A28 (SepInsertOrReferenceSharedSidEntries.c)
 * Callees:
 *     RtlGetNextEntryHashTable @ 0x14001BA40 (RtlGetNextEntryHashTable.c)
 *     RtlLookupEntryHashTable @ 0x14003D9B0 (RtlLookupEntryHashTable.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
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

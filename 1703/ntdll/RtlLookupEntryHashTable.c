/*
 * XREFs of RtlLookupEntryHashTable @ 0x180073C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180073CE8 @ 0x180073CE8 (sub_180073CE8.c)
 */

__int64 __fastcall RtlLookupEntryHashTable(__int64 a1, __int64 a2, char *a3)
{
  char *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  char v8; // [rsp+20h] [rbp-28h] BYREF

  v4 = &v8;
  v5 = 0LL;
  if ( a3 )
    v4 = a3;
  sub_180073CE8(a1, v4, a2);
  v6 = *((_QWORD *)v4 + 1);
  if ( *(_QWORD *)v4 == *(_QWORD *)v6 )
    return 0LL;
  if ( *(_QWORD *)(*(_QWORD *)v6 + 16LL) == a2 )
    return *(_QWORD *)v6;
  return v5;
}

/*
 * XREFs of PipFreeBindingRequestEntry @ 0x140693110
 * Callers:
 *     PipFreeDependencyEdge @ 0x1401F7C98 (PipFreeDependencyEdge.c)
 *     PipAddRequestToEdge @ 0x140692B10 (PipAddRequestToEdge.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

void __fastcall PipFreeBindingRequestEntry(__int64 a1)
{
  UNICODE_STRING *v2; // rcx

  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    v2 = *(UNICODE_STRING **)(a1 + 24);
    if ( v2 )
    {
      RtlFreeUnicodeString(v2);
      ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0x53706E50u);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
  }
  ExFreePoolWithTag((PVOID)a1, 0x53706E50u);
}

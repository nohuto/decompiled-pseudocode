/*
 * XREFs of PipAddBindingId @ 0x14063B9AC
 * Callers:
 *     IoResolveDependency @ 0x14017D9C0 (IoResolveDependency.c)
 *     PipCreateDependencyNode @ 0x14063BAEC (PipCreateDependencyNode.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlDuplicateUnicodeString @ 0x140518E60 (RtlDuplicateUnicodeString.c)
 */

NTSTATUS __fastcall PipAddBindingId(__int64 a1, const UNICODE_STRING *a2)
{
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v5; // rbx
  NTSTATUS result; // eax
  UNICODE_STRING **v7; // rdx

  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x53706E50u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  result = RtlDuplicateUnicodeString(0, a2, PoolWithTag + 1);
  if ( result >= 0 )
  {
    v7 = *(UNICODE_STRING ***)(a1 + 64);
    if ( *v7 != (UNICODE_STRING *)(a1 + 56) )
      __fastfail(3u);
    *(_QWORD *)&v5->Length = a1 + 56;
    v5->Buffer = (wchar_t *)v7;
    *v7 = v5;
    *(_QWORD *)(a1 + 64) = v5;
  }
  return result;
}

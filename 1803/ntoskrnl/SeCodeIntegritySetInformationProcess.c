/*
 * XREFs of SeCodeIntegritySetInformationProcess @ 0x14078C274
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeCodeIntegritySetInformationProcess(__int64 a1, unsigned int a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  PVOID PoolWithTag; // rax
  void *v10; // rbx
  unsigned int v11; // edi

  v4 = a4;
  if ( !qword_1403A5D30 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4, 0x20206553u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memmove(PoolWithTag, a3, v4);
  v11 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD))qword_1403A5D30)(a1, a2, v10, (unsigned int)v4);
  ExFreePoolWithTag(v10, 0);
  return v11;
}

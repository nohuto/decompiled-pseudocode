/*
 * XREFs of RtlpAllocateAtom @ 0x140489004
 * Callers:
 *     RtlCreateAtomTableEx @ 0x140013790 (RtlCreateAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1400193F0 (RtlpAllocateAtomTableEntry.c)
 *     RtlpLookupOrCreateLowBox @ 0x1400A566C (RtlpLookupOrCreateLowBox.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x1404854D8 (PsChargeSharedPoolQuota.c)
 */

_QWORD *__fastcall RtlpAllocateAtom(unsigned __int64 a1, ULONG a2)
{
  ULONG_PTR v3; // rdi
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rax

  if ( a1 + 16 < a1 )
    return 0LL;
  v3 = a1 + 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a1 + 16, a2);
  if ( PoolWithTag )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, v3, 0LL);
    *PoolWithTag = v5;
    if ( v5 )
    {
      PoolWithTag[1] = v3;
      PoolWithTag += 2;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, a2);
      return 0LL;
    }
  }
  return PoolWithTag;
}

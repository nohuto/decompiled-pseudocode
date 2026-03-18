/*
 * XREFs of RtlpAllocateAtom @ 0x1404A7C88
 * Callers:
 *     RtlCreateAtomTableEx @ 0x1400137A0 (RtlCreateAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x14006B124 (RtlpAllocateAtomTableEntry.c)
 *     RtlpLookupOrCreateLowBox @ 0x14008BD8C (RtlpLookupOrCreateLowBox.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x1404F4F98 (PsChargeSharedPoolQuota.c)
 */

_QWORD *__fastcall RtlpAllocateAtom(unsigned __int64 a1, ULONG a2)
{
  unsigned __int64 v3; // rdi
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

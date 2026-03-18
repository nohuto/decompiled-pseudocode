/*
 * XREFs of RtlpAllocateAtom @ 0x1404EAF9C
 * Callers:
 *     RtlpLookupOrCreateLowBox @ 0x14003EAFC (RtlpLookupOrCreateLowBox.c)
 *     RtlpAllocateAtomTableEntry @ 0x14006A0A8 (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x1400ADD30 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x1404EBD9C (PsChargeSharedPoolQuota.c)
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

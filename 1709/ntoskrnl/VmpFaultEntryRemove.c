/*
 * XREFs of VmpFaultEntryRemove @ 0x140278C5C
 * Callers:
 *     VmpAccessFaultBatch @ 0x1402786D8 (VmpAccessFaultBatch.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpFaultEntryRemove(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 result; // rax

  v3 = a2;
  v5 = a2 + 32LL * a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  while ( v3 < v5 )
  {
    RtlRbRemoveNode(a1 + 48, v3);
    v3 += 32LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

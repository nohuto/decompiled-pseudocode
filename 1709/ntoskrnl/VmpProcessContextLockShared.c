/*
 * XREFs of VmpProcessContextLockShared @ 0x140279674
 * Callers:
 *     VmColdPagesHint @ 0x140278440 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x1402786D8 (VmpAccessFaultBatch.c)
 *     VmpPrefetchVirtualAddresses @ 0x14027936C (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x140279824 (VmpQueryAccessedState.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockShared(volatile LONG *a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockSharedAtDpcLevel(a1);
  return CurrentIrql;
}

/*
 * XREFs of VmpProcessContextLockShared @ 0x1402AC860
 * Callers:
 *     VmColdPagesHint @ 0x1402AB370 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x1402AB618 (VmpAccessFaultBatch.c)
 *     VmpPrefetchVirtualAddresses @ 0x1402AC55C (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x1402ACA5C (VmpQueryAccessedState.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockShared(volatile LONG *a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockSharedAtDpcLevel(a1);
  return CurrentIrql;
}

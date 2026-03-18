/*
 * XREFs of VmpProcessContextLockShared @ 0x140252504
 * Callers:
 *     VmAccessFault @ 0x1402519D0 (VmAccessFault.c)
 *     VmColdPagesHint @ 0x140251B90 (VmColdPagesHint.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockShared(volatile LONG *a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockSharedAtDpcLevel(a1);
  return CurrentIrql;
}

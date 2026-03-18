/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140825EC4
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140825E80 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot @ 0x140825F60 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140242250 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14082782C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon(
        volatile __int64 *BugCheckParameter2,
        __int64 a2,
        ULONG_PTR a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax

  ++dword_1403AD168;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 148LL);
  VfUtilCheckKernelAddress((ULONG_PTR)BugCheckParameter2, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  LOBYTE(v5) = 12;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = KeAcquireInStackQueuedSpinLockRaiseToSynch(BugCheckParameter2, a3);
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}

/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x1407B8A3C
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x1407B88E0 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockNoReboot @ 0x1407B8BC0 (VerifierKeAcquireInStackQueuedSpinLockNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407BA4B0 (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockCommon(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax

  ++dword_14036A0C8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress(BugCheckParameter2, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  LOBYTE(v5) = 2;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvKeAcquireInStackQueuedSpinLock)(BugCheckParameter2, a3);
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}

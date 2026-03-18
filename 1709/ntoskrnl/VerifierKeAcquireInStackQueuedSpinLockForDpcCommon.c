/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1407B8B24
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1407B8AE0 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x1407B8BA0 (VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        ULONG_PTR a3)
{
  ++dword_14036A0C8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress(BugCheckParameter2, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvKeAcquireInStackQueuedSpinLockForDpc)(
           BugCheckParameter2,
           a3);
}

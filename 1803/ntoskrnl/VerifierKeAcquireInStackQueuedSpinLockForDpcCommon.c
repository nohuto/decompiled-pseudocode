/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140825DC4
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140825D80 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x140825E40 (VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        ULONG_PTR a3)
{
  ++dword_1403AD168;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 148LL);
  VfUtilCheckKernelAddress(BugCheckParameter2, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvKeAcquireInStackQueuedSpinLockForDpc)(
           BugCheckParameter2,
           a3);
}

/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140776D14
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140776CD0 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x140776D90 (VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  ++dword_14034F668;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress(a1, 8LL);
  VfUtilCheckKernelAddress(a3, 24LL);
  return ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64))pXdvKeAcquireInStackQueuedSpinLockForDpc)(a1, a3);
}

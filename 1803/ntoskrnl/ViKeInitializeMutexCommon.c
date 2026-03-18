/*
 * XREFs of ViKeInitializeMutexCommon @ 0x1408275E0
 * Callers:
 *     VerifierKeInitializeMutex @ 0x1408262B0 (VerifierKeInitializeMutex.c)
 *     VerifierKeInitializeMutexNoReboot @ 0x1408262E0 (VerifierKeInitializeMutexNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140814224 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutexCommon(ULONG_PTR a1, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 0x38uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvKeInitializeMutex)(a1, a2);
}

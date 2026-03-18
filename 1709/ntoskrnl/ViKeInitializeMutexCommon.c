/*
 * XREFs of ViKeInitializeMutexCommon @ 0x1407BA278
 * Callers:
 *     VerifierKeInitializeMutex @ 0x1407B9000 (VerifierKeInitializeMutex.c)
 *     VerifierKeInitializeMutexNoReboot @ 0x1407B9030 (VerifierKeInitializeMutexNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutexCommon(ULONG_PTR a1, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 0x38uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvKeInitializeMutex)(a1, a2);
}

/*
 * XREFs of VerifierKeInitializeSemaphore @ 0x140826300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140814224 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeSemaphore(ULONG_PTR a1, unsigned int a2, unsigned int a3)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 0x20uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, _QWORD))pXdvKeInitializeSemaphore)(a1, a2, a3);
}

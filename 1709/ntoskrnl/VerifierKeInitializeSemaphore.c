/*
 * XREFs of VerifierKeInitializeSemaphore @ 0x1407B9050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeSemaphore(ULONG_PTR a1, unsigned int a2, unsigned int a3)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 0x20uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, _QWORD))pXdvKeInitializeSemaphore)(a1, a2, a3);
}

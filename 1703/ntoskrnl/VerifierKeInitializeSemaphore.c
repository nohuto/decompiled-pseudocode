/*
 * XREFs of VerifierKeInitializeSemaphore @ 0x140777200
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeSemaphore(void *a1, unsigned int a2, unsigned int a3)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 32LL);
  return ((__int64 (__fastcall *)(void *, _QWORD, _QWORD))pXdvKeInitializeSemaphore)(a1, a2, a3);
}

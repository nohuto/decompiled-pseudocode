/*
 * XREFs of ViKeInitializeMutexCommon @ 0x140778398
 * Callers:
 *     VerifierKeInitializeMutex @ 0x1407771C0 (VerifierKeInitializeMutex.c)
 *     VerifierKeInitializeMutexNoReboot @ 0x1407771F0 (VerifierKeInitializeMutexNoReboot.c)
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutexCommon(void *a1, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 56LL);
  return ((__int64 (__fastcall *)(void *, _QWORD))pXdvKeInitializeMutex)(a1, a2);
}

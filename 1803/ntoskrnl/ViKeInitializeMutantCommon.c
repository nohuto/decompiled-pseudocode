/*
 * XREFs of ViKeInitializeMutantCommon @ 0x1408275A4
 * Callers:
 *     VerifierKeInitializeMutant @ 0x140826230 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutantNoReboot @ 0x140826290 (VerifierKeInitializeMutantNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140814224 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutantCommon(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx

  VfUtilSynchronizationObjectSanityChecks(a1, 0x38uLL);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvKeInitializeMutant)(a1, v4);
}

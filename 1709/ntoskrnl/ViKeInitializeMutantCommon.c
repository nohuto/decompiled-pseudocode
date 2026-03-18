/*
 * XREFs of ViKeInitializeMutantCommon @ 0x1407BA23C
 * Callers:
 *     VerifierKeInitializeMutant @ 0x1407B8F80 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutantNoReboot @ 0x1407B8FE0 (VerifierKeInitializeMutantNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutantCommon(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx

  VfUtilSynchronizationObjectSanityChecks(a1, 0x38uLL);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvKeInitializeMutant)(a1, v4);
}

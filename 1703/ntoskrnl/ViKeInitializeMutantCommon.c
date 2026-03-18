/*
 * XREFs of ViKeInitializeMutantCommon @ 0x14077835C
 * Callers:
 *     VerifierKeInitializeMutant @ 0x140777150 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutantNoReboot @ 0x1407771B0 (VerifierKeInitializeMutantNoReboot.c)
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutantCommon(void *a1, char a2)
{
  __int64 v4; // rdx

  VfUtilSynchronizationObjectSanityChecks(a1, 56LL);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(void *, __int64))pXdvKeInitializeMutant)(a1, v4);
}

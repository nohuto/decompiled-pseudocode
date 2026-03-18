/*
 * XREFs of VerifierExReleaseResourceLiteNoReboot @ 0x14077DB10
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x14077DD24 (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceLiteNoReboot(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseResourceLite)(a1);
}

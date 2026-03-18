/*
 * XREFs of VerifierExReleaseResourceForThreadLiteNoReboot @ 0x14077DAD0
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x14077DD24 (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceForThreadLiteNoReboot(ULONG_PTR a1, __int64 a2)
{
  ViResourceReleaseSanityChecks(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvExReleaseResourceForThreadLite)(a1, a2);
}

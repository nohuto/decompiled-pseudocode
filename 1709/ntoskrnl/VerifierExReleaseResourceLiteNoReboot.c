/*
 * XREFs of VerifierExReleaseResourceLiteNoReboot @ 0x1407BFA90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViResourceReleaseSanityChecks @ 0x1407BFCCC (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceLiteNoReboot(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseResourceLite)(a1);
}

/*
 * XREFs of VfRemLockReportBadReleaseTag @ 0x140772B64
 * Callers:
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseTag(ULONG_PTR a1, ULONG_PTR a2)
{
  VerifierBugCheckIfAppropriate(0xC4u, 0xD5uLL, a1, a2, 0LL);
  return 1LL;
}

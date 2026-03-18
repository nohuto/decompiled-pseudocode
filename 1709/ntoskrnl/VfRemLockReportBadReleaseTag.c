/*
 * XREFs of VfRemLockReportBadReleaseTag @ 0x1407B4924
 * Callers:
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseTag(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  VerifierBugCheckIfAppropriate(0xC4u, 0xD5uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  return 1LL;
}

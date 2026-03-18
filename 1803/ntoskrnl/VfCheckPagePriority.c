/*
 * XREFs of VfCheckPagePriority @ 0x140815260
 * Callers:
 *     VfCheckNxPagePriority @ 0x1402A98A0 (VfCheckNxPagePriority.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140831B50 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1408154A0 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPagePriority(int a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // rbx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0x40000000) == 0 )
  {
    v3 = a1;
    ViCiPreprocessOptions(
      byte_14039D03C,
      "The caller 0x%p specified an executable MDL mapping (priority 0x%x).",
      (const void *)0x2002,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2002uLL, a2, v3, 0LL, byte_14039D03C);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 272LL);
    _InterlockedIncrement(&dword_1403AD1F8);
  }
}

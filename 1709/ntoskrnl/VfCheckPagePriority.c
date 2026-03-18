/*
 * XREFs of VfCheckPagePriority @ 0x1407A8230
 * Callers:
 *     VfCheckNxPagePriority @ 0x140276780 (VfCheckNxPagePriority.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1407C45E0 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1407A8474 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPagePriority(int a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // rbx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0x40000000) == 0 )
  {
    v3 = a1;
    ViCiPreprocessOptions(
      byte_1403599D0,
      "The caller 0x%p specified an executable MDL mapping (priority 0x%x).",
      (const void *)0x2002,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2002uLL, a2, v3, 0LL, byte_1403599D0);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 256LL);
    _InterlockedIncrement(&dword_14036A158);
  }
}

/*
 * XREFs of VfCheckPagePriority @ 0x140766694
 * Callers:
 *     VfCheckNxPagePriority @ 0x14024FF70 (VfCheckNxPagePriority.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140782250 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1407668D8 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPagePriority(int a1, __int64 a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0x40000000) == 0 )
  {
    ViCiPreprocessOptions(
      byte_14034133C,
      "The caller 0x%p specified an executable MDL mapping (priority 0x%x).",
      (const void *)0x2002,
      a2);
    VfReportIssueWithOptions(0xC4u, 8194, a2, a1, 0LL, byte_14034133C);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 256LL);
    _InterlockedIncrement(&dword_14034F6F8);
  }
}

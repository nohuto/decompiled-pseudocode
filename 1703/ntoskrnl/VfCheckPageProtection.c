/*
 * XREFs of VfCheckPageProtection @ 0x14076673C
 * Callers:
 *     VfCheckNxPageProtection @ 0x14024FF90 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1407818A0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x140781E20 (VerifierMmCreateSection.c)
 *     VerifierMmMapViewOfSection @ 0x140782380 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x140782640 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x140782950 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x1407829E0 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x1407838F0 (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x140784670 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x140785250 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x140785EC0 (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1407668D8 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(int a1, __int64 a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_140341338,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 8193, a2, a1, 0LL, byte_140341338);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 252LL);
    _InterlockedIncrement(&dword_14034F6F4);
  }
}

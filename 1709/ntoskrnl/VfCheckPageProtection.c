/*
 * XREFs of VfCheckPageProtection @ 0x1407A82D8
 * Callers:
 *     VfCheckNxPageProtection @ 0x1402767A0 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1407C3B10 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x1407C41B0 (VerifierMmCreateSection.c)
 *     VerifierMmMapViewOfSection @ 0x1407C4710 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x1407C49D0 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x1407C4CE0 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x1407C4D70 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x1407C5CC0 (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x1407C6A40 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x1407C7630 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x1407C82A0 (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1407A8474 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_1403599CC,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_1403599CC);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 252LL);
    _InterlockedIncrement(&dword_14036A154);
  }
}

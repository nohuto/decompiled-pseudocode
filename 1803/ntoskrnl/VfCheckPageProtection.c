/*
 * XREFs of VfCheckPageProtection @ 0x140815308
 * Callers:
 *     VfCheckNxPageProtection @ 0x1402A98C0 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140831070 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x1408316D0 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x140831A10 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x140831C70 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x140831F30 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x140832240 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x1408322D0 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x140833220 (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x140833FA0 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x140834B90 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x140835800 (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1408154A0 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_14039D04C,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_14039D04C);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 268LL);
    _InterlockedIncrement(&dword_1403AD1F4);
  }
}

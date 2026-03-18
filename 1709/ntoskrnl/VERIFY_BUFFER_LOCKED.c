/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x1407AA320
 * Callers:
 *     VfBuildScatterGatherList @ 0x1407AADD0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1407AB0C0 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1407ABC80 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1407ABFD0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1407AC3A0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1407AC560 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x1407A5AD4 (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)MmAreMdlPagesLocked((_DWORD *)a1) && !v2 )
  {
    ViHalPreprocessOptions(byte_1403599EC, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_1403599EC);
  }
}

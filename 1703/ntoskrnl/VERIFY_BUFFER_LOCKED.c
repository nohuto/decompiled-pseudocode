/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x1407686B8
 * Callers:
 *     VfBuildScatterGatherList @ 0x140769110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140769400 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140769FC0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14076A310 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14076A6D0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14076A890 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x140763D78 (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  if ( !(unsigned int)MmAreMdlPagesLocked(a1) )
  {
    ViHalPreprocessOptions(byte_140341350, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 14, v1, 0, 0LL, byte_140341350);
  }
}

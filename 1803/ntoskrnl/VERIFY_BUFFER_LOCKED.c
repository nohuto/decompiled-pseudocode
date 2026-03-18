/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x1408173A4
 * Callers:
 *     VfBuildScatterGatherList @ 0x140817F50 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140818240 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140818DF0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140819140 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140819510 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1408196D0 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x140812AA4 (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)MmAreMdlPagesLocked((_DWORD *)a1) && !v2 )
  {
    ViHalPreprocessOptions(byte_14039D064, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_14039D064);
  }
}

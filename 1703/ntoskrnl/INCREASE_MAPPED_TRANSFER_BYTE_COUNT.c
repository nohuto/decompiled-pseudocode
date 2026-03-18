/*
 * XREFs of INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x1407684F0
 * Callers:
 *     VfMapTransfer @ 0x14076A6D0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14076A890 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

void __fastcall INCREASE_MAPPED_TRANSFER_BYTE_COUNT(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // eax
  int v5; // ebx
  int v6; // edi

  v3 = *(_DWORD *)(a1 + 160) << 12;
  v4 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 188), a2);
  if ( !a3 && v4 > v3 )
  {
    v5 = v3;
    v6 = v4;
    ViHalPreprocessOptions(byte_140341360, "Driver did not flush adapter buffers -- bytes mapped: %x (%x max).", 13, v4);
    VfReportIssueWithOptions(0xE6u, 13, v6, v5, 0LL, byte_140341360);
  }
}

/*
 * XREFs of DECREMENT_COMMON_BUFFERS @ 0x1407683C8
 * Callers:
 *     VfFreeCommonBuffer @ 0x140769BD0 (VfFreeCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14076D104 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_COMMON_BUFFERS(__int64 a1)
{
  signed __int32 v2; // ebx
  unsigned int v3; // ecx
  unsigned __int32 v4; // ebx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v3 = *(_DWORD *)(a1 + 172);
  v4 = v2 + 1;
  if ( v4 > v3 )
  {
    ViHalPreprocessOptions(byte_140341368, "Freed too many common buffers.", 3LL, v4 - v3, 0LL, 0LL);
    VfReportIssueWithOptions(0xE6u, 3, v4 - *(_DWORD *)(a1 + 172), 0, 0LL, byte_140341368);
  }
}

/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x14076845C
 * Callers:
 *     VfBuildScatterGatherList @ 0x140769110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140769400 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140769FC0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14076A310 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x14076AD70 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 168));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_140341358,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 164));
    VfReportIssueWithOptions(0xE6u, 6, *(_DWORD *)(a1 + 164), *(_DWORD *)(a1 + 164) - v2, 0LL, byte_140341358);
  }
}

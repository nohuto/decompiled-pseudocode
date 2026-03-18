/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x140817148
 * Callers:
 *     VfBuildScatterGatherList @ 0x140817F50 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140818240 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140818DF0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140819140 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x140819BB0 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 168));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_14039D060,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 164));
    VfReportIssueWithOptions(
      0xE6u,
      6uLL,
      *(unsigned int *)(a1 + 164),
      (unsigned int)(*(_DWORD *)(a1 + 164) - v2),
      0LL,
      byte_14039D060);
  }
}

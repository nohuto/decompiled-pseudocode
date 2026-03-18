/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140817310
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1402A9F78 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x1408176D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1408178C0 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140818470 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140818830 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1408188E0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140818AD0 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x140819BB0 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140819D70 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_14039D074, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_14039D074);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}

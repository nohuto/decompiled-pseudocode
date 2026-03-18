/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140768624
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1402505F8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x1407689C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140768BA0 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140769630 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407699F0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140769AA0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140769CA0 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x14076AD70 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x14076AF30 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // ebx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_14034136C, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5, v4, 0, 0LL, byte_14034136C);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}

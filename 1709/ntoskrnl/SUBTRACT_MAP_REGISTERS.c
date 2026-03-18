/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x1407AA28C
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140276E58 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x1407AA640 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407AA820 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1407AB2F0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407AB6B0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1407AB760 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1407AB960 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x1407ACA40 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1407ACC00 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140359A00, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140359A00);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}

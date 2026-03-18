/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x14076832C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1407689C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140768BA0 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140769630 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407699F0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140769AA0 (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x14076AF30 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
  if ( *(_DWORD *)(a1 + 192) < 3u && v2 != *(_DWORD *)(a1 + 180) )
  {
    ViHalPreprocessOptions(byte_14034135C, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(0xE6u, 4, v2 != *(_DWORD *)(a1 + 180), 0, 0LL, byte_14034135C);
  }
}

/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x1407A9F94
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1407AA640 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407AA820 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1407AB2F0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407AB6B0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1407AB760 (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x1407ACC00 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
  if ( *(_DWORD *)(a1 + 192) < 3u && v2 != *(_DWORD *)(a1 + 180) )
  {
    ViHalPreprocessOptions(byte_1403599F0, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(0xE6u, 4uLL, v2 != *(_DWORD *)(a1 + 180), 0LL, 0LL, byte_1403599F0);
  }
}

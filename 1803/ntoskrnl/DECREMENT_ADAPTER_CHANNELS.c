/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x140817018
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1408176D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1408178C0 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140818470 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140818830 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1408188E0 (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x140819D70 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402AAB18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14081B448 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
  if ( *(_DWORD *)(a1 + 192) < 3u && v2 != *(_DWORD *)(a1 + 180) )
  {
    ViHalPreprocessOptions(byte_14039D06C, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(0xE6u, 4uLL, v2 != *(_DWORD *)(a1 + 180), 0LL, 0LL, byte_14039D06C);
  }
}

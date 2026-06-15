/*
 * XREFs of ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x1400547BC
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x1400554A0 (-GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140055560 (-GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140055660 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14001B9C0 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400550E4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::PeekNextTimestampMessage(
        CCrossProcessBaseEndpoint *this,
        struct SharedMessageQueueItem **a2)
{
  char v2; // bl
  __int64 v5; // rsi

  v2 = 0;
  v5 = **((unsigned int **)this + 8);
  if ( (_DWORD)v5 != *(_DWORD *)(*((_QWORD *)this + 8) + 4LL) )
  {
    if ( CCrossProcessBaseEndpoint::IsValidQueueIndex(this, v5) )
    {
      v2 = 1;
      *a2 = (struct SharedMessageQueueItem *)(*((_QWORD *)this + 14) + (v5 << 6));
    }
    else
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids,
          0);
      }
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::PeekNextTimestampMessage", 0x4F2u, -2147467259);
    }
  }
  return v2;
}

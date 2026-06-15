/*
 * XREFs of ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140054124
 * Callers:
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x1400559E0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14001B9C0 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400550E4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

bool __fastcall CCrossProcessBaseEndpoint::GetNextTimestampMessage(
        CCrossProcessBaseEndpoint *this,
        struct SharedMessageQueueItem *a2)
{
  __int32 v2; // ebx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax

  v2 = 0;
  v5 = **((unsigned int **)this + 8);
  if ( (_DWORD)v5 != *(_DWORD *)(*((_QWORD *)this + 8) + 4LL) )
  {
    if ( CCrossProcessBaseEndpoint::IsValidQueueIndex(this, v5) )
    {
      v6 = *((_QWORD *)this + 14);
      v7 = *(_OWORD *)((v5 << 6) + v6 + 16);
      *(_OWORD *)a2 = *(_OWORD *)((v5 << 6) + v6);
      v8 = *(_OWORD *)((v5 << 6) + v6 + 32);
      *((_OWORD *)a2 + 1) = v7;
      v9 = *(_OWORD *)((v5 << 6) + v6 + 48);
      v10 = *((_QWORD *)this + 9);
      *((_OWORD *)a2 + 2) = v8;
      *((_OWORD *)a2 + 3) = v9;
      if ( (_DWORD)v5 + 1 != *(_DWORD *)(v10 + 132) )
        v2 = v5 + 1;
      _InterlockedExchange(*((volatile __int32 **)this + 8), v2);
      LOBYTE(v2) = 1;
    }
    else
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Fu,
          (__int64)&WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids,
          0);
      }
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetNextTimestampMessage", 0x529u, -2147467259);
    }
  }
  return v2;
}

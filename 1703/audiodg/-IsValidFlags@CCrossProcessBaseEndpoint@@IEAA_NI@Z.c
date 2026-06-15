/*
 * XREFs of ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400546E8
 * Callers:
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x1400545D8 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x1400548C0 (-Reset@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140054C40 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140054D80 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140055660 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x1400559E0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     WPP_SF_s @ 0x140054F38 (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400550E4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x14006032C (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidFlags(CCrossProcessBaseEndpoint *this, int a2, unsigned __int8 a3)
{
  char v4; // bl

  if ( (a2 & 0xFFFFFFF8) == 0 )
    return 1;
  AEWMILOG_SECURITY((unsigned int)this, this, a3);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) )
  {
    WPP_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      35LL,
      &WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids,
      "Security failure - memory overwrite detected -invalid flags.");
  }
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 8) + 156LL), 0xFFFFFFFE);
  v4 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, (__int64)&WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids, 0);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidFlags", 0x628u, -2147467259);
  return v4;
}

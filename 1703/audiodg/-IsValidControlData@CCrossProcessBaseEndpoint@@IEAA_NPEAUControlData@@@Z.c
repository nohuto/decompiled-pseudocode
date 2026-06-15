/*
 * XREFs of ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x1400545D8
 * Callers:
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140054210 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14001B270 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14001B9C0 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400546E8 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400550E4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidControlData(CCrossProcessBaseEndpoint *this, struct ControlData *a2)
{
  char v2; // di
  unsigned int v5; // eax

  v2 = 0;
  if ( *((_DWORD *)a2 + 44) == 1162888004
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)((char *)a2 + 332)) >= 0
    && *((_DWORD *)a2 + 45) == *((unsigned __int16 *)a2 + 174) + 172LL )
  {
    v5 = *((_DWORD *)a2 + 81);
    if ( *((_DWORD *)a2 + 80) < v5
      && v5 <= *((_DWORD *)a2 + 82)
      && CCrossProcessBaseEndpoint::IsValidFlags(this, *((_DWORD *)a2 + 39))
      && (!*(_DWORD *)(*((_QWORD *)this + 9) + 132LL)
       || CCrossProcessBaseEndpoint::IsValidQueueIndex(this, *(_DWORD *)a2)
       && CCrossProcessBaseEndpoint::IsValidQueueIndex(this, *((_DWORD *)a2 + 1))) )
    {
      return 1;
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x28u,
      (__int64)&WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids,
      -2147467259);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidControlData", 0x6EAu, -2147467259);
  return v2;
}

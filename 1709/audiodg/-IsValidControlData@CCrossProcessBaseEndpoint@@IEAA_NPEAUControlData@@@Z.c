/*
 * XREFs of ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140056410
 * Callers:
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140056070 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14000E708 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140056520 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400565F4 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140056F64 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
      (__int64)&WPP_a656f1dc337437ce15896b73439d7644_Traceguids,
      -2147467259);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidControlData", 0x6EEu, -2147467259);
  return v2;
}

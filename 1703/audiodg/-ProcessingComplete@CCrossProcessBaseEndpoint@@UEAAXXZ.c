/*
 * XREFs of ?ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ @ 0x140054880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 */

void __fastcall CCrossProcessBaseEndpoint::ProcessingComplete(CCrossProcessBaseEndpoint *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids);
  }
}

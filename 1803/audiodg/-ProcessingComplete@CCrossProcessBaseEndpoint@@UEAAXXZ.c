/*
 * XREFs of ?ProcessingComplete@CCrossProcessBaseEndpoint@@UEAAXXZ @ 0x1400543B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 */

void __fastcall CCrossProcessBaseEndpoint::ProcessingComplete(CCrossProcessBaseEndpoint *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids);
  }
}

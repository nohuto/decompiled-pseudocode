/*
 * XREFs of ?GetCharacteristics@CCrossProcessBaseClientEndpoint@@UEAAJPEAK@Z @ 0x140055AB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140056F64 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetCharacteristics(
        CCrossProcessBaseClientEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx

  if ( a2 )
    *a2 = 1;
  v2 = -2147467261;
  if ( a2 )
  {
    return 0;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_a656f1dc337437ce15896b73439d7644_Traceguids,
        -2147467261);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetCharacteristics", 0x4C4u, -2147467261);
  }
  return v2;
}

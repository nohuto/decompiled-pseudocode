/*
 * XREFs of ?GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z @ 0x140053AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetFrequency(
        CCrossProcessBaseClientEndpoint *this,
        unsigned __int64 *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this - 84, 1, 1) )
    {
      *a2 = *(unsigned int *)(*((_QWORD *)this - 40) + 160LL);
      return v2;
    }
    v2 = -2005139437;
  }
  else
  {
    v2 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids, v2);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetFrequency", 0x49Eu, v2);
  return v2;
}

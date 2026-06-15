/*
 * XREFs of ?GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x1400559E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140056F64 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetBufferSize(
        CCrossProcessBaseClientEndpoint *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 368);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 368));
  if ( a2 )
  {
    if ( *((_DWORD *)this - 82) )
      *a2 = *((_DWORD *)this - 62) / *((_DWORD *)this - 76);
    else
      v5 = -2005139437;
  }
  else
  {
    v5 = -2147467261;
  }
  LeaveCriticalSection(v2);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Au,
        (__int64)&WPP_a656f1dc337437ce15896b73439d7644_Traceguids,
        v5);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetBufferSize", 0x439u, v5);
  }
  return (unsigned int)v5;
}

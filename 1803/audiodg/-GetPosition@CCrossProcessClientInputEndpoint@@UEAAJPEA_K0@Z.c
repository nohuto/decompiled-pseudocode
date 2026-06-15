/*
 * XREFs of ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140055730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z @ 0x140053514 (-AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetPosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 **a3)
{
  int v3; // ebx
  unsigned __int64 *v5; // rcx

  v3 = 0;
  if ( a2 )
  {
    v5 = *(unsigned __int64 **)(*((_QWORD *)this - 41) + 8LL);
    *a2 = (unsigned __int64)v5;
    if ( a3 )
    {
      *a3 = *(unsigned __int64 **)(*((_QWORD *)this - 41) + 48LL);
      v5 = (unsigned __int64 *)*a2;
    }
    *((_QWORD *)this - 28) = v5;
  }
  else
  {
    v3 = -2147467261;
  }
  if ( a3 )
    a3 = (unsigned __int64 **)*a3;
  if ( a2 )
    a2 = (unsigned __int64 *)*a2;
  AEWMILOG_GENERIC(
    *((_QWORD *)this - 41),
    0LL,
    (__int64)a3,
    6u,
    (unsigned __int64)a2,
    (unsigned __int64)a3,
    *(_QWORD *)(*((_QWORD *)this - 41) + 8LL),
    *(_QWORD *)(*((_QWORD *)this - 41) + 16LL),
    0.0,
    0.0,
    0.0,
    0.0);
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_dcd19a18f5fb3b8a76e3954460199d59_Traceguids, v3);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientInputEndpoint::GetPosition", 0x170u, v3);
  }
  return (unsigned int)v3;
}

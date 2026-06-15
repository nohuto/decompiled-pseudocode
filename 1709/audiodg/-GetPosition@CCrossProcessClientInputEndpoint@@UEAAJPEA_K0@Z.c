/*
 * XREFs of ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140057B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z @ 0x140055874 (-AEWMILOG_GENERIC@@YAXKPEAXEE_K111NNNN@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140056F64 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetPosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 **a3)
{
  int v3; // ebx

  v3 = 0;
  if ( a2 )
  {
    *a2 = *(_QWORD *)(*((_QWORD *)this - 41) + 8LL);
    if ( a3 )
      *a3 = *(unsigned __int64 **)(*((_QWORD *)this - 41) + 48LL);
    *((_QWORD *)this - 28) = *a2;
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
    6,
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
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_a8571901f4c33f060e5534b2941ccee6_Traceguids, v3);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientInputEndpoint::GetPosition", 368, v3);
  }
  return (unsigned int)v3;
}

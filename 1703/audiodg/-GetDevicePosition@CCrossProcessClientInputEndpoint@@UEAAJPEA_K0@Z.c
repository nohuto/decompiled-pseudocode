/*
 * XREFs of ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140055560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x1400547BC (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400550E4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x140060288 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetDevicePosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned __int8 v7; // r8
  struct SharedMessageQueueItem *v8; // rcx
  unsigned __int64 v9; // rax
  struct SharedMessageQueueItem *v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    v11 = 0LL;
    if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage(
            (CCrossProcessClientInputEndpoint *)((char *)this - 400),
            &v11) )
    {
      v8 = v11;
      *a2 = *((_QWORD *)v11 + 2);
      if ( a3 )
      {
        v9 = *((_QWORD *)v8 + 5);
        *a3 = v9;
      }
      else
      {
        v9 = 0LL;
      }
      AEWMILOG_POSITION(*a2, 0LL, v7, 7u, 0LL, *a2, 0LL, v9);
    }
    *((_QWORD *)this - 28) = *a2;
  }
  else
  {
    v3 = -2147467261;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_a8571901f4c33f060e5534b2941ccee6_Traceguids,
        -2147467261);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientInputEndpoint::GetDevicePosition", 440, -2147467261);
  }
  return v3;
}

/*
 * XREFs of ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x1400553A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x1400542F4 (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x14006013C (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetDevicePosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned __int8 v7; // r8
  struct SharedMessageQueueItem *v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  struct SharedMessageQueueItem *v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    v12 = 0LL;
    if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage(
            (CCrossProcessClientInputEndpoint *)((char *)this - 400),
            &v12) )
    {
      v8 = v12;
      v9 = *((_QWORD *)v12 + 2);
      *a2 = v9;
      if ( a3 )
      {
        v10 = *((_QWORD *)v8 + 5);
        *a3 = v10;
        v9 = *a2;
      }
      else
      {
        v10 = 0LL;
      }
      AEWMILOG_POSITION(v9, 0LL, v7, 7u, 0LL, v9, 0LL, v10);
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
        (__int64)&WPP_dcd19a18f5fb3b8a76e3954460199d59_Traceguids,
        -2147467261);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessClientInputEndpoint::GetDevicePosition", 0x1B8u, -2147467261);
  }
  return v3;
}

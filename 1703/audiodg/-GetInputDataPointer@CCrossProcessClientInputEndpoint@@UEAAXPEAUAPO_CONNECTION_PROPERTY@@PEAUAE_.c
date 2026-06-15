/*
 * XREFs of ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140055660
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@I@Z @ 0x140031C50 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@I@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400546E8 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z @ 0x1400547BC (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@@Z.c)
 *     WPP_SF_s @ 0x140054F38 (WPP_SF_s.c)
 *     Template_pq @ 0x140055B0C (Template_pq.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x1400600F0 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x14006032C (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1400603A0 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  char *v3; // rsi
  unsigned __int8 v7; // r8
  UINT32 u32ValidFrameCount; // r15d
  unsigned int v9; // ecx
  unsigned __int8 v10; // r8
  unsigned int v11; // ecx
  __int64 v12; // rcx
  unsigned int v13; // edx
  struct SharedMessageQueueItem *v14; // rax
  __int64 v15; // rcx
  struct SharedMessageQueueItem *v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = (char *)this - 432;
  AEWMILOG_DATA(
    (unsigned int)this,
    (char *)this - 432,
    (unsigned __int8)a3,
    0xDu,
    a2->u32ValidFrameCount,
    a2->u32BufferFlags,
    0LL);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  *((_DWORD *)this + 4) = 2;
  if ( a3 )
  {
    memset(a3, 0, sizeof(struct AE_CURRENT_POSITION));
    a3->Flag = POSITION_INVALID;
  }
  if ( !CCrossProcessBaseEndpoint::IsValidFlags(
          (CCrossProcessBaseEndpoint *)v3,
          *(_DWORD *)(*((_QWORD *)this - 46) + 156LL),
          v7) )
  {
    AEWMILOG_SECURITY(v9, v3, v10);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 46) + 156LL), 0xFFFFFFFE);
    goto LABEL_5;
  }
  if ( !u32ValidFrameCount )
    goto LABEL_5;
  if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage((CCrossProcessBaseEndpoint *)v3, &v16) )
  {
    AEWMILOG_GLITCH(v11, v3, v10, 2u, 0LL, 0LL, 0LL, 0LL);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pq(v12, &EVT_GLITCH_CP_CLIENT_INPUT_NO_MESSAGES, v3);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        &WPP_a8571901f4c33f060e5534b2941ccee6_Traceguids,
        "Security failure - memory overwrite detected.");
    }
    v13 = 1;
LABEL_16:
    CCrossProcessEndpointTraceLogger::Glitch((__int64)this - 248, v13);
    goto LABEL_5;
  }
  v14 = v16;
  if ( *((_DWORD *)v16 + 14) != u32ValidFrameCount )
  {
    AEWMILOG_GLITCH(v11, v3, v10, 2u, 1uLL, 1uLL, 1uLL, 1uLL);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pq(v15, &EVT_GLITCH_CP_CLIENT_INPUT_SIZE_MISMATCH, v3);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xBu,
        &WPP_a8571901f4c33f060e5534b2941ccee6_Traceguids,
        "Security failure - memory overwrite detected.");
    }
    v13 = 2;
    goto LABEL_16;
  }
  if ( a3 )
  {
    *(_OWORD *)&a3->u64DevicePosition = *((_OWORD *)v16 + 1);
    *(_OWORD *)&a3->u64PaddingFrames = *((_OWORD *)v14 + 2);
    *(_QWORD *)&a3->f32FramesPerSecond = *((_QWORD *)v14 + 6);
  }
  if ( *((_DWORD *)v14 + 2) != 2 )
  {
    a2->u32BufferFlags = BUFFER_VALID;
    a2->pBuffer = *((_QWORD *)this - 46) + *((unsigned int *)v14 + 1);
    *((_DWORD *)this + 4) = 0;
    goto LABEL_6;
  }
  *((_DWORD *)this + 4) = 0;
LABEL_5:
  _InterlockedExchange((volatile __int32 *)this - 72, 1);
  a2->pBuffer = *((_QWORD *)this - 41);
  a2->u32BufferFlags = BUFFER_SILENT;
LABEL_6:
  AEWMILOG_DATA(a2->u32ValidFrameCount, v3, v10, 0xEu, a2->u32ValidFrameCount, 0LL, a2->u32BufferFlags);
}

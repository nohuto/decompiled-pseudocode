/*
 * XREFs of ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000D5F4
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007580 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x14000D6A0 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140017D10 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::CreateStreamInstance(
        CPipeInstance *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct SYSTEM_AUDIO_STREAM *a3)
{
  __int64 v3; // rax
  CStreamProcessNode *v6; // rbp
  int StreamInstance; // ebx

  v3 = *((_QWORD *)this + 2);
  if ( !v3 )
    ATL::AtlThrowImpl(-2147467259);
  v6 = *(CStreamProcessNode **)(v3 + 16);
  StreamInstance = CStreamProcessNode::CreateStreamInstance(
                     v6,
                     a2,
                     (unsigned int)(int)((double)*((int *)this + 34)
                                       * 10000000.0
                                       / (double)*(int *)(*((_QWORD *)a2 + 10) + 4LL)
                                       + 0.5),
                     *((_DWORD *)this + 34),
                     a3);
  if ( StreamInstance < 0
    || (StreamInstance = CPipeInstance::EngageSpatialAudioStreamProcessorAPO(this, v6, a2), StreamInstance < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        (unsigned int)StreamInstance);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamInstance", 0x3FBu, StreamInstance);
  }
  return (unsigned int)StreamInstance;
}

/*
 * XREFs of ??1?$CWatchdogTimer@$01@@QEAA@XZ @ 0x140001918
 * Callers:
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400025F0 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005A10 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140012AF0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$0 @ 0x14001F7F0 (_CSubmixImpl--CreateStream_--_1_--dtor$0.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140042C60 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$0 @ 0x14004312F (_CStreamGroup--CreateBridgeStream_--_1_--dtor$0.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400431D0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$0 @ 0x1400433B9 (_CStreamGroup--CreateStream_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWatchdogTimer<2>::~CWatchdogTimer<2>(__int64 a1)
{
  struct _TP_TIMER *v2; // rcx
  __int64 v3; // rcx

  v2 = *(struct _TP_TIMER **)a1;
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)a1, 1);
    CloseThreadpoolTimer(*(PTP_TIMER *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  if ( *(_BYTE *)(a1 + 40) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
}

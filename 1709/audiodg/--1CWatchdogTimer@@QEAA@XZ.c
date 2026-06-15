/*
 * XREFs of ??1CWatchdogTimer@@QEAA@XZ @ 0x140001310
 * Callers:
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400018D0 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FB00 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011570 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$0 @ 0x140021470 (_CSubmixImpl--CreateStream_--_1_--dtor$0.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140044310 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$0 @ 0x14004483C (_CStreamGroup--CreateBridgeStream_--_1_--dtor$0.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400448E0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$0 @ 0x140044B26 (_CStreamGroup--CreateStream_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWatchdogTimer::~CWatchdogTimer(HANDLE *this)
{
  HANDLE v2; // rcx

  if ( *this )
  {
    DeleteTimerQueueTimer(0LL, *this, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    *this = 0LL;
  }
  if ( *((_BYTE *)this + 40) )
  {
    v2 = this[4];
    if ( v2 )
      (*(void (__fastcall **)(HANDLE, HANDLE))(*(_QWORD *)v2 + 8LL))(v2, this[1]);
  }
}

/*
 * XREFs of ??1CWatchdogTimer@@QEAA@XZ @ 0x1400313A0
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007580 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$0 @ 0x140020B70 (_CSubmixImpl--CreateStream_--_1_--dtor$0.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140043970 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$0 @ 0x140043E90 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$0.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140043F30 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$0 @ 0x140044176 (_CStreamGroup--CreateStream_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWatchdogTimer::~CWatchdogTimer(HANDLE *this)
{
  HANDLE v2; // rcx

  if ( *this )
  {
    DeleteTimerQueueTimer(0LL, *this, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    *this = 0LL;
  }
  v2 = this[4];
  if ( v2 )
    (*(void (__fastcall **)(HANDLE, HANDLE, HANDLE))(*(_QWORD *)v2 + 8LL))(v2, this[3], this[1]);
}

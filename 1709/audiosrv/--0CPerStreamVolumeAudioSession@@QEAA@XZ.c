/*
 * XREFs of ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x18002D03C
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ??0CAudioSession@@IEAA@XZ @ 0x18001A44C (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001B028 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
CPerStreamVolumeAudioSession *__fastcall CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession(
        CPerStreamVolumeAudioSession *this)
{
  CAudioSession::CAudioSession(this);
  *(_QWORD *)this = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CPerStreamVolumeAudioSession::`vftable'{for `CUnknown'};
  *((_BYTE *)this + 1040) = 1;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 1048));
  *((_QWORD *)this + 136) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 1096));
  *((_QWORD *)this + 142) = 0LL;
  return this;
}

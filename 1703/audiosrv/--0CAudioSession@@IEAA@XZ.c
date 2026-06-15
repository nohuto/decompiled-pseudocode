/*
 * XREFs of ??0CAudioSession@@IEAA@XZ @ 0x180015C90
 * Callers:
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x18001D53C (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800929CC (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FAB4 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18002E968 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     ??0?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAA@IMMMI@Z @ 0x180033B44 (--0-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

CAudioSession *__fastcall CAudioSession::CAudioSession(CAudioSession *this)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d

  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 48));
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 128));
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 200));
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 272));
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_WORD *)this + 186) = 0;
  *((_BYTE *)this + 374) = 0;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 96) = 180000;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 392, &ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>((char *)this + 400, &ATL::g_strmgr);
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 424));
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 504));
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>(
    (_DWORD)this + 544,
    v2,
    v3,
    v4,
    LODWORD(FLOAT_2_25));
  *((_DWORD *)this + 154) = 0;
  *((_BYTE *)this + 620) = 0;
  *((_QWORD *)this + 78) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 632));
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_DWORD *)this + 174) = 0;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_DWORD *)this + 182) = 0;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 752));
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSession *)((char *)this + 792));
  *((_QWORD *)this + 109) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 880));
  *((_QWORD *)this + 115) = 1065353216LL;
  AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry((CAudioSession *)((char *)this + 936));
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 117) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  *((_QWORD *)this + 127) = 0LL;
  *((_DWORD *)this + 256) = 0;
  *((_DWORD *)this + 258) = 0;
  *((_QWORD *)this + 130) = 0LL;
  *((_BYTE *)this + 1048) = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, this);
  }
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 121) = 0;
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 484));
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 492));
  *((_QWORD *)this + 58) = GetTickCount64();
  return this;
}

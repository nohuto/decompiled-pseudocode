/*
 * XREFs of ??0CAudioStream@@QEAA@_N00KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@0W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180019BA0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     WPP_SF_qdd @ 0x180090C54 (WPP_SF_qdd.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAudioStream::CAudioStream(__int64 a1, char a2, char a3, char a4, int a5, int a6, char a7, int a8)
{
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)a1 = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 8) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *(_QWORD *)(a1 + 16) = &CAudioStream::`vftable'{for `CUnknown'};
  *(_DWORD *)(a1 + 36) = 1;
  *(_BYTE *)(a1 + 40) = a2;
  *(_BYTE *)(a1 + 41) = a4;
  *(_BYTE *)(a1 + 42) = a3;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 1065353216;
  *(_BYTE *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(a1 + 136));
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = &AudioSrvVolumeTelemetry::`vftable';
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 240) = 0;
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(a1 + 248));
  *(_QWORD *)(a1 + 216) = &AudioSrvVolumeTelemetryStreamVolume::`vftable';
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 15LL;
  *(_BYTE *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 7LL;
  *(_WORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 7LL;
  *(_WORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_BYTE *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 404) = -1;
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(a1 + 408));
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_DWORD *)(a1 + 488) = 10;
  *(_DWORD *)(a1 + 496) = 255;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_DWORD *)(a1 + 536) = a5;
  *(_DWORD *)(a1 + 540) = a8;
  *(_DWORD *)(a1 + 544) = a6;
  *(_BYTE *)(a1 + 548) = a7;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids, a1, a8, a5);
  }
  return a1;
}

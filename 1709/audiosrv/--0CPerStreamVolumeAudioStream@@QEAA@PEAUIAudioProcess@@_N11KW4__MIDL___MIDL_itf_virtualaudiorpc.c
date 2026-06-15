/*
 * XREFs of ??0CPerStreamVolumeAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@11W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18002D954
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@11W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18001D048 (--0CAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::CPerStreamVolumeAudioStream(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        int a6,
        int a7,
        char a8,
        char a9,
        int a10)
{
  CAudioStream::CAudioStream(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  *(_QWORD *)a1 = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 8) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *(_QWORD *)(a1 + 16) = &CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_BYTE *)(a1 + 568) = 0;
  return a1;
}

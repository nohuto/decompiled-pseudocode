/*
 * XREFs of ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@11W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18001D048
 * Callers:
 *     ??0CPerStreamVolumeAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@11W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18002D954 (--0CPerStreamVolumeAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc.c)
 * Callees:
 *     ??0AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x180011920 (--0AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001B028 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CAudioStream::CAudioStream(
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
  int v12; // r15d
  signed __int64 v13; // rax
  __int64 v14; // rsi
  WINBOOL fPending; // [rsp+38h] [rbp-A9h] BYREF
  int v17; // [rsp+3Ch] [rbp-A5h] BYREF
  __int64 v18; // [rsp+40h] [rbp-A1h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-99h] BYREF
  _DWORD v20[2]; // [rsp+50h] [rbp-91h] BYREF
  __int64 v21; // [rsp+58h] [rbp-89h]
  __int64 v22; // [rsp+60h] [rbp-81h]
  __int64 v23; // [rsp+68h] [rbp-79h]
  unsigned __int16 *v24; // [rsp+78h] [rbp-69h] BYREF
  int v25; // [rsp+80h] [rbp-61h]
  int v26; // [rsp+84h] [rbp-5Dh]
  void *v27; // [rsp+88h] [rbp-59h]
  int v28; // [rsp+90h] [rbp-51h]
  int v29; // [rsp+94h] [rbp-4Dh]
  int *v30; // [rsp+98h] [rbp-49h]
  __int64 v31; // [rsp+A0h] [rbp-41h]
  __int64 *v32; // [rsp+A8h] [rbp-39h]
  __int64 v33; // [rsp+B0h] [rbp-31h]
  __int64 v34; // [rsp+B8h] [rbp-29h]
  __int64 v35; // [rsp+C0h] [rbp-21h]
  int *v36; // [rsp+C8h] [rbp-19h]
  __int64 v37; // [rsp+D0h] [rbp-11h]

  v22 = -2LL;
  v23 = a1;
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)a1 = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 8) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *(_QWORD *)(a1 + 16) = &CAudioStream::`vftable'{for `CUnknown'};
  *(_DWORD *)(a1 + 36) = 1;
  *(_BYTE *)(a1 + 40) = a3;
  *(_BYTE *)(a1 + 41) = a5;
  *(_BYTE *)(a1 + 42) = a4;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 1065353216;
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 128) = a9;
  *(_DWORD *)(a1 + 132) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 136));
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  AudioSrvVolumeTelemetryStreamVolume::AudioSrvVolumeTelemetryStreamVolume((AudioSrvVolumeTelemetryStreamVolume *)(a1 + 216));
  *(_BYTE *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 404) = -1;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 408));
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
  *(_DWORD *)(a1 + 536) = a6;
  v12 = a10;
  *(_DWORD *)(a1 + 540) = a10;
  *(_DWORD *)(a1 + 544) = a7;
  *(_BYTE *)(a1 + 548) = a8;
  do
  {
    v13 = _InterlockedExchangeAdd64(&CAudioStream::s_llStreamIdentifier, 1uLL);
    *(_QWORD *)(a1 + 528) = v13 + 1;
  }
  while ( v13 == -1 );
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v14 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v14 > 4u )
  {
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    v30 = &v17;
    v31 = 4LL;
    LODWORD(v18) = v12;
    v32 = &v18;
    v33 = 4LL;
    v34 = a1 + 528;
    v35 = 8LL;
    v36 = &a6;
    v37 = 4LL;
    v20[0] = ((unsigned int)&unk_18010F10A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v20[1] = 4;
    v21 = 0LL;
    v24 = *(unsigned __int16 **)(v14 + 8);
    v25 = *v24;
    v26 = 2;
    v27 = &unk_18010F115;
    v28 = 66;
    v29 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v14 + 32), v20, 0LL, 0LL, 6, &v24);
  }
  return a1;
}

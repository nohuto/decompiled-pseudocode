/*
 * XREFs of ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18002F260
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023A10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180017D54 (TraceLoggingRegisterEx.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002FE5C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CAudioStream::CAudioStream(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, int a6)
{
  bool v9; // al
  signed __int64 v10; // rax
  __int64 v11; // rbx
  TLG_PENABLECALLBACK v13; // rdx
  PVOID v14; // r8
  LPVOID Context; // [rsp+30h] [rbp-99h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-91h] BYREF
  int v17; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v18; // [rsp+40h] [rbp-89h] BYREF
  _DWORD v19[2]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v20; // [rsp+50h] [rbp-79h]
  __int64 v21; // [rsp+58h] [rbp-71h]
  __int64 v22; // [rsp+60h] [rbp-69h]
  unsigned __int16 *v23; // [rsp+70h] [rbp-59h] BYREF
  int v24; // [rsp+78h] [rbp-51h]
  int v25; // [rsp+7Ch] [rbp-4Dh]
  void *v26; // [rsp+80h] [rbp-49h]
  int v27; // [rsp+88h] [rbp-41h]
  int v28; // [rsp+8Ch] [rbp-3Dh]
  int *v29; // [rsp+90h] [rbp-39h]
  __int64 v30; // [rsp+98h] [rbp-31h]
  int *v31; // [rsp+A0h] [rbp-29h]
  __int64 v32; // [rsp+A8h] [rbp-21h]
  __int64 v33; // [rsp+B0h] [rbp-19h]
  __int64 v34; // [rsp+B8h] [rbp-11h]
  __int64 v35; // [rsp+C0h] [rbp-9h]
  __int64 v36; // [rsp+C8h] [rbp-1h]

  v21 = -2LL;
  v22 = a1;
  *(_DWORD *)(a1 + 32) = 1;
  *(_QWORD *)a1 = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 8) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *(_QWORD *)(a1 + 16) = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
  *(_QWORD *)(a1 + 24) = &CAudioStream::`vftable'{for `CUnknown'};
  *(_DWORD *)(a1 + 44) = 1;
  *(_BYTE *)(a1 + 48) = a3;
  *(_BYTE *)(a1 + 49) = (a4 & 1) != 0;
  v9 = (a4 & 0x200000) != 0 || a6 == 2;
  *(_BYTE *)(a1 + 50) = v9;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 1065353216;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 128) = *(_DWORD *)(a5 + 112) != 0;
  *(_DWORD *)(a1 + 132) = 0;
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(a1 + 136));
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  Context = (LPVOID)(a1 + 232);
  *(_QWORD *)(a1 + 232) = &AudioSrvVolumeTelemetry::`vftable';
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 256) = 0;
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(a1 + 264));
  *(_QWORD *)(a1 + 232) = &AudioSrvVolumeTelemetryStreamVolume::`vftable';
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 15LL;
  *(_BYTE *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 7LL;
  *(_WORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 7LL;
  *(_WORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_BYTE *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 420) = -1;
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(a1 + 424));
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_DWORD *)(a1 + 504) = 10;
  *(_DWORD *)(a1 + 512) = 255;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_DWORD *)(a1 + 552) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(a1 + 556) = a6;
  *(_DWORD *)(a1 + 560) = *(_DWORD *)(a5 + 28);
  *(_BYTE *)(a1 + 564) = *(_DWORD *)(a5 + 36) != 0;
  *(_OWORD *)(a1 + 568) = *(_OWORD *)a5;
  *(_DWORD *)(a1 + 584) = a4;
  *(_OWORD *)(a1 + 592) = *(_OWORD *)(a5 + 48);
  *(_OWORD *)(a1 + 608) = *(_OWORD *)(a5 + 64);
  *(_OWORD *)(a1 + 624) = *(_OWORD *)(a5 + 80);
  *(_QWORD *)(a1 + 640) = 0LL;
  *(_DWORD *)(a1 + 632) = 0;
  do
  {
    v10 = _InterlockedExchangeAdd64(&CAudioStream::s_llStreamIdentifier, 1uLL);
    *(_QWORD *)(a1 + 544) = v10 + 1;
  }
  while ( v10 == -1 );
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    qword_18018A2A8 = (__int64)qword_18018A2B8;
    byte_18018A2B0 = 1;
    TraceLoggingRegisterEx(qword_18018A2B8, v13, v14);
    dword_18018A2B4 = 1;
    (*(void (__fastcall **)(void *))(qword_18018A2A0 + 8LL))(&qword_18018A2A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18018A2A0);
  }
  v11 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 4u )
  {
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    v29 = &v17;
    v30 = 4LL;
    v18 = a6;
    v31 = &v18;
    v32 = 4LL;
    v33 = a1 + 544;
    v34 = 8LL;
    v35 = a1 + 552;
    v36 = 4LL;
    v19[0] = ((unsigned int)&unk_180145594 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v19[1] = 4;
    v20 = 0LL;
    v23 = *(unsigned __int16 **)(v11 + 8);
    v24 = *v23;
    v25 = 2;
    v26 = &unk_18014559F;
    v27 = 66;
    v28 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v11 + 32), v19, 0LL, 0LL, 6, &v23, (_DWORD)Context);
  }
  return a1;
}

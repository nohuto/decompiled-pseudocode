/*
 * XREFs of ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001A800
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180017D54 (TraceLoggingRegisterEx.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001D6B0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphManager::ConnectStreamGroupToSaDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, __int64); // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned __int16 *v11; // rax
  __int64 v12; // rcx
  TLG_PENABLECALLBACK v14; // rdx
  PVOID v15; // r8
  int v16; // [rsp+20h] [rbp-61h]
  WINBOOL fPending; // [rsp+30h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-49h] BYREF
  __int64 v19; // [rsp+40h] [rbp-41h] BYREF
  __int64 v20; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v21[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v22; // [rsp+58h] [rbp-29h]
  unsigned __int16 *v23; // [rsp+60h] [rbp-21h] BYREF
  int v24; // [rsp+68h] [rbp-19h]
  int v25; // [rsp+6Ch] [rbp-15h]
  void *v26; // [rsp+70h] [rbp-11h]
  int v27; // [rsp+78h] [rbp-9h]
  int v28; // [rsp+7Ch] [rbp-5h]
  __int64 *v29; // [rsp+80h] [rbp-1h]
  __int64 v30; // [rsp+88h] [rbp+7h]
  __int64 *v31; // [rsp+90h] [rbp+Fh]
  __int64 v32; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v7 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 192LL);
  if ( v7 == CSharedStreamGroupProxy::ConnectToSaDevice )
    v8 = CSharedStreamGroupProxy::ConnectToSaDevice(a2, a3, a4, a5);
  else
    v8 = v7(a2, a3, a4, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v8,
      v16);
    return v9;
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_18018A2A0;
      qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
      qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      qword_18018A2A8 = (__int64)qword_18018A2B8;
      byte_18018A2B0 = 1;
      TraceLoggingRegisterEx(qword_18018A2B8, v14, v15);
      dword_18018A2B4 = 1;
      (*(void (__fastcall **)(void *))(qword_18018A2A0 + 8LL))(&qword_18018A2A0);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18018A2A0);
    }
    v10 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 4u )
    {
      v19 = a2;
      v29 = &v19;
      v31 = &v20;
      v30 = 8LL;
      v20 = a3;
      v32 = 8LL;
      v21[1] = 4;
      v11 = *(unsigned __int16 **)(v10 + 8);
      v12 = *(_QWORD *)(v10 + 32);
      v23 = v11;
      v21[0] = ((unsigned int)&unk_180145C68 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v22 = 0LL;
      v24 = *v11;
      v26 = &unk_180145C73;
      v25 = 2;
      v27 = 57;
      v28 = 1;
      EtwEventWriteTransfer(v12, v21, 0LL, 0LL, 4, &v23, fPending);
    }
    return 0LL;
  }
}

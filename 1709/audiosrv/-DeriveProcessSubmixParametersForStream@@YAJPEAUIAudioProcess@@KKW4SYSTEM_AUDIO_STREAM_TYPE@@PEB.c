/*
 * XREFs of ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x18000799C
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800075B0 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x180007BC0 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall DeriveProcessSubmixParametersForStream(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, char *a6)
{
  _QWORD *v8; // rdi
  void *v9; // rbx
  bool v10; // al
  void *v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-69h]
  __int64 v17; // [rsp+30h] [rbp-59h] BYREF
  __int64 fPending; // [rsp+38h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v20[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v21; // [rsp+50h] [rbp-39h]
  char v22; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int16 *v23; // [rsp+60h] [rbp-29h] BYREF
  int v24; // [rsp+68h] [rbp-21h]
  int v25; // [rsp+6Ch] [rbp-1Dh]
  void *v26; // [rsp+70h] [rbp-19h]
  int v27; // [rsp+78h] [rbp-11h]
  int v28; // [rsp+7Ch] [rbp-Dh]
  char *v29; // [rsp+80h] [rbp-9h]
  int v30; // [rsp+88h] [rbp-1h]
  int v31; // [rsp+8Ch] [rbp+3h]
  __int64 *v32; // [rsp+90h] [rbp+7h]
  int v33; // [rsp+98h] [rbp+Fh]
  int v34; // [rsp+9Ch] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+4Fh]

  if ( a4 || *(_BYTE *)(a5 + 48) )
    goto LABEL_11;
  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    *v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8;
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x376,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x8007000ELL,
      v16);
    return 2147942414LL;
  }
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v8, a1);
  v10 = a3 != 3 && a3 != 8;
  *((_BYTE *)v8 + 8) = v10;
  v8[2] = a5;
  if ( a6 == &v22 )
  {
LABEL_24:
    if ( v9 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v9);
      operator delete(v9, (const struct std::nothrow_t *)0x18);
    }
    goto LABEL_11;
  }
  v11 = *(void **)a6;
  v9 = 0LL;
  *(_QWORD *)a6 = v8;
  if ( v11 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
    operator delete(v11, (const struct std::nothrow_t *)0x18);
    goto LABEL_24;
  }
LABEL_11:
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context);
  if ( (_DWORD)fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v12 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v12 > 5u )
  {
    if ( *(_QWORD *)a6 )
      HIDWORD(v17) = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a6 + 40LL))(**(_QWORD **)a6);
    else
      HIDWORD(v17) = 0;
    v31 = 0;
    v29 = (char *)&v17 + 4;
    v13 = *(_QWORD *)a6;
    v30 = 4;
    if ( v13 )
      LOBYTE(v17) = *(_BYTE *)(v13 + 8);
    else
      LOBYTE(v17) = 0;
    v34 = 0;
    v32 = &v17;
    v33 = 1;
    v21 = 0LL;
    v20[1] = 5;
    v23 = *(unsigned __int16 **)(v12 + 8);
    v20[0] = ((unsigned int)&unk_1801105A1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v14 = *(_QWORD *)(v12 + 32);
    v24 = *v23;
    v26 = &unk_1801105AC;
    v25 = 2;
    v27 = 39;
    v28 = 1;
    EtwEventWriteTransfer(v14, v20, 0LL, 0LL, 4, &v23, v17, fPending);
  }
  return 0LL;
}

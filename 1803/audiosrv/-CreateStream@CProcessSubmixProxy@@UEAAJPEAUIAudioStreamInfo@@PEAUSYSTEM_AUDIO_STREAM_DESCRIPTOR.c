/*
 * XREFs of ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CEE0
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B070 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18001CB50 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001EDA0 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18002F700 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180063948 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800CAFA4 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800CB02C (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800CB0B0 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::CreateStream(
        CProcessSubmixProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SYSTEM_AUDIO_STREAM *a6)
{
  CBaseStreamGroupProxy *v8; // rcx
  __int64 (*v11)(void); // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  void *v18; // r8
  __int64 v19; // rbx
  CProcessSubmixProxy *v20; // rcx
  __int64 v21; // rax
  __int64 (__fastcall *v22)(CAudioStream *__hidden); // rax
  __int64 UniqueStreamIdentifier; // rax
  __int64 v24; // rcx
  signed __int64 *v25; // rbx
  CProcessSubmixProxy *v26; // rax
  __int64 (__fastcall *v27)(); // rax
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  bool (__fastcall *v30)(CAudioStream *__hidden); // rax
  bool v31; // al
  bool (__fastcall *v32)(CAudioStream *__hidden); // rax
  char v33; // al
  bool (__fastcall *v34)(CAudioStream *__hidden); // rax
  bool v35; // al
  CProcessSubmixProxy *v36; // rsi
  __int64 (__fastcall *v37)(struct IAudioStreamInfo *); // rax
  int v38; // eax
  int v39; // [rsp+20h] [rbp-A9h]
  WINBOOL fPending; // [rsp+30h] [rbp-99h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-91h] BYREF
  CProcessSubmixProxy *v42; // [rsp+40h] [rbp-89h] BYREF
  __int64 v43; // [rsp+48h] [rbp-81h] BYREF
  __int64 v44; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v45[2]; // [rsp+58h] [rbp-71h] BYREF
  __int64 v46; // [rsp+60h] [rbp-69h]
  union _RTL_RUN_ONCE *v47; // [rsp+68h] [rbp-61h] BYREF
  int v48; // [rsp+70h] [rbp-59h]
  unsigned __int16 *v49; // [rsp+80h] [rbp-49h] BYREF
  int v50; // [rsp+88h] [rbp-41h]
  int v51; // [rsp+8Ch] [rbp-3Dh]
  void *v52; // [rsp+90h] [rbp-39h]
  int v53; // [rsp+98h] [rbp-31h]
  int v54; // [rsp+9Ch] [rbp-2Dh]
  CProcessSubmixProxy **v55; // [rsp+A0h] [rbp-29h]
  __int64 v56; // [rsp+A8h] [rbp-21h]
  __int64 *v57; // [rsp+B0h] [rbp-19h]
  __int64 v58; // [rsp+B8h] [rbp-11h]
  __int64 *v59; // [rsp+C0h] [rbp-9h]
  __int64 v60; // [rsp+C8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  v8 = (CBaseStreamGroupProxy *)*((_QWORD *)this + 24);
  v11 = *(__int64 (**)(void))(*(_QWORD *)v8 + 304LL);
  if ( (char *)v11 == (char *)CBaseStreamGroupProxy::ValidateStreamForStreamGroup )
    v12 = CBaseStreamGroupProxy::ValidateStreamForStreamGroup(v8, a2);
  else
    v12 = v11();
  v13 = v12;
  if ( v12 >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**((_QWORD **)this + 5) + 24LL))(
            *((_QWORD *)this + 5),
            a3,
            a4,
            a6);
    v16 = v15;
    if ( v15 >= 0 )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v47 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_18018A2A0;
        qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
        qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v48 = 0;
        wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v47, v17, v18);
      }
      v19 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v19 > 4u )
      {
        v56 = 8LL;
        v58 = 8LL;
        v20 = this;
        v55 = &v42;
        if ( this == (CProcessSubmixProxy *)8 )
          v20 = 0LL;
        v43 = *((_QWORD *)this + 24);
        v57 = &v43;
        v21 = *(_QWORD *)a2;
        v42 = v20;
        v22 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(v21 + 80);
        if ( v22 == CAudioStream::GetUniqueStreamIdentifier )
          UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(a2);
        else
          UniqueStreamIdentifier = v22(a2);
        v44 = UniqueStreamIdentifier;
        v59 = &v44;
        v60 = 8LL;
        v45[1] = 4;
        v49 = *(unsigned __int16 **)(v19 + 8);
        v45[0] = ((unsigned int)&unk_180145A79 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v24 = *(_QWORD *)(v19 + 32);
        v46 = 0LL;
        v50 = *v49;
        v52 = &unk_180145A84;
        v51 = 2;
        v53 = 70;
        v54 = 1;
        EtwEventWriteTransfer(v24, v45, 0LL, 0LL, 5, &v49, fPending);
      }
      v25 = (signed __int64 *)((char *)this - 8);
      v26 = this;
      if ( this == (CProcessSubmixProxy *)8 )
        v26 = 0LL;
      *((_QWORD *)a6 + 8) = v26;
      v27 = *(__int64 (__fastcall **)())(*v25 + 8);
      if ( v27 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::AddRef )
      {
        v28 = v25[5];
        while ( v28 >= 0 )
        {
          if ( (_DWORD)v28 != 0x7FFFFFFF )
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange64(v25 + 5, v28 + 1, v28);
            if ( v29 != v28 )
              continue;
          }
          goto LABEL_28;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v28 + 16));
      }
      else
      {
        ((void (__fastcall *)(char *))v27)((char *)this - 8);
      }
LABEL_28:
      v30 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 136LL);
      if ( v30 == CAudioStream::IsStrictPeriodicityClient )
        v31 = *((_DWORD *)a2 + 138) == 1;
      else
        v31 = v30(a2);
      if ( v31 )
        CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients((CProcessSubmixProxy *)((char *)this - 8), 1);
      v32 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 144LL);
      if ( v32 == CAudioStream::IsFormatSensitiveClient )
        v33 = *((_BYTE *)a2 + 556);
      else
        v33 = v32(a2);
      if ( v33 )
        CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients((CProcessSubmixProxy *)((char *)this - 8), 1);
      v34 = *(bool (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)a2 + 152LL);
      if ( v34 == CAudioStream::IsLazyPeriodicityClient )
        v35 = *((_DWORD *)a2 + 138) == 2;
      else
        v35 = v34(a2);
      if ( v35 )
        CProcessSubmixProxy::UpdateCountOfLazyRequestClients((CProcessSubmixProxy *)((char *)this - 8), 1);
      v36 = (CProcessSubmixProxy *)((char *)this - 8);
      v37 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL);
      if ( (char *)v37 == (char *)&CAudioStream::GetType )
        v38 = *((_DWORD *)a2 + 137);
      else
        v38 = v37(a2);
      if ( v38 != 2 )
      {
        ++*((_DWORD *)v25 + 30);
        v36 = (CProcessSubmixProxy *)v25;
      }
      CProcessSubmixProxy::AddStream(v36, a2, a6, a5);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA2,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v15,
        v39);
      return v16;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA0,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12,
      v39);
    return v13;
  }
}

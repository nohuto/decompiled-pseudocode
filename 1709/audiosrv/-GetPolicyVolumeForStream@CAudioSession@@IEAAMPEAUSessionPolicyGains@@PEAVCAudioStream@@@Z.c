/*
 * XREFs of ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x18001A83C
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x1800185E8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D140 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180070260 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x18001B010 (-GetEndpointId@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x18001B020 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001B050 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18001D370 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18001D390 (-GetProcess@CAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
float __fastcall CAudioSession::GetPolicyVolumeForStream(
        CAudioSession *this,
        struct SessionPolicyGains *a2,
        struct CAudioStream *a3)
{
  CAudioStream *v6; // rsi
  __int64 (__fastcall *v7)(CAudioStream *__hidden, struct IAudioProcess **); // rax
  CAudioStream *v8; // rcx
  __int64 (__fastcall *v9)(CAudioStream *__hidden); // rax
  int IsCaptureStream; // eax
  float v11; // xmm7_4
  double v12; // xmm0_8
  float v13; // xmm6_4
  __int64 (__fastcall *v14)(CAudioStream *__hidden); // rax
  int v15; // eax
  float v16; // xmm0_4
  float v17; // xmm6_4
  float v18; // xmm8_4
  float v19; // xmm0_4
  float v20; // xmm6_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm6_4
  struct IAudioProcess *v24; // rdi
  const unsigned __int16 *(__fastcall *v25)(CAudioSession *__hidden); // rax
  const unsigned __int16 *EndpointId; // rax
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm6_4
  __int64 v30; // rbx
  const WCHAR *v31; // rax
  const unsigned __int16 *(__fastcall *v32)(CAudioSession *__hidden); // rax
  const WCHAR *v33; // rax
  const unsigned __int16 *(__fastcall *v34)(CAudioSession *__hidden); // rax
  const WCHAR *Identifier; // rax
  __int64 (__fastcall *v36)(CAudioStream *__hidden); // rax
  __int64 UniqueStreamIdentifier; // rax
  struct IAudioProcess *v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rax
  double v42; // xmm0_8
  struct IAudioProcess *v43; // [rsp+38h] [rbp-D0h] BYREF
  float v44; // [rsp+40h] [rbp-C8h] BYREF
  float v45; // [rsp+44h] [rbp-C4h] BYREF
  float v46; // [rsp+48h] [rbp-C0h] BYREF
  float v47; // [rsp+4Ch] [rbp-BCh] BYREF
  float v48; // [rsp+50h] [rbp-B8h] BYREF
  float v49; // [rsp+54h] [rbp-B4h] BYREF
  WINBOOL fPending[2]; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v53[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v54; // [rsp+78h] [rbp-90h]
  __int64 v55; // [rsp+80h] [rbp-88h]
  unsigned __int16 *v56; // [rsp+88h] [rbp-80h] BYREF
  int v57; // [rsp+90h] [rbp-78h]
  int v58; // [rsp+94h] [rbp-74h]
  void *v59; // [rsp+98h] [rbp-70h]
  int v60; // [rsp+A0h] [rbp-68h]
  int v61; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+B8h] [rbp-50h] BYREF
  float *v64; // [rsp+C8h] [rbp-40h]
  __int64 v65; // [rsp+D0h] [rbp-38h]
  float *v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  float *v68; // [rsp+E8h] [rbp-20h]
  __int64 v69; // [rsp+F0h] [rbp-18h]
  float *v70; // [rsp+F8h] [rbp-10h]
  __int64 v71; // [rsp+100h] [rbp-8h]
  float *v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+110h] [rbp+8h]
  float *v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v77; // [rsp+138h] [rbp+30h]
  __int64 v78; // [rsp+140h] [rbp+38h]
  WINBOOL *v79; // [rsp+148h] [rbp+40h]
  __int64 v80; // [rsp+150h] [rbp+48h]

  v55 = -2LL;
  v43 = 0LL;
  v6 = (struct CAudioStream *)((char *)a3 + 8);
  v7 = *(__int64 (__fastcall **)(CAudioStream *__hidden, struct IAudioProcess **))(*((_QWORD *)a3 + 1) + 24LL);
  v8 = (struct CAudioStream *)((char *)a3 + 8);
  if ( v7 == CAudioStream::GetProcess )
    CAudioStream::GetProcess(v8, &v43);
  else
    v7(v8, &v43);
  v9 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v6 + 64LL);
  if ( v9 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream(v6);
  else
    IsCaptureStream = v9(v6);
  v11 = FLOAT_1_0;
  if ( IsCaptureStream )
  {
    v13 = FLOAT_1_0;
    v46 = FLOAT_1_0;
  }
  else
  {
    v12 = (*(double (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v43 + 200LL))(v43);
    v13 = *(float *)&v12;
    v46 = *(float *)&v12;
  }
  v14 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v6 + 64LL);
  if ( v14 == CAudioStream::IsCaptureStream )
    v15 = CAudioStream::IsCaptureStream(v6);
  else
    v15 = v14(v6);
  if ( v15 || *((_BYTE *)a3 + 42) )
  {
    v16 = FLOAT_1_0;
    v44 = FLOAT_1_0;
  }
  else
  {
    v16 = *(float *)a2;
    v44 = *(float *)a2;
  }
  v17 = v13 * v16;
  v18 = 0.0;
  if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v43 + 120LL))(v43) )
  {
    v19 = 0.0;
    v45 = 0.0;
  }
  else
  {
    v19 = FLOAT_1_0;
    v45 = FLOAT_1_0;
  }
  v20 = v17 * v19;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 368LL))(g_PolicyManager)
    || !dword_1801149C0[*((unsigned int *)a3 + 134)] )
  {
    v18 = FLOAT_1_0;
  }
  v21 = v20 * v18;
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 72LL))(
         g_PolicyManager,
         *((unsigned int *)a3 + 134)) )
  {
    v22 = (*(float (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v43 + 208LL))(v43);
    v47 = v22;
  }
  else
  {
    v22 = FLOAT_1_0;
    v47 = FLOAT_1_0;
  }
  v23 = v21 * v22;
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 112LL))(
         g_PolicyManager,
         *((unsigned int *)a3 + 134)) )
  {
    v27 = FLOAT_1_0;
    v48 = FLOAT_1_0;
  }
  else
  {
    v24 = v43;
    v25 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
    if ( v25 == CAudioSession::GetEndpointId )
      EndpointId = CAudioSession::GetEndpointId(this);
    else
      EndpointId = v25(this);
    v27 = (*(float (__fastcall **)(struct IAudioProcess *, const unsigned __int16 *))(*(_QWORD *)v24 + 216LL))(
            v24,
            EndpointId);
    v48 = v27;
  }
  v28 = v23 * v27;
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 168LL))(
         g_PolicyManager,
         *((unsigned int *)a3 + 134)) )
  {
    v39 = v43;
    v40 = *(_QWORD *)v43;
    v41 = (*(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 72LL))(this);
    v42 = (*(double (__fastcall **)(struct IAudioProcess *, __int64))(v40 + 224))(v39, v41);
    v11 = *(float *)&v42;
    v49 = *(float *)&v42;
  }
  else
  {
    v49 = FLOAT_1_0;
  }
  v29 = v28 * v11;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context);
  if ( fPending[0] )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v30 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v30 > 5u )
  {
    v31 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v43 + 72LL))(v43);
    TlgCreateWsz(&pDesc, v31);
    v32 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 72LL);
    if ( v32 == CAudioSession::GetEndpointId )
      v33 = CAudioSession::GetEndpointId(this);
    else
      v33 = v32(this);
    TlgCreateWsz(&v63, v33);
    v64 = &v44;
    v65 = 4LL;
    v66 = &v45;
    v67 = 4LL;
    v68 = &v46;
    v69 = 4LL;
    v70 = &v47;
    v71 = 4LL;
    v72 = &v48;
    v73 = 4LL;
    v74 = &v49;
    v75 = 4LL;
    v34 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)this + 64LL);
    if ( v34 == CAudioSession::GetIdentifier )
      Identifier = CAudioSession::GetIdentifier(this);
    else
      Identifier = v34(this);
    TlgCreateWsz(&v76, Identifier);
    v36 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v6 + 80LL);
    if ( v36 == CAudioStream::GetUniqueStreamIdentifier )
      UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v6);
    else
      UniqueStreamIdentifier = v36(v6);
    v52 = UniqueStreamIdentifier;
    v77 = &v52;
    v78 = 8LL;
    fPending[1] = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v43 + 40LL))(v43);
    v79 = &fPending[1];
    v80 = 4LL;
    v53[0] = ((unsigned int)&unk_18010EDB6 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v53[1] = 5;
    v54 = 0LL;
    v56 = *(unsigned __int16 **)(v30 + 8);
    v57 = *v56;
    v58 = 2;
    v59 = &unk_18010EDC1;
    v60 = 231;
    v61 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v30 + 32), v53, 0LL, 0LL, 13, &v56);
  }
  if ( v43 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v43 + 16LL))(v43);
  return v29;
}

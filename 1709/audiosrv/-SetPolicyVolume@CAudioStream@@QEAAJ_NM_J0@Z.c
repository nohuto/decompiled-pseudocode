/*
 * XREFs of ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x18001B064
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x1800185E8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D140 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180070260 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x18001B020 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001B050 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18001D370 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::SetPolicyVolume(CAudioStream *this, char a2, float a3, __int64 a4, bool a5)
{
  int v7; // r12d
  char v8; // si
  float v9; // xmm6_4
  __int64 v10; // r15
  int v11; // r14d
  char v12; // si
  float v13; // xmm6_4
  char *v14; // rdi
  _BOOL8 (__fastcall *v15)(CAudioStream *); // rax
  CAudioStream *v16; // rcx
  BOOL IsCaptureStream; // eax
  char v18; // al
  float v19; // xmm0_4
  const struct _TlgProvider_t *v21; // rsi
  __int64 (__fastcall *v22)(CAudioStream *__hidden); // rax
  CAudioStream *v23; // rcx
  void *UniqueStreamIdentifier; // rax
  CAudioSession *v25; // rcx
  __int64 (*v26)(void); // rax
  const WCHAR *Identifier; // rax
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  const struct _TlgProvider_t *v30; // rsi
  __int64 (__fastcall *v31)(CAudioStream *__hidden); // rax
  CAudioStream *v32; // rcx
  void *v33; // rax
  CAudioSession *v34; // rcx
  __int64 (*v35)(void); // rax
  const WCHAR *v36; // rax
  LPCGUID v37; // r8
  LPCGUID v38; // r9
  WINBOOL fPending[2]; // [rsp+38h] [rbp-A1h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-99h] BYREF
  LPVOID v41[3]; // [rsp+48h] [rbp-91h] BYREF
  char v42[4]; // [rsp+60h] [rbp-79h] BYREF
  float v43; // [rsp+64h] [rbp-75h]
  char v44; // [rsp+68h] [rbp-71h]
  float v45; // [rsp+6Ch] [rbp-6Dh]
  __int64 v46; // [rsp+70h] [rbp-69h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-61h] BYREF
  float *v48; // [rsp+98h] [rbp-41h]
  __int64 v49; // [rsp+A0h] [rbp-39h]
  LPVOID *p_Context; // [rsp+A8h] [rbp-31h]
  __int64 v51; // [rsp+B0h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-21h] BYREF
  WINBOOL *v53; // [rsp+C8h] [rbp-11h]
  __int64 v54; // [rsp+D0h] [rbp-9h]
  char v55; // [rsp+140h] [rbp+67h] BYREF
  float v56; // [rsp+148h] [rbp+6Fh] BYREF

  v56 = a3;
  v55 = a2;
  v41[1] = (LPVOID)-2LL;
  v7 = 0;
  v41[2] = 0LL;
  v8 = 0;
  v9 = FLOAT_1_0;
  v10 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, char *))(*(_QWORD *)g_PolicyManager + 48LL))(
          g_PolicyManager,
          ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
          v42);
  if ( v11 < 0 )
    goto LABEL_44;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 184LL))(*((_QWORD *)this + 9)) )
  {
    v8 = v42[0];
    v9 = v43;
    v10 = v46;
  }
  v12 = v44 | v8;
  v13 = v9 * v45;
  v14 = (char *)this + 8;
  v15 = *(_BOOL8 (__fastcall **)(CAudioStream *))(*((_QWORD *)this + 1) + 64LL);
  v16 = (CAudioStream *)((char *)this + 8);
  if ( v15 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream(v16);
  else
    IsCaptureStream = v15(v16);
  if ( IsCaptureStream && v13 != 0.0 )
    v13 = FLOAT_1_0;
  v18 = v12 | v55;
  v55 |= v12;
  v19 = v56 * v13;
  v56 = v56 * v13;
  if ( a4 < v10 )
    a4 = v10;
  if ( v18 != *((_BYTE *)this + 96) )
  {
    v7 = 1;
    *((_BYTE *)this + 96) = v18;
    if ( *((_QWORD *)this + 8) )
    {
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
      v21 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v21 > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
      {
        v48 = (float *)&v55;
        v49 = 1LL;
        v22 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v14 + 80LL);
        v23 = (CAudioStream *)((char *)this + 8);
        if ( v22 == CAudioStream::GetUniqueStreamIdentifier )
          UniqueStreamIdentifier = (void *)CAudioStream::GetUniqueStreamIdentifier(v23);
        else
          UniqueStreamIdentifier = (void *)v22(v23);
        v41[0] = UniqueStreamIdentifier;
        p_Context = v41;
        v51 = 8LL;
        v25 = (CAudioSession *)*((_QWORD *)this + 8);
        v26 = *(__int64 (**)(void))(*(_QWORD *)v25 + 64LL);
        if ( (char *)v26 == (char *)CAudioSession::GetIdentifier )
          Identifier = CAudioSession::GetIdentifier(v25);
        else
          Identifier = (const WCHAR *)v26();
        TlgCreateWsz(&pDesc, Identifier);
        fPending[1] = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
        v53 = &fPending[1];
        v54 = 4LL;
        TlgWrite(v21, &unk_18010F0AE, v28, v29, 6u, &pData);
      }
      v19 = v56;
    }
  }
  if ( v19 != *((float *)this + 23) )
  {
    v7 = 1;
    *((float *)this + 23) = v19;
    if ( *((_QWORD *)this + 8) )
    {
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending[1], v41);
      if ( fPending[1] )
      {
        v41[0] = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      v30 = (const struct _TlgProvider_t *)*((_QWORD *)v41[0] + 1);
      if ( *(_DWORD *)v30 > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)v41[0] + 1), 0x400000000000uLL) )
      {
        v48 = &v56;
        v49 = 4LL;
        v31 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v14 + 80LL);
        v32 = (CAudioStream *)((char *)this + 8);
        if ( v31 == CAudioStream::GetUniqueStreamIdentifier )
          v33 = (void *)CAudioStream::GetUniqueStreamIdentifier(v32);
        else
          v33 = (void *)v31(v32);
        Context = v33;
        p_Context = &Context;
        v51 = 8LL;
        v34 = (CAudioSession *)*((_QWORD *)this + 8);
        v35 = *(__int64 (**)(void))(*(_QWORD *)v34 + 64LL);
        if ( (char *)v35 == (char *)CAudioSession::GetIdentifier )
          v36 = CAudioSession::GetIdentifier(v34);
        else
          v36 = (const WCHAR *)v35();
        TlgCreateWsz(&pDesc, v36);
        fPending[0] = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
        v53 = fPending;
        v54 = 4LL;
        TlgWrite(v30, &unk_18010F051, v37, v38, 6u, &pData);
      }
    }
  }
  *((_QWORD *)this + 13) = a4;
  if ( v7 && a5 )
    v11 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 120LL))(this);
  if ( v11 < 0 )
LABEL_44:
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetPolicyVolume", 0x606u, v11);
  return (unsigned int)v11;
}

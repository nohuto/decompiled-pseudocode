/*
 * XREFs of ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x180019E70
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180013F60 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18001D7F0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18008A2F0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800164B0 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180016580 (-GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x1800166C0 (-GetIdentifier@CAudioSession@@UEAAPEBGXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018110 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x180019DF0 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::SetPolicyVolume(CAudioStream *this, char a2, float a3, __int64 a4, bool a5)
{
  int v7; // r13d
  char v8; // r14
  float v9; // xmm6_4
  __int64 v10; // r15
  int v11; // esi
  __int64 (__fastcall *v12)(CAudioSession *, struct IAudioProcess **); // rax
  CAudioSession *v13; // rcx
  char v14; // r14
  float v15; // xmm6_4
  char *v16; // rdi
  _BOOL8 (__fastcall *v17)(CAudioStream *); // rax
  CAudioStream *v18; // rcx
  BOOL IsCaptureStream; // eax
  char v20; // al
  float v21; // xmm0_4
  CAudioSession *v23; // rcx
  __int64 (__fastcall *v24)(CAudioSession *, unsigned int *); // rax
  int v25; // eax
  __int64 v26; // rcx
  LPVOID v27; // rax
  const struct _TlgProvider_t *v28; // r14
  __int64 (__fastcall *v29)(CAudioStream *); // rax
  CAudioStream *v30; // rcx
  __int64 UniqueStreamIdentifier; // rax
  CAudioSession *v32; // rcx
  __int64 (*v33)(void); // rax
  const WCHAR *Identifier; // rax
  LPCGUID v35; // r8
  LPCGUID v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rcx
  LPVOID v39; // rax
  const struct _TlgProvider_t *v40; // r14
  const WCHAR *v41; // rax
  LPCGUID v42; // r8
  LPCGUID v43; // r9
  unsigned int v44[2]; // [rsp+38h] [rbp-B1h] BYREF
  struct IAudioProcess *v45; // [rsp+40h] [rbp-A9h] BYREF
  _QWORD v46[2]; // [rsp+48h] [rbp-A1h] BYREF
  char v47[4]; // [rsp+58h] [rbp-91h] BYREF
  float v48; // [rsp+5Ch] [rbp-8Dh]
  char v49; // [rsp+60h] [rbp-89h]
  float v50; // [rsp+64h] [rbp-85h]
  __int64 v51; // [rsp+68h] [rbp-81h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-71h] BYREF
  float *v53; // [rsp+98h] [rbp-51h]
  __int64 v54; // [rsp+A0h] [rbp-49h]
  _QWORD *v55; // [rsp+A8h] [rbp-41h]
  __int64 v56; // [rsp+B0h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-31h] BYREF
  unsigned int *v58; // [rsp+C8h] [rbp-21h]
  __int64 v59; // [rsp+D0h] [rbp-19h]
  char v60; // [rsp+150h] [rbp+67h] BYREF
  float v61; // [rsp+158h] [rbp+6Fh] BYREF

  v61 = a3;
  v60 = a2;
  v46[1] = -2LL;
  v7 = 0;
  v45 = 0LL;
  v8 = 0;
  v9 = FLOAT_1_0;
  v10 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, char *))(*(_QWORD *)g_PolicyManager + 48LL))(
          g_PolicyManager,
          ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
          v47);
  if ( v11 < 0 )
    goto LABEL_44;
  v12 = *(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess **))(**((_QWORD **)this + 8) + 24LL);
  v13 = (CAudioSession *)*((_QWORD *)this + 8);
  if ( v12 == CAudioSession::GetProcess )
    CAudioSession::GetProcess(v13, &v45);
  else
    v12(v13, &v45);
  if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v45 + 176LL))(v45) )
  {
    v8 = v47[0];
    v9 = v48;
    v10 = v51;
  }
  v14 = v49 | v8;
  v15 = v9 * v50;
  v16 = (char *)this + 8;
  v17 = *(_BOOL8 (__fastcall **)(CAudioStream *))(*((_QWORD *)this + 1) + 56LL);
  v18 = (CAudioStream *)((char *)this + 8);
  if ( v17 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream(v18);
  else
    IsCaptureStream = v17(v18);
  if ( IsCaptureStream && v15 != 0.0 )
    v15 = FLOAT_1_0;
  v20 = v14 | v60;
  v60 |= v14;
  v21 = v61 * v15;
  v61 = v61 * v15;
  if ( a4 < v10 )
    a4 = v10;
  if ( v20 != *((_BYTE *)this + 100) )
  {
    v7 = 1;
    *((_BYTE *)this + 100) = v20;
    v37 = *((_QWORD *)this + 8);
    if ( v37 )
    {
      if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v37 + 128LL))(v37, v44) >= 0 )
      {
        v39 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                v38,
                lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v40 = (const struct _TlgProvider_t *)*((_QWORD *)v39 + 1);
        if ( *(_DWORD *)v40 > 4u )
        {
          if ( TlgKeywordOn(*((TraceLoggingHProvider *)v39 + 1), 0x400000000000uLL) )
          {
            v53 = (float *)&v60;
            v54 = 1LL;
            v46[0] = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v16 + 72LL))((char *)this + 8);
            v55 = v46;
            v56 = 8LL;
            v41 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
            TlgCreateWsz(&pDesc, v41);
            v58 = v44;
            v59 = 4LL;
            TlgWrite(v40, &unk_1800F908B, v42, v43, 6u, &pData);
          }
        }
      }
      v21 = v61;
    }
  }
  if ( v21 != *((float *)this + 24) )
  {
    v7 = 1;
    *((float *)this + 24) = v21;
    v23 = (CAudioSession *)*((_QWORD *)this + 8);
    if ( v23 )
    {
      v24 = *(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)v23 + 128LL);
      v25 = v24 == CAudioSession::GetProcessId ? CAudioSession::GetProcessId(v23, v44) : v24(v23, v44);
      if ( v25 >= 0 )
      {
        v27 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                v26,
                lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v28 = (const struct _TlgProvider_t *)*((_QWORD *)v27 + 1);
        if ( *(_DWORD *)v28 > 4u )
        {
          if ( TlgKeywordOn(*((TraceLoggingHProvider *)v27 + 1), 0x400000000000uLL) )
          {
            v53 = &v61;
            v54 = 4LL;
            v29 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v16 + 72LL);
            v30 = (CAudioStream *)((char *)this + 8);
            if ( v29 == CAudioStream::GetUniqueStreamIdentifier )
              UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v30);
            else
              UniqueStreamIdentifier = v29(v30);
            v46[0] = UniqueStreamIdentifier;
            v55 = v46;
            v56 = 8LL;
            v32 = (CAudioSession *)*((_QWORD *)this + 8);
            v33 = *(__int64 (**)(void))(*(_QWORD *)v32 + 64LL);
            if ( (char *)v33 == (char *)CAudioSession::GetIdentifier )
              Identifier = CAudioSession::GetIdentifier(v32);
            else
              Identifier = (const WCHAR *)v33();
            TlgCreateWsz(&pDesc, Identifier);
            v58 = v44;
            v59 = 4LL;
            TlgWrite(v28, &unk_1800F9027, v35, v36, 6u, &pData);
          }
        }
      }
    }
  }
  *((_QWORD *)this + 13) = a4;
  if ( v7 && a5 )
    v11 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 128LL))(this);
  if ( v11 < 0 )
LABEL_44:
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetPolicyVolume", 0x63Eu, v11);
  if ( v45 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v45 + 16LL))(v45);
  return (unsigned int)v11;
}

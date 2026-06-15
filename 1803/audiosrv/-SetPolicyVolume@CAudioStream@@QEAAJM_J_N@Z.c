/*
 * XREFs of ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x1800961DC
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180004F90 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800A86F0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetPolicyVolume(CAudioStream *this, float a2, __int64 a3, char a4)
{
  bool v4; // zf
  LPVOID v7; // rax
  const struct _TlgProvider_t *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  const WCHAR *v12; // rax
  int v13; // eax
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int v16; // eax
  unsigned int v17; // ebx
  int v19; // [rsp+30h] [rbp-39h] BYREF
  __int64 v20; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  float *v22; // [rsp+60h] [rbp-9h]
  int v23; // [rsp+68h] [rbp-1h]
  int v24; // [rsp+6Ch] [rbp+3h]
  __int64 *v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+78h] [rbp+Fh]
  int v27; // [rsp+7Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  int *v29; // [rsp+90h] [rbp+27h]
  int v30; // [rsp+98h] [rbp+2Fh]
  int v31; // [rsp+9Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  float v33; // [rsp+D8h] [rbp+6Fh] BYREF

  v33 = a2;
  v4 = a2 == *((float *)this + 25);
  *((_QWORD *)this + 13) = a3;
  if ( v4 )
    return 0LL;
  v4 = *((_QWORD *)this + 9) == 0LL;
  *((float *)this + 25) = a2;
  if ( !v4 )
  {
    v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
           (__int64)this,
           lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v8 = (const struct _TlgProvider_t *)*((_QWORD *)v7 + 1);
    if ( *(_DWORD *)v8 > 4u )
    {
      if ( TlgKeywordOn(*((TraceLoggingHProvider *)v7 + 1), 0x400000000000uLL) )
      {
        v24 = 0;
        v22 = &v33;
        v9 = *((_QWORD *)this + 1);
        v23 = 4;
        v10 = (*(__int64 (__fastcall **)(char *))(v9 + 80))((char *)this + 8);
        v11 = *((_QWORD *)this + 9);
        v27 = 0;
        v20 = v10;
        v25 = &v20;
        v26 = 8;
        v12 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
        TlgCreateWsz(&pDesc, v12);
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10));
        v31 = 0;
        v19 = v13;
        v29 = &v19;
        v30 = 4;
        TlgWrite(v8, &unk_180145537, v14, v15, 6u, &pData);
      }
    }
  }
  if ( !a4 )
    return 0LL;
  v16 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD, _QWORD))(*(_QWORD *)this + 120LL))(this, 0LL, 0LL);
  v17 = v16;
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x646,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v16);
  return v17;
}

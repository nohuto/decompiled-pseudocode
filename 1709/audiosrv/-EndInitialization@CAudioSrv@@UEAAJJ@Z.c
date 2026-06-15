/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800617D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x180063A2C (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     McTemplateU0zq @ 0x1800648EC (McTemplateU0zq.c)
 *     ?ListenTo_Initialize@@YAJXZ @ 0x1800A2A00 (-ListenTo_Initialize@@YAJXZ.c)
 */

__int64 __fastcall CAudioSrv::EndInitialization(CAudioSrv *this, int a2)
{
  unsigned __int16 *v3; // rcx
  DWORD LastError; // eax
  int started; // eax
  _BOOL8 v6; // rcx
  int v7; // eax
  _BOOL8 v8; // rcx
  int v9; // eax
  _BOOL8 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  void *v14; // r8
  const struct _TlgProvider_t *v15; // rcx
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  WINBOOL fPending; // [rsp+40h] [rbp+7h] BYREF
  DWORD pcbData[2]; // [rsp+48h] [rbp+Fh] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp+17h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+1Fh] BYREF
  int *v24; // [rsp+78h] [rbp+3Fh]
  int v25; // [rsp+80h] [rbp+47h]
  int v26; // [rsp+84h] [rbp+4Bh]
  int v27; // [rsp+A8h] [rbp+6Fh] BYREF

  v27 = a2;
  SecurityDescriptor = 0LL;
  if ( !a2 )
  {
    if ( !*((_QWORD *)this + 25) )
      *((_QWORD *)this + 25) = (*(__int64 (__fastcall **)(CAudioThreadPool *, _QWORD, CAudioSrv *))(*(_QWORD *)ThreadPool
                                                                                                  + 56LL))(
                                 ThreadPool,
                                 CAudioSrv::OnDeviceWorkItem,
                                 this);
    v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
            *(_QWORD *)&g_DeviceEnumerator,
            ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    if ( v27 < 0 )
    {
LABEL_19:
      if ( !v27 )
        goto LABEL_25;
      goto LABEL_20;
    }
    *((_DWORD *)this + 27) = 1;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-40548"
            "93335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
           1u,
           &SecurityDescriptor,
           0LL) )
    {
      LastError = v27;
    }
    else
    {
      LastError = GetLastError();
      v27 = LastError;
    }
    if ( !LastError )
    {
      started = StartRpcServer(v3, L"Audiosrv", &unk_1800FA2C0, SecurityDescriptor);
      v27 = started;
      v6 = started == 0;
      *((_DWORD *)this + 14) = v6;
      if ( !started )
      {
        v7 = StartRpcServer((unsigned __int16 *)v6, L"PlaybackManagerRpc", &unk_1800FFA10, 0LL);
        v27 = v7;
        v8 = v7 == 0;
        *((_DWORD *)this + 15) = v8;
        if ( !v7 )
        {
          v9 = StartRpcServer((unsigned __int16 *)v8, L"AudioSrvDiagnosticsRpc", &unk_1800FFCB0, 0LL);
          v27 = v9;
          v10 = v9 == 0;
          *((_DWORD *)this + 16) = v10;
          if ( !v9 )
          {
            v11 = StartRpcServer(
                    (unsigned __int16 *)v10,
                    L"SpatialSoundDataManagerRpc",
                    &unk_1800FFFB0,
                    SecurityDescriptor);
            v27 = v11;
            *((_DWORD *)this + 17) = v11 == 0;
            if ( !v11 )
            {
              pcbData[0] = 4;
              if ( RegGetValueW(
                     HKEY_LOCAL_MACHINE,
                     L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                     L"EnableCaptureMonitor",
                     0x18u,
                     0LL,
                     &fPending,
                     pcbData)
                || fPending )
              {
                v12 = ListenTo_Initialize();
                if ( v12 >= 0 )
                {
                  *((_DWORD *)this + 26) = 1;
                }
                else if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
                {
                  McTemplateU0zq(v13, &EVT_AUDIOSRV_FAIL_SUBSYSTEM_STARTUP, L"ListenTo", (unsigned int)v12);
                }
              }
              goto LABEL_19;
            }
          }
        }
      }
    }
  }
LABEL_20:
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)pcbData);
  if ( fPending )
  {
    *(_QWORD *)pcbData = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v14);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v15 = *(const struct _TlgProvider_t **)(*(_QWORD *)pcbData + 8LL);
  if ( *(_DWORD *)v15 > 2u && TlgKeywordOn(v15, 0x400000000000uLL) )
  {
    v26 = 0;
    v24 = &v27;
    v25 = 4;
    TlgWrite(v16, &unk_18010EC36, v17, v18, 3u, &pData);
  }
LABEL_25:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)v27;
}

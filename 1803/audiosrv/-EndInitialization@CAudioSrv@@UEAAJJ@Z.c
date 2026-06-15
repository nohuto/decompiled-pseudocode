/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18005C480
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18005B9F0 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180035E80 (-CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     McTemplateU0zq @ 0x180049E20 (McTemplateU0zq.c)
 *     ?ListenTo_Initialize@@YAJXZ @ 0x18005B4B4 (-ListenTo_Initialize@@YAJXZ.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x18005CAF8 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::EndInitialization(__int64 this, int a2)
{
  __int64 v2; // rbx
  PTP_WORK (__fastcall *v3)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *); // rax
  PTP_WORK Work; // rax
  DWORD LastError; // eax
  int started; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+7h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp+Fh] BYREF
  int pvData; // [rsp+54h] [rbp+13h] BYREF
  __int64 v19; // [rsp+58h] [rbp+17h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+1Fh] BYREF
  int *v21; // [rsp+80h] [rbp+3Fh]
  int v22; // [rsp+88h] [rbp+47h]
  int v23; // [rsp+8Ch] [rbp+4Bh]
  int v24; // [rsp+B0h] [rbp+6Fh] BYREF

  v24 = a2;
  v19 = -2LL;
  v2 = this;
  SecurityDescriptor = 0LL;
  if ( !a2 )
  {
    if ( !*(_QWORD *)(this + 200) )
    {
      v3 = *(PTP_WORK (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), void *))(*(_QWORD *)ThreadPool + 56LL);
      if ( v3 == CAudioThreadPool::CreateWork )
        Work = CAudioThreadPool::CreateWork(
                 ThreadPool,
                 (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSrv::OnDeviceWorkItem,
                 (void *)this);
      else
        Work = v3(
                 ThreadPool,
                 (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *))CAudioSrv::OnDeviceWorkItem,
                 (void *)this);
      *(_QWORD *)(v2 + 200) = Work;
    }
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
            *(_QWORD *)&g_DeviceEnumerator,
            (v2 + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64));
    if ( v24 < 0 )
    {
LABEL_18:
      if ( !v24 )
        goto LABEL_19;
      goto LABEL_26;
    }
    *(_DWORD *)(v2 + 108) = 1;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-40548"
            "93335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
           1u,
           &SecurityDescriptor,
           0LL) )
    {
      LastError = v24;
    }
    else
    {
      LastError = GetLastError();
      v24 = LastError;
    }
    if ( !LastError )
    {
      started = StartRpcServer((unsigned __int16 *)this, L"Audiosrv", &unk_180121B70, SecurityDescriptor);
      v24 = started;
      this = started == 0;
      *(_DWORD *)(v2 + 56) = this;
      if ( !started )
      {
        v7 = StartRpcServer((unsigned __int16 *)this, L"PlaybackManagerRpc", &unk_180121BD0, 0LL);
        v24 = v7;
        this = v7 == 0;
        *(_DWORD *)(v2 + 60) = this;
        if ( !v7 )
        {
          v8 = StartRpcServer((unsigned __int16 *)this, L"AudioSrvDiagnosticsRpc", &unk_180121C30, 0LL);
          v24 = v8;
          this = v8 == 0;
          *(_DWORD *)(v2 + 64) = this;
          if ( !v8 )
          {
            v9 = StartRpcServer(
                   (unsigned __int16 *)this,
                   L"SpatialSoundDataManagerRpc",
                   &unk_180121C90,
                   SecurityDescriptor);
            v24 = v9;
            this = v9 == 0;
            *(_DWORD *)(v2 + 68) = this;
            if ( !v9 )
            {
              pcbData = 4;
              if ( RegGetValueW(
                     HKEY_LOCAL_MACHINE,
                     L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                     L"EnableCaptureMonitor",
                     0x18u,
                     0LL,
                     &pvData,
                     &pcbData)
                || pvData )
              {
                v10 = ListenTo_Initialize();
                if ( v10 < 0 )
                {
                  if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
                    McTemplateU0zq(this, &EVT_AUDIOSRV_FAIL_SUBSYSTEM_STARTUP, L"ListenTo", v10);
                }
                else
                {
                  *(_DWORD *)(v2 + 104) = 1;
                }
              }
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
LABEL_26:
  v12 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                     this,
                                                     lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                       + 1);
  if ( *(_DWORD *)v12 > 2u && TlgKeywordOn(v12, 0x400000000000uLL) )
  {
    v21 = &v24;
    v22 = 4;
    v23 = 0;
    TlgWrite(v13, &unk_180144EE0, v14, v15, 3u, &pData);
  }
LABEL_19:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)v24;
}

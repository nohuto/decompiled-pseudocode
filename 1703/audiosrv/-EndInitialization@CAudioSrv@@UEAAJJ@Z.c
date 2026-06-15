/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180035840
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180035064 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180024280 (-CreateWork@CAudioThreadPool@@UEAAPEAU_TP_WORK@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x180035EB8 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?ListenTo_Initialize@@YAJXZ @ 0x18003657C (-ListenTo_Initialize@@YAJXZ.c)
 *     Template_zq @ 0x1800467E4 (Template_zq.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

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
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+7h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp+Fh] BYREF
  int pvData; // [rsp+4Ch] [rbp+13h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+17h] BYREF
  int *v20; // [rsp+70h] [rbp+37h]
  int v21; // [rsp+78h] [rbp+3Fh]
  int v22; // [rsp+7Ch] [rbp+43h]
  int v23; // [rsp+A8h] [rbp+6Fh] BYREF

  v23 = a2;
  SecurityDescriptor = 0LL;
  v2 = this;
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
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
            *(_QWORD *)&g_DeviceEnumerator,
            (v2 + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64));
    if ( v23 < 0 )
    {
LABEL_18:
      if ( !v23 )
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
      LastError = v23;
    }
    else
    {
      LastError = GetLastError();
      v23 = LastError;
    }
    if ( !LastError )
    {
      started = StartRpcServer((unsigned __int16 *)this, L"Audiosrv", &unk_1800DD9F0, SecurityDescriptor);
      v23 = started;
      this = started == 0;
      *(_DWORD *)(v2 + 56) = this;
      if ( !started )
      {
        v7 = StartRpcServer((unsigned __int16 *)this, L"PlaybackManagerRpc", &unk_1800DD990, 0LL);
        v23 = v7;
        this = v7 == 0;
        *(_DWORD *)(v2 + 60) = this;
        if ( !v7 )
        {
          v8 = StartRpcServer((unsigned __int16 *)this, L"AudioSrvDiagnosticsRpc", &unk_1800DD930, 0LL);
          v23 = v8;
          this = v8 == 0;
          *(_DWORD *)(v2 + 64) = this;
          if ( !v8 )
          {
            v9 = StartRpcServer(
                   (unsigned __int16 *)this,
                   L"SpatialSoundDataManagerRpc",
                   &unk_1800DD8D0,
                   SecurityDescriptor);
            v23 = v9;
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
                    Template_zq(this, &EVT_AUDIOSRV_FAIL_SUBSYSTEM_STARTUP, L"ListenTo", (unsigned int)v10);
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
    v22 = 0;
    v20 = &v23;
    v21 = 4;
    TlgWrite(v13, &unk_1800F8D2A, v14, v15, 3u, &pData);
  }
LABEL_19:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)v23;
}

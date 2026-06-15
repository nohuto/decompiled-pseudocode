/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18008135C
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800242A0 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18008135C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 * Callees:
 *     ?GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z @ 0x180004220 (-GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180025D84 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18008135C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180092FB0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CAudioSrv::ProcessDeviceInternal(CAudioSrv *this, const unsigned __int16 *a2)
{
  unsigned int v3; // ebx
  int v4; // esi
  struct CAudioSessionManagerProvider *v5; // rcx
  CAudioSrv *v6; // rsi
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  TraceLoggingHProvider v9; // r10
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v11; // rbx
  __int64 v12; // r8
  void (*v13)(void); // rax
  bool v14; // [rsp+38h] [rbp-59h]
  struct CAudioSessionManagerProvider *v15; // [rsp+40h] [rbp-51h] BYREF
  int v16; // [rsp+48h] [rbp-49h] BYREF
  LPCWSTR pwsz; // [rsp+50h] [rbp-41h] BYREF
  __int64 v18; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-29h] BYREF
  unsigned __int16 *v21; // [rsp+70h] [rbp-21h] BYREF
  __int64 v22; // [rsp+78h] [rbp-19h] BYREF
  __int64 v23; // [rsp+80h] [rbp-11h] BYREF
  _QWORD v24[2]; // [rsp+88h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp+27h] BYREF

  v24[1] = -2LL;
  v15 = this;
  v3 = 0;
  v4 = 0;
  LODWORD(v18) = 0;
  v24[0] = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  LODWORD(pwsz) = 0;
  v16 = 0;
  v19 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         v24) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v24[0] + 48LL))(v24[0], &v16) >= 0
    && v16 == 1 )
  {
    goto LABEL_23;
  }
  v14 = 0;
  if ( (int)GetAliasedEndpointId(a2, &v21, (int *)&pwsz) >= 0
    && (*(int (__fastcall **)(_QWORD, unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v21,
         &v23) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 48LL))(v23, &v16) >= 0 )
  {
    v14 = v16 == 1;
  }
  if ( (_DWORD)pwsz )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           2LL,
           14LL,
           &v22) < 0
      || (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 24LL))(v22, &v19) < 0 )
    {
      goto LABEL_50;
    }
    if ( v19 )
    {
      v6 = v15;
      do
      {
        v15 = 0LL;
        pwsz = 0LL;
        pv = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, struct CAudioSessionManagerProvider **))(*(_QWORD *)v22 + 32LL))(
               v22,
               v3,
               &v15) >= 0
          && (*(int (__fastcall **)(struct CAudioSessionManagerProvider *, LPCWSTR *))(*(_QWORD *)v15 + 40LL))(
               v15,
               &pwsz) >= 0
          && (int)GetAliasedEndpointId(pwsz, (unsigned __int16 **)&pv, 0LL) >= 0
          && !(unsigned int)_o__wcsicmp(pv, a2) )
        {
          CAudioSrv::ProcessDeviceInternal(v6, pwsz);
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        CoTaskMemFree((LPVOID)pwsz);
        pwsz = 0LL;
        v5 = v15;
        if ( v15 )
          (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v15 + 16LL))(v15);
        ++v3;
      }
      while ( v3 < v19 );
      v4 = v18;
    }
  }
  if ( v14 )
  {
LABEL_23:
    v15 = 0LL;
    GetAliasedEndpointCharacteristics(a2, 0, &v15);
    if ( v15 )
      (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_50;
  }
  if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       (__int64)v5,
                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
        + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    TlgWrite(v9, &unk_1800F8C99, v7, v8, 3u, &pData);
  }
  v15 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v15);
  v11 = v15;
  if ( AudioSessionManagerProvider < 0 )
    goto LABEL_46;
  v18 = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, (__int64)&WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids, a2);
  }
  v4 = (*(__int64 (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, __int64 *))(*(_QWORD *)v11 + 32LL))(
         v11,
         a2,
         &v18);
  if ( v4 >= 0 )
  {
    LOBYTE(v12) = 1;
    v4 = CAudioSessionManager::Disconnect(v18, 0LL, v12);
    if ( v4 < 0 )
    {
      if ( !v18 )
        goto LABEL_47;
      v13 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
      goto LABEL_35;
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        (__int64)&WPP_45152eef543736c8acd7716a7d1bb4fd_Traceguids,
        v18);
    }
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_46:
    if ( !v11 )
      goto LABEL_48;
    goto LABEL_47;
  }
  if ( v18 )
  {
    v13 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
LABEL_35:
    v13();
  }
LABEL_47:
  (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_48:
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessDeviceInternal", 1961, v4);
LABEL_50:
  CoTaskMemFree(v21);
  v21 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24[0] + 16LL))(v24[0]);
}

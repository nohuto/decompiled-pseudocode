/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18009D970
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018540 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18009D970 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800083E0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180008CD0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18009D970 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     ?GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z @ 0x1800EAD4C (-GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CAudioSrv::ProcessDeviceInternal(CAudioSrv *this, const unsigned __int16 *a2)
{
  bool v3; // si
  struct CAudioSessionManagerProvider *v4; // rcx
  unsigned int v5; // ebx
  CAudioSrv *v6; // rsi
  unsigned int (__fastcall *v7)(__int64); // rax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  TraceLoggingHProvider v10; // r10
  int AudioSessionManagerProvider; // eax
  int *v12; // rbx
  void (*v13)(void); // rax
  void (*v14)(void); // rax
  struct IUnknown *v15; // rcx
  __int64 v16; // r8
  bool v17; // [rsp+38h] [rbp-59h]
  LPCWSTR pwsz; // [rsp+40h] [rbp-51h] BYREF
  struct CAudioSessionManagerProvider *v19; // [rsp+48h] [rbp-49h] BYREF
  int v20; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-3Dh] BYREF
  int v22; // [rsp+58h] [rbp-39h]
  LPVOID pv; // [rsp+60h] [rbp-31h] BYREF
  unsigned __int16 *v24; // [rsp+68h] [rbp-29h] BYREF
  struct IUnknown *v25; // [rsp+70h] [rbp-21h] BYREF
  __int64 v26; // [rsp+78h] [rbp-19h] BYREF
  struct IUnknown *v27; // [rsp+80h] [rbp-11h] BYREF
  _QWORD v28[2]; // [rsp+88h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp+27h] BYREF

  v28[1] = -2LL;
  v19 = this;
  v22 = 0;
  v27 = 0LL;
  v28[0] = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  LODWORD(pwsz) = 0;
  v20 = 0;
  v21 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                   + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v27) >= 0
    && ((int (__fastcall *)(struct IUnknown *, int *))v27->lpVtbl[2].QueryInterface)(v27, &v20) >= 0
    && v20 == 1 )
  {
    v3 = 1;
    goto LABEL_24;
  }
  v3 = 0;
  v17 = 0;
  if ( GetAliasedEndpointId(a2, &v24, (int *)&pwsz) >= 0
    && (*(int (__fastcall **)(_QWORD, unsigned __int16 *, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v24,
         v28) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v28[0] + 48LL))(v28[0], &v20) >= 0 )
  {
    v3 = v20 == 1;
    v17 = v20 == 1;
  }
  if ( (_DWORD)pwsz )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           2LL,
           14LL,
           &v26) < 0
      || (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 24LL))(v26, &v21) < 0 )
    {
      goto LABEL_64;
    }
    v5 = 0;
    if ( v21 )
    {
      v6 = v19;
      do
      {
        v19 = 0LL;
        pwsz = 0LL;
        pv = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, struct CAudioSessionManagerProvider **))(*(_QWORD *)v26 + 32LL))(
               v26,
               v5,
               &v19) >= 0
          && (*(int (__fastcall **)(struct CAudioSessionManagerProvider *, LPCWSTR *))(*(_QWORD *)v19 + 40LL))(
               v19,
               &pwsz) >= 0
          && GetAliasedEndpointId(pwsz, (unsigned __int16 **)&pv, 0LL) >= 0
          && !(unsigned int)_o__wcsicmp(pv, a2) )
        {
          CAudioSrv::ProcessDeviceInternal(v6, pwsz);
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        CoTaskMemFree((LPVOID)pwsz);
        pwsz = 0LL;
        v4 = v19;
        if ( v19 )
          (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v19 + 16LL))(v19);
        ++v5;
      }
      while ( v5 < v21 );
      v3 = v17;
    }
  }
  if ( v3 )
  {
LABEL_24:
    v19 = 0LL;
    (*(void (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, struct CAudioSessionManagerProvider **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
      g_pEndpointCharacteristicsCache,
      a2,
      0LL,
      &v19);
    if ( v19 )
    {
      v7 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL);
      if ( v7 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((__int64)v19);
        goto LABEL_56;
      }
LABEL_55:
      ((void (*)(void))v7)();
      goto LABEL_56;
    }
    goto LABEL_56;
  }
  if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       (__int64)v4,
                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
        + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    TlgWrite(v10, &unk_180144E4F, v8, v9, 3u, &pData);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 320LL))(
    g_PolicyManager,
    a2);
  v19 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v19);
  v12 = (int *)v19;
  if ( AudioSessionManagerProvider >= 0 )
  {
    pwsz = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_50e5db73954a39d05dfaedbce4ea5db2_Traceguids, a2);
    }
    if ( (*(int (__fastcall **)(int *, const unsigned __int16 *, LPCWSTR *))(*(_QWORD *)v12 + 32LL))(v12, a2, &pwsz) >= 0 )
    {
      v22 = CAudioSessionManager::Disconnect((__int64)pwsz, 0, 1);
      if ( v22 < 0 )
      {
        if ( pwsz )
        {
          v13 = *(void (**)(void))(*(_QWORD *)pwsz + 16LL);
          if ( (char *)v13 == (char *)CAudioSessionManager::Release )
            CAudioSessionManager::Release((CAudioSessionManager *)pwsz);
          else
            v13();
        }
        if ( *(__int64 (__fastcall **)(int *))(*(_QWORD *)v12 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release(v12);
        else
          (*(void (__fastcall **)(int *))(*(_QWORD *)v12 + 16LL))(v12);
        goto LABEL_62;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_50e5db73954a39d05dfaedbce4ea5db2_Traceguids, pwsz);
      }
    }
    if ( pwsz )
    {
      v14 = *(void (**)(void))(*(_QWORD *)pwsz + 16LL);
      if ( (char *)v14 == (char *)CAudioSessionManager::Release )
        CAudioSessionManager::Release((CAudioSessionManager *)pwsz);
      else
        v14();
    }
  }
  if ( v12 )
  {
    if ( *(__int64 (__fastcall **)(int *))(*(_QWORD *)v12 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
    {
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v12);
      goto LABEL_56;
    }
    v7 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL);
    goto LABEL_55;
  }
LABEL_56:
  v15 = v25;
  if ( v25 != v27 )
  {
    ATL::AtlComQIPtrAssign(&v25, v27, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v15 = v25;
  }
  if ( v15
    && ((int (__fastcall *)(struct IUnknown *, LPCWSTR *))v15->lpVtbl[1].QueryInterface)(v15, &pwsz) >= 0
    && !(_DWORD)pwsz )
  {
    LOBYTE(v16) = v3;
    (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *, __int64))(*(_QWORD *)g_PolicyManager
                                                                                            + 328LL))(
      g_PolicyManager,
      a2,
      v16);
  }
LABEL_62:
  if ( v22 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessDeviceInternal", 1977, v22);
LABEL_64:
  CoTaskMemFree(v24);
  v24 = 0LL;
  if ( v25 )
    ((void (__fastcall *)(struct IUnknown *))v25->lpVtbl->Release)(v25);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v28[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
  if ( v27 )
    ((void (__fastcall *)(struct IUnknown *))v27->lpVtbl->Release)(v27);
}

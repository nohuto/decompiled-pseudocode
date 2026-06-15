/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800628EC
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002CE20 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800628EC (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180013188 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180013220 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180016B80 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800628EC (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z @ 0x1800B4E10 (-GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CAudioSrv::ProcessDeviceInternal(CAudioSrv *this, const unsigned __int16 *a2)
{
  unsigned int v3; // ebx
  bool v4; // si
  CAudioSrv *v5; // rsi
  void (*v6)(void); // rax
  void *v7; // r8
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  TraceLoggingHProvider v10; // r10
  int AudioSessionManagerProvider; // eax
  volatile signed __int32 *v12; // rbx
  unsigned __int16 *v13; // rcx
  void (*v14)(void); // rax
  void (*v15)(void); // rax
  bool v16; // [rsp+38h] [rbp-49h]
  WINBOOL fPending[2]; // [rsp+40h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-39h] BYREF
  int v19; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-2Dh] BYREF
  int v21; // [rsp+58h] [rbp-29h]
  LPVOID pv; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int16 *v23; // [rsp+68h] [rbp-19h] BYREF
  __int64 v24; // [rsp+70h] [rbp-11h] BYREF
  __int64 v25; // [rsp+78h] [rbp-9h] BYREF
  _QWORD v26[2]; // [rsp+80h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp+2Fh] BYREF

  v26[1] = -2LL;
  Context = this;
  v3 = 0;
  v21 = 0;
  v26[0] = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  fPending[0] = 0;
  v19 = 0;
  v20 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         v26) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v26[0] + 48LL))(v26[0], &v19) >= 0
    && v19 == 1 )
  {
    goto LABEL_23;
  }
  v4 = 0;
  v16 = 0;
  if ( GetAliasedEndpointId(a2, &v23, fPending) >= 0
    && (*(int (__fastcall **)(_QWORD, unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v23,
         &v25) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 48LL))(v25, &v19) >= 0 )
  {
    v4 = v19 == 1;
    v16 = v19 == 1;
  }
  if ( fPending[0] )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           2LL,
           14LL,
           &v24) < 0
      || (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 24LL))(v24, &v20) < 0 )
    {
      goto LABEL_60;
    }
    if ( v20 )
    {
      v5 = (CAudioSrv *)Context;
      do
      {
        Context = 0LL;
        *(_QWORD *)fPending = 0LL;
        pv = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v24 + 32LL))(v24, v3, &Context) >= 0
          && (*(int (__fastcall **)(LPVOID, WINBOOL *))(*(_QWORD *)Context + 40LL))(Context, fPending) >= 0
          && GetAliasedEndpointId(*(const unsigned __int16 **)fPending, (unsigned __int16 **)&pv, 0LL) >= 0
          && !(unsigned int)_o__wcsicmp(pv, a2) )
        {
          CAudioSrv::ProcessDeviceInternal(v5, *(const unsigned __int16 **)fPending);
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        CoTaskMemFree(*(LPVOID *)fPending);
        *(_QWORD *)fPending = 0LL;
        if ( Context )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 16LL))(Context);
        ++v3;
      }
      while ( v3 < v20 );
      v4 = v16;
    }
  }
  if ( v4 )
  {
LABEL_23:
    Context = 0LL;
    (*(void (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, LPVOID *))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
      g_pEndpointCharacteristicsCache,
      a2,
      0LL,
      &Context);
    if ( Context )
    {
      v6 = *(void (**)(void))(*(_QWORD *)Context + 16LL);
      if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)Context);
      else
        v6();
    }
    goto LABEL_60;
  }
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context);
  if ( fPending[0] )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v7);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  if ( **((_DWORD **)Context + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    TlgWrite(v10, &unk_18010EBA5, v8, v9, 3u, &pData);
  }
  Context = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider((struct CAudioSessionManagerProvider **)&Context);
  v12 = (volatile signed __int32 *)Context;
  if ( AudioSessionManagerProvider < 0 )
  {
LABEL_54:
    if ( !v12 )
      goto LABEL_58;
    goto LABEL_55;
  }
  *(_QWORD *)fPending = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids, a2);
  }
  v21 = (*(__int64 (__fastcall **)(volatile signed __int32 *, const unsigned __int16 *, WINBOOL *))(*(_QWORD *)v12 + 32LL))(
          v12,
          a2,
          fPending);
  if ( v21 < 0 )
  {
    v13 = *(unsigned __int16 **)fPending;
    if ( *(_QWORD *)fPending )
    {
      v14 = *(void (**)(void))(**(_QWORD **)fPending + 16LL);
      goto LABEL_39;
    }
    goto LABEL_55;
  }
  v21 = CAudioSessionManager::Disconnect(*(__int64 *)fPending, 0, 1);
  if ( v21 >= 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        44LL,
        &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids,
        *(_QWORD *)fPending);
    }
    if ( *(_QWORD *)fPending )
    {
      v15 = *(void (**)(void))(**(_QWORD **)fPending + 16LL);
      if ( (char *)v15 == (char *)CAudioSessionManager::Release )
        CAudioSessionManager::Release(*(CAudioSessionManager **)fPending);
      else
        v15();
    }
    goto LABEL_54;
  }
  v13 = *(unsigned __int16 **)fPending;
  if ( *(_QWORD *)fPending )
  {
    v14 = *(void (**)(void))(**(_QWORD **)fPending + 16LL);
LABEL_39:
    if ( (char *)v14 == (char *)CAudioSessionManager::Release )
      CAudioSessionManager::Release((CAudioSessionManager *)v13);
    else
      v14();
  }
LABEL_55:
  if ( *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
    ATL::CComObject<CAudioSessionManagerProvider>::Release(v12);
  else
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_58:
  if ( v21 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessDeviceInternal", 1962, v21);
LABEL_60:
  CoTaskMemFree(v23);
  v23 = 0LL;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
}

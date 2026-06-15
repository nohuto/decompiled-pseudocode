/*
 * XREFs of ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800884A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180013188 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180013220 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180016B80 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointVisibility(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  HRESULT v4; // edi
  void *v6; // r8
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  TraceLoggingHProvider v9; // r10
  int AudioSessionManagerProvider; // eax
  volatile signed __int32 *v11; // rbx
  __int64 (__fastcall *v12)(volatile signed __int32 *); // rax
  void (*v13)(void); // rax
  unsigned int v14; // [rsp+30h] [rbp-39h] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+48h] [rbp-21h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  unsigned int *v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+9Ch] [rbp+33h]

  ppv = 0LL;
  v17 = 0LL;
  v14 = a3;
  if ( !a2 )
  {
    v4 = -2147467261;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetEndpointVisibility", 4161, v4);
    goto LABEL_4;
  }
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context);
  if ( fPending[0] )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  if ( **((_DWORD **)Context + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    v23 = 0;
    v21 = &v14;
    v22 = 4;
    TlgWrite(v9, &unk_18010F202, v7, v8, 4u, &pData);
  }
  v4 = CoCreateInstance(
         &GUID_06cca63e_9941_441b_b004_39f999ada412,
         0LL,
         0x17u,
         &GUID_05d42a27_61c9_4c18_8d4c_70b9764da1d6,
         &ppv);
  if ( v4 < 0 )
    goto LABEL_3;
  v4 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v17);
  if ( v4 < 0 )
    goto LABEL_3;
  v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 56LL))(ppv, v17, v14);
  if ( v4 < 0 )
    goto LABEL_3;
  if ( !v14 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x17u,
        (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
        a2);
    }
    *(_QWORD *)fPending = 0LL;
    Context = 0LL;
    AudioSessionManagerProvider = GetAudioSessionManagerProvider((struct CAudioSessionManagerProvider **)&Context);
    v11 = (volatile signed __int32 *)Context;
    if ( AudioSessionManagerProvider >= 0
      && !(*(unsigned int (__fastcall **)(LPVOID, const unsigned __int16 *, WINBOOL *))(*(_QWORD *)Context + 40LL))(
            Context,
            a2,
            fPending) )
    {
      CAudioSessionManager::Disconnect(*(__int64 *)fPending, 0, 1);
    }
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
        *(_QWORD *)fPending);
    }
    if ( v11 )
    {
      v12 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL);
      if ( v12 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release(v11);
      else
        v12(v11);
    }
    if ( *(_QWORD *)fPending )
    {
      v13 = *(void (**)(void))(**(_QWORD **)fPending + 16LL);
      if ( (char *)v13 == (char *)CAudioSessionManager::Release )
        CAudioSessionManager::Release(*(CAudioSessionManager **)fPending);
      else
        v13();
    }
  }
LABEL_4:
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v4;
}

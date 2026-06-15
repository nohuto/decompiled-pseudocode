/*
 * XREFs of ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800BE670
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800083E0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180008CD0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x1800FC6B8 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointVisibility(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  HRESULT v4; // ebx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  TraceLoggingHProvider v8; // r10
  int AudioSessionManagerProvider; // eax
  int *v10; // rbx
  __int64 (__fastcall *v11)(int *); // rax
  void (*v12)(void); // rax
  DynamicAudioEndpointManager *v13; // rcx
  unsigned int v14; // [rsp+30h] [rbp-39h] BYREF
  CAudioSessionManager *v15; // [rsp+38h] [rbp-31h] BYREF
  __int64 v16; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-21h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-19h] BYREF
  struct CAudioSessionManagerProvider *v19; // [rsp+58h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  unsigned int *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]

  ppv = 0LL;
  v16 = 0LL;
  v14 = a3;
  if ( !a2 )
  {
    v4 = -2147467261;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetEndpointVisibility", 4146, v4);
    goto LABEL_4;
  }
  if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       (__int64)this,
                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
        + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    v24 = 0;
    v22 = &v14;
    v23 = 4;
    TlgWrite(v8, &unk_18014568C, v6, v7, 4u, &pData);
  }
  v4 = CoCreateInstance(
         &GUID_06cca63e_9941_441b_b004_39f999ada412,
         0LL,
         0x17u,
         &GUID_a00ffdbb_aba1_46f4_8225_b7499a6a9949,
         &ppv);
  if ( v4 < 0 )
    goto LABEL_3;
  v4 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v16);
  if ( v4 < 0 )
    goto LABEL_3;
  v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 48LL))(ppv, v16, v14);
  if ( v4 < 0 )
    goto LABEL_3;
  if ( !v14 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        (__int64)&WPP_143dd52affcd33359900bde90742b95f_Traceguids,
        a2);
    }
    v15 = 0LL;
    v19 = 0LL;
    AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v19);
    v10 = (int *)v19;
    if ( AudioSessionManagerProvider >= 0
      && !(*(unsigned int (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, CAudioSessionManager **))(*(_QWORD *)v19 + 40LL))(
            v19,
            a2,
            &v15) )
    {
      CAudioSessionManager::Disconnect((__int64)v15, 0, 1);
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, v15);
    }
    if ( v10 )
    {
      v11 = *(__int64 (__fastcall **)(int *))(*(_QWORD *)v10 + 16LL);
      if ( v11 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release(v10);
      else
        v11(v10);
    }
    if ( v15 )
    {
      v12 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
      if ( (char *)v12 == (char *)CAudioSessionManager::Release )
        CAudioSessionManager::Release(v15);
      else
        v12();
    }
  }
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 48LL))(v16, &v17);
  if ( v4 < 0 )
    goto LABEL_3;
  DynamicAudioEndpointManager::OnDeviceStateChanged(v13, a2, v17);
LABEL_4:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v4;
}

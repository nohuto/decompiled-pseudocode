/*
 * XREFs of ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x18009E7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180025D84 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180025E10 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180092FB0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointVisibility(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  HRESULT v4; // edi
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  TraceLoggingHProvider v8; // r10
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v10; // rbx
  __int64 (__fastcall *v11)(volatile signed __int32 *); // rax
  unsigned int v12; // [rsp+30h] [rbp-49h] BYREF
  __int64 v13; // [rsp+38h] [rbp-41h] BYREF
  __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-31h] BYREF
  struct CAudioSessionManagerProvider *v16; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  unsigned int *v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+9Ch] [rbp+23h]

  ppv = 0LL;
  v14 = 0LL;
  v12 = a3;
  if ( !a2 )
  {
    v4 = -2147467261;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetEndpointVisibility", 4155, v4);
    goto LABEL_4;
  }
  if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       (__int64)this,
                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
        + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, a2);
    v21 = 0;
    v19 = &v12;
    v20 = 4;
    TlgWrite(v8, &unk_1800F9195, v6, v7, 4u, &pData);
  }
  v4 = CoCreateInstance(
         &GUID_06cca63e_9941_441b_b004_39f999ada412,
         0LL,
         0x17u,
         &GUID_cc08e979_3b54_451c_8ac3_ba2809744615,
         &ppv);
  if ( v4 < 0 )
    goto LABEL_3;
  v4 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v14);
  if ( v4 < 0 )
    goto LABEL_3;
  v4 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 56LL))(ppv, v14, v12);
  if ( v4 < 0 )
    goto LABEL_3;
  if ( !v12 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x17u,
        (__int64)&WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
        a2);
    }
    v13 = 0LL;
    v16 = 0LL;
    AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v16);
    v10 = v16;
    if ( AudioSessionManagerProvider >= 0
      && !(*(unsigned int (__fastcall **)(struct CAudioSessionManagerProvider *, const unsigned __int16 *, __int64 *))(*(_QWORD *)v16 + 40LL))(
            v16,
            a2,
            &v13) )
    {
      CAudioSessionManager::Disconnect(v13, 0, 1);
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
        v13);
    }
    if ( v10 )
    {
      v11 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL);
      if ( v11 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v10);
      else
        v11((volatile signed __int32 *)v10);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_4:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v4;
}

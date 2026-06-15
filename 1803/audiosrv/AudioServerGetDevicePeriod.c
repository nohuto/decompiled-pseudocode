/*
 * XREFs of AudioServerGetDevicePeriod @ 0x1800C3E80
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18004039C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180095B88 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x1800BC0B8 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 */

__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  __int64 v8; // rcx
  struct _TP_TIMER **v9; // rax
  __int64 v10; // r8
  int ConnectorFormatForProcessingMode; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // edx
  int v13; // r8d
  int v14; // ecx
  int v15; // edx
  void *v16; // rcx
  struct _GUID v17; // xmm6
  int *v18; // rbx
  void (*v19)(void); // rax
  unsigned int v21; // [rsp+28h] [rbp-E0h]
  unsigned int v22; // [rsp+48h] [rbp-C0h]
  CEndpointCharacteristics *v23; // [rsp+78h] [rbp-90h] BYREF
  int v24; // [rsp+80h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v26; // [rsp+98h] [rbp-70h] BYREF
  struct _TP_TIMER *v27[6]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v28; // [rsp+D8h] [rbp-30h]
  __int128 v29; // [rsp+E8h] [rbp-20h] BYREF

  v28 = *a3;
  v29 = v28;
  EtwEventActivityIdControl(4LL, &v29);
  v9 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              v8,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(v27, v9[1], v10, (struct _TP_TIMER *)L"AudioServerGetDevicePeriod");
  v23 = 0LL;
  ConnectorFormatForProcessingMode = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( ConnectorFormatForProcessingMode >= 0 )
  {
    ConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                         g_pEndpointCharacteristicsCache,
                                         a2,
                                         0LL,
                                         &v23);
    if ( ConnectorFormatForProcessingMode >= 0 )
    {
      if ( a5 )
      {
        v13 = *((_DWORD *)a3 + 26);
        v14 = *((_DWORD *)a3 + 4);
        v22 = *((_DWORD *)a3 + 10);
        v21 = *((_DWORD *)v23 + 37) == 1;
        v15 = *((_DWORD *)a3 + 6);
        pv = 0LL;
        ConnectorFormatForProcessingMode = DeriveAudioProcessingModeConfiguration(
                                             v14,
                                             v15,
                                             v13,
                                             v23,
                                             v21,
                                             0,
                                             eHostProcessConnector,
                                             0,
                                             v22,
                                             0,
                                             &v26,
                                             0LL,
                                             0LL,
                                             0LL);
        if ( ConnectorFormatForProcessingMode < 0 )
        {
          v16 = 0LL;
LABEL_6:
          CoTaskMemFree(v16);
          goto LABEL_13;
        }
        v17 = v26;
        ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                             v23,
                                             0,
                                             &v26,
                                             (struct tWAVEFORMATEX **)&pv);
        if ( ConnectorFormatForProcessingMode < 0 )
        {
          v16 = pv;
          goto LABEL_6;
        }
        v18 = (int *)pv;
        v26 = v17;
        ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                             (__int64)v23,
                                             0,
                                             (unsigned __int16 *)pv,
                                             &v26,
                                             0,
                                             &v24,
                                             0LL,
                                             0LL,
                                             0LL);
        v16 = v18;
        if ( ConnectorFormatForProcessingMode < 0 )
          goto LABEL_6;
        *a5 = (unsigned int)(int)((double)v24 * 10000000.0 / (double)v18[1] + 0.5);
        CoTaskMemFree(v18);
      }
      if ( a6 )
        ConnectorFormatForProcessingMode = CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(v23, v12, a6);
LABEL_13:
      if ( ConnectorFormatForProcessingMode >= 0 )
        goto LABEL_15;
    }
  }
  AudSrvTraceLoggingErrorHelper("AudioServerGetDevicePeriod", 4295, ConnectorFormatForProcessingMode);
LABEL_15:
  if ( v23 )
  {
    v19 = *(void (**)(void))(*(_QWORD *)v23 + 16LL);
    if ( (char *)v19 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((__int64)v23);
    else
      v19();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v27);
  EtwEventActivityIdControl(4LL, &v29);
  return (unsigned int)ConnectorFormatForProcessingMode;
}

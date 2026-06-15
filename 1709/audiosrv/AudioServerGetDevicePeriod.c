/*
 * XREFs of AudioServerGetDevicePeriod @ 0x18008EC00
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180021E58 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180030384 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18003162C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18005A524 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  __int64 v8; // r8
  void *v9; // r8
  int ConnectorFormatForProcessingMode; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // edx
  int v12; // r8d
  unsigned int v13; // ecx
  int v14; // edx
  int *v15; // rcx
  struct _GUID v16; // xmm6
  int *v17; // rbx
  void (*v18)(void); // rax
  unsigned int v20; // [rsp+28h] [rbp-E0h]
  unsigned int v21; // [rsp+48h] [rbp-C0h]
  WINBOOL fPending[2]; // [rsp+78h] [rbp-90h] BYREF
  struct CEndpointCharacteristics *v23; // [rsp+80h] [rbp-88h] BYREF
  LPVOID Context[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v25; // [rsp+98h] [rbp-70h] BYREF
  HANDLE Parameter[6]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v27; // [rsp+D8h] [rbp-30h]
  __int128 v28; // [rsp+E8h] [rbp-20h] BYREF

  v27 = *a3;
  v28 = v27;
  EtwEventActivityIdControl(4LL, &v28);
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, Context);
  if ( fPending[0] )
  {
    Context[0] = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v9);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  CWatchdogTimer::CWatchdogTimer(
    Parameter,
    *((const struct _TlgProvider_t **)Context[0] + 1),
    v8,
    L"AudioServerGetDevicePeriod");
  v23 = 0LL;
  ConnectorFormatForProcessingMode = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( ConnectorFormatForProcessingMode >= 0 )
  {
    ConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                         g_pEndpointCharacteristicsCache,
                                         a2,
                                         0LL,
                                         &v23);
    if ( ConnectorFormatForProcessingMode >= 0 )
    {
      if ( a5 )
      {
        v12 = *((_DWORD *)a3 + 26);
        v13 = *((_DWORD *)a3 + 4);
        v21 = *((_DWORD *)a3 + 10);
        v20 = *((_DWORD *)v23 + 37) == 1;
        v14 = *((_DWORD *)a3 + 6);
        Context[0] = 0LL;
        ConnectorFormatForProcessingMode = DeriveAudioProcessingModeConfiguration(
                                             v13,
                                             v14,
                                             v12,
                                             v23,
                                             v20,
                                             0,
                                             eHostProcessConnector,
                                             0,
                                             v21,
                                             &v25,
                                             0LL,
                                             0LL,
                                             0LL);
        if ( ConnectorFormatForProcessingMode < 0 )
        {
          v15 = 0LL;
LABEL_8:
          CoTaskMemFree(v15);
          goto LABEL_15;
        }
        v16 = v25;
        ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                             v23,
                                             0,
                                             &v25,
                                             (struct tWAVEFORMATEX **)Context);
        if ( ConnectorFormatForProcessingMode < 0 )
        {
          v15 = (int *)Context[0];
          goto LABEL_8;
        }
        v17 = (int *)Context[0];
        v25 = v16;
        ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                             (__int64)v23,
                                             0,
                                             (const struct tWAVEFORMATEX *)Context[0],
                                             &v25,
                                             0,
                                             fPending,
                                             0LL,
                                             0LL,
                                             0LL);
        v15 = v17;
        if ( ConnectorFormatForProcessingMode < 0 )
          goto LABEL_8;
        *a5 = (unsigned int)(int)((double)fPending[0] * 10000000.0 / (double)v17[1] + 0.5);
        CoTaskMemFree(v17);
      }
      if ( a6 )
        ConnectorFormatForProcessingMode = CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(v23, v11, a6);
LABEL_15:
      if ( ConnectorFormatForProcessingMode >= 0 )
        goto LABEL_17;
    }
  }
  AudSrvTraceLoggingErrorHelper("AudioServerGetDevicePeriod", 3985, ConnectorFormatForProcessingMode);
LABEL_17:
  if ( v23 )
  {
    v18 = *(void (**)(void))(*(_QWORD *)v23 + 16LL);
    if ( (char *)v18 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v23);
    else
      v18();
  }
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  EtwEventActivityIdControl(4LL, &v28);
  return (unsigned int)ConnectorFormatForProcessingMode;
}

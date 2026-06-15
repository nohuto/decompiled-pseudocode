/*
 * XREFs of AudioServerGetMixFormat @ 0x1800014A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0 @ 0x1800021C0 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x1800021FC (McTemplateU0zqttq.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039070 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180063980 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetMixFormat(__int64 a1, __int64 a2, __int128 *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  int v8; // ecx
  unsigned __int16 *v9; // r14
  __int64 v10; // rbx
  int v11; // edi
  __int64 v12; // rcx
  int (*v13)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // eax
  void *v15; // rax
  CEndpointCharacteristics *v17; // [rsp+70h] [rbp-59h] BYREF
  void *Src; // [rsp+78h] [rbp-51h] BYREF
  struct _GUID v19; // [rsp+80h] [rbp-49h] BYREF
  _BYTE pv[48]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v21; // [rsp+C0h] [rbp-9h]
  __int128 v22; // [rsp+D0h] [rbp+7h] BYREF

  v21 = *a3;
  v22 = v21;
  EtwEventActivityIdControl(4LL, &v22);
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v7,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v9 = 0LL;
  v10 = 0LL;
  v17 = 0LL;
  Src = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      v8,
      (unsigned int)&AudioSrv_GetMixFormat_Task_Start,
      a2,
      *((_DWORD *)a3 + 4),
      *((_DWORD *)a3 + 6),
      *((_DWORD *)a3 + 9),
      *((_DWORD *)a3 + 5));
  *a4 = 0LL;
  v11 = 0;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 72LL))(
          g_PolicyManager,
          *((unsigned int *)a3 + 4))
    || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5)) )
  {
    v11 = -2147024809;
    AudSrvTraceLoggingErrorHelper("ValidateVadServerSettings", 0x53Bu, -2147024809);
  }
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            &v17);
    if ( v11 >= 0 )
    {
      v10 = *((_QWORD *)v17 + 2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = DeriveAudioProcessingModeConfiguration(
              *((unsigned int *)a3 + 4),
              *((unsigned int *)a3 + 6),
              *((unsigned int *)a3 + 26));
      if ( v11 >= 0 )
      {
        MixFormat = CEndpointCharacteristics::GetMixFormat(
                      v17,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                      &v19,
                      v13,
                      (struct tWAVEFORMATEX **)&Src);
        v9 = (unsigned __int16 *)Src;
        v11 = MixFormat;
        if ( MixFormat >= 0 )
        {
          v15 = operator new[](*((unsigned __int16 *)Src + 8) + 18LL, (const struct std::nothrow_t *)&std::nothrow);
          *a4 = v15;
          if ( v15 )
            memcpy_0(v15, v9, v9[8] + 18LL);
          else
            v11 = -2147024882;
        }
      }
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v12, &AudioSrv_GetMixFormat_Task_Stop);
  if ( v9 )
    CoTaskMemFree(v9);
  if ( v11 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 0xF8Eu, v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v17 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v17 + 16LL))(v17);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v22);
  return (unsigned int)v11;
}

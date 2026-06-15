/*
 * XREFs of AudioServerGetMixFormat @ 0x180012990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180035664 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     McTemplateU0 @ 0x1800906F8 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x180090734 (McTemplateU0zqttq.c)
 */

__int64 __fastcall AudioServerGetMixFormat(__int64 a1, __int64 a2, __int128 *a3, _QWORD *a4)
{
  void *v7; // rbx
  DWORD DueTime; // edi
  DWORD CurrentThreadId; // eax
  int v10; // ecx
  unsigned __int16 *v11; // rsi
  __int64 v12; // rbx
  struct IAudioPolicyManager *v13; // rcx
  int v14; // edi
  __int64 v15; // rcx
  int (*v16)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // eax
  void *v18; // rax
  CEndpointCharacteristics *v20; // [rsp+70h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+78h] [rbp-61h] BYREF
  void *Src; // [rsp+80h] [rbp-59h] BYREF
  LPVOID Context[2]; // [rsp+90h] [rbp-49h] BYREF
  void *phNewTimer; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-31h]
  DWORD v26; // [rsp+B0h] [rbp-29h]
  const wchar_t *v27; // [rsp+B8h] [rbp-21h]
  void *v28; // [rsp+C0h] [rbp-19h]
  char v29; // [rsp+C8h] [rbp-11h]
  __int128 v30; // [rsp+D0h] [rbp-9h]
  __int128 v31; // [rsp+E0h] [rbp+7h] BYREF

  v30 = *a3;
  v31 = v30;
  EtwEventActivityIdControl(4LL, &v31);
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, Context);
  if ( fPending )
  {
    Context[0] = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v7 = g_AudioHealthMonitor;
  DueTime = g_AudioSrvWatchDogTimerInMs;
  v25 = *((_QWORD *)Context[0] + 1);
  phNewTimer = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v28 = v7;
  v26 = CurrentThreadId;
  v27 = L"AudioServerGetMixFormat";
  v29 = 0;
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer(&phNewTimer, 0LL, CWatchdogTimer::TimerCallback, &phNewTimer, DueTime, 0, 0x20u);
  v11 = 0LL;
  Src = 0LL;
  v12 = 0LL;
  v20 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      v10,
      (unsigned int)&AudioSrv_GetMixFormat_Task_Start,
      a2,
      *((_DWORD *)a3 + 4),
      *((_DWORD *)a3 + 6),
      *((_DWORD *)a3 + 9),
      *((_DWORD *)a3 + 5));
  v13 = g_PolicyManager;
  v14 = 0;
  *a4 = 0LL;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)v13 + 64LL))(
          v13,
          *((unsigned int *)a3 + 4))
    || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5)) )
  {
    v14 = -2147024809;
    AudSrvTraceLoggingErrorHelper("ValidateVadServerSettings", 0x4E1u, -2147024809);
  }
  if ( v14 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            &v20);
    if ( v14 >= 0 )
    {
      v12 = *((_QWORD *)v20 + 2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v14 = DeriveAudioProcessingModeConfiguration(
              *((unsigned int *)a3 + 4),
              *((unsigned int *)a3 + 6),
              *((unsigned int *)a3 + 26));
      if ( v14 >= 0 )
      {
        MixFormat = CEndpointCharacteristics::GetMixFormat(
                      v20,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                      (struct _GUID *)Context,
                      v16,
                      (struct tWAVEFORMATEX **)&Src);
        v11 = (unsigned __int16 *)Src;
        v14 = MixFormat;
        if ( MixFormat >= 0 )
        {
          v18 = operator new[](*((unsigned __int16 *)Src + 8) + 18LL, (const struct std::nothrow_t *)&std::nothrow);
          *a4 = v18;
          if ( v18 )
            memcpy_0(v18, v11, v11[8] + 18LL);
          else
            v14 = -2147024882;
        }
      }
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v15, &AudioSrv_GetMixFormat_Task_Stop);
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 0xE2Bu, v14);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v20 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v20 + 16LL))(v20);
  if ( phNewTimer )
  {
    DeleteTimerQueueTimer(0LL, phNewTimer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    phNewTimer = 0LL;
  }
  if ( v29 && v28 )
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v28 + 8LL))(v28, v25);
  EtwEventActivityIdControl(4LL, &v31);
  return (unsigned int)v14;
}

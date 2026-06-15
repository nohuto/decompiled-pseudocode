/*
 * XREFs of ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800AD460
 * Callers:
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800AADAC (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800AB760 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800AD680 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAXXZ @ 0x1800ACB0C (-ResetPolicyGainStages@CAudioSession@@AEAAXXZ.c)
 *     WPP_SF_Sd @ 0x1800ADF18 (WPP_SF_Sd.c)
 *     WPP_SF_Sdd @ 0x1800AE008 (WPP_SF_Sdd.c)
 */

__int64 __fastcall CAudioSession::SetMute(CAudioSession *this, int a2, const struct _GUID *a3, int a4, int *a5)
{
  int *v5; // r14
  int v9; // ebx
  int v10; // esi
  __int64 v11; // rcx
  TraceLoggingHProvider *v12; // rax
  const WCHAR *v13; // rdx
  int v14; // r10d
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  TraceLoggingHProvider v17; // r11
  UINT32 cData; // [rsp+20h] [rbp-91h]
  int v20; // [rsp+40h] [rbp-71h] BYREF
  _BYTE v21[4]; // [rsp+44h] [rbp-6Dh] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-69h] BYREF
  char v23; // [rsp+50h] [rbp-61h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-51h] BYREF
  int *v25; // [rsp+80h] [rbp-31h]
  __int64 v26; // [rsp+88h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-21h] BYREF
  int *v28; // [rsp+A0h] [rbp-11h]
  __int64 v29; // [rsp+A8h] [rbp-9h]
  _BYTE *v30; // [rsp+B0h] [rbp-1h]
  __int64 v31; // [rsp+B8h] [rbp+7h]
  int v32; // [rsp+118h] [rbp+67h] BYREF

  v32 = a2;
  v5 = a5;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19,
      (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      *((_QWORD *)this + 91),
      a2);
  }
  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 808);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = *((_DWORD *)this + 213);
  if ( v10 != v32 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20,
        (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
        *((_QWORD *)this + 91),
        v10,
        v32);
    }
    CAudioSession::ResetPolicyGainStages(this);
    *((_DWORD *)this + 213) = v32;
    if ( (*(int (__fastcall **)(CAudioSession *, _BYTE *))(*(_QWORD *)this + 128LL))(this, v21) >= 0 )
    {
      v12 = (TraceLoggingHProvider *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                       v11,
                                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v12[1] > 4u )
      {
        if ( TlgKeywordOn(v12[1], 0x400000000000uLL) )
        {
          v13 = (const WCHAR *)*((_QWORD *)this + 91);
          v25 = &v32;
          v26 = 4LL;
          TlgCreateWsz(&pDesc, v13);
          v14 = *((_DWORD *)this + 180);
          v28 = &v20;
          v30 = v21;
          v20 = v14;
          v29 = 4LL;
          v31 = 4LL;
          TlgWrite(v17, &unk_180145382, v15, v16, 6u, &pData);
        }
      }
    }
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v10 != v32 && !a4 )
  {
    LOBYTE(cData) = 0;
    (*(void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, UINT32, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
      (char *)this + 16,
      0LL,
      a3,
      0xFFFFFFFFLL,
      cData,
      0LL);
  }
  if ( v5 )
  {
    LOBYTE(v9) = v10 == v32;
    *v5 = v9;
  }
  return 0LL;
}

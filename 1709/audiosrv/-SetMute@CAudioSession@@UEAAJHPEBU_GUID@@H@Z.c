/*
 * XREFs of ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180076070
 * Callers:
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x180072CE8 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180073BE0 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x180076450 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18006356C (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     ??0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z @ 0x18006FCE8 (--0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x180075718 (-ResetPolicyGainStages@CAudioSession@@AEAAJXZ.c)
 *     WPP_SF_Sdd @ 0x180076D94 (WPP_SF_Sdd.c)
 */

__int64 __fastcall CAudioSession::SetMute(const wchar_t **this, int a2, const struct _GUID *a3, int a4)
{
  CRefCountedObject *v4; // rsi
  int v6; // edi
  char v7; // r15
  int v10; // r14d
  int v11; // eax
  int v12; // ecx
  CMuteGainStage *v13; // rax
  const struct _GUID *v14; // rdx
  bool v15; // zf
  void *v16; // r8
  __int64 v17; // r11
  const WCHAR *v18; // rdx
  int v19; // edx
  __int64 v20; // r11
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  TraceLoggingHProvider v23; // r10
  int cData; // [rsp+20h] [rbp-99h]
  WINBOOL fPending; // [rsp+40h] [rbp-79h] BYREF
  int v27; // [rsp+44h] [rbp-75h] BYREF
  char v28[8]; // [rsp+48h] [rbp-71h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-69h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-61h] BYREF
  char v31; // [rsp+60h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-49h] BYREF
  int *v33; // [rsp+90h] [rbp-29h]
  __int64 v34; // [rsp+98h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-19h] BYREF
  int *v36; // [rsp+B0h] [rbp-9h]
  __int64 v37; // [rsp+B8h] [rbp-1h]
  char *v38; // [rsp+C0h] [rbp+7h]
  __int64 v39; // [rsp+C8h] [rbp+Fh]
  int v40; // [rsp+128h] [rbp+6Fh] BYREF

  v40 = a2;
  v4 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    cData = a2;
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x13u,
      (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      this[99]);
  }
  v31 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 108);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = *((_DWORD *)this + 227);
  if ( v10 != v40 )
  {
    v7 = 1;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20,
        (unsigned int)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        (unsigned int)this[99],
        v10,
        v40);
    }
    v11 = CAudioSession::ResetPolicyGainStages((CAudioSession *)this);
    v12 = v40;
    v6 = v11;
    *((_DWORD *)this + 227) = v40;
    if ( v12 )
    {
      v13 = (CMuteGainStage *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v13 )
        v4 = CMuteGainStage::CMuteGainStage(v13, v14);
      if ( v4 )
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x15u,
            (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
            this[99]);
        }
        v6 = (*((__int64 (__fastcall **)(char *, CRefCountedObject *, const struct _GUID *))this[3] + 5))(
               (char *)this + 24,
               v4,
               a3);
        CRefCountedObject::Release(v4);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x16u,
          (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
          this[99]);
      }
      v6 = (*((__int64 (__fastcall **)(char *, __int128 *, const struct _GUID *, _QWORD, _QWORD))this[3] + 6))(
             (char *)this + 24,
             &MutePolicyGuid,
             a3,
             0LL,
             0LL);
    }
    v15 = v6 == 0;
    if ( v6 >= 0 )
    {
      if ( (*((int (__fastcall **)(const wchar_t **, char *))*this + 15))(this, v28) >= 0 )
      {
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
        if ( fPending )
        {
          Context = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v16);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        if ( **((_DWORD **)Context + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
        {
          v18 = this[99];
          v33 = &v40;
          v34 = v17;
          TlgCreateWsz(&pDesc, v18);
          v19 = *((_DWORD *)this + 196);
          v36 = &v27;
          v38 = v28;
          v27 = v19;
          v37 = v20;
          v39 = v20;
          TlgWrite(v23, &unk_18010EEA9, v21, v22, 6u, &pData);
        }
      }
      v15 = v6 == 0;
    }
    if ( !v15 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        cData = v6;
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x17u,
          (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
          this[99]);
      }
      *((_DWORD *)this + 227) = v10;
    }
  }
  if ( v31 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v7 && !a4 )
  {
    LOBYTE(cData) = 0;
    (*((void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, int, _QWORD))this[2] + 3))(
      (char *)this + 16,
      0LL,
      a3,
      0xFFFFFFFFLL,
      cData,
      0LL);
  }
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::SetMute", 1073, v6);
  return (unsigned int)v6;
}

/*
 * XREFs of ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x18008FAE0
 * Callers:
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x18008D518 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18008DE10 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z @ 0x18008FE40 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x180081C9C (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     ??0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z @ 0x180089D7C (--0CMuteGainStage@@QEAA@PEBU_GUID@@_J_N@Z.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAJXZ @ 0x18008F19C (-ResetPolicyGainStages@CAudioSession@@AEAAJXZ.c)
 *     WPP_SF_Sdd @ 0x1800907E8 (WPP_SF_Sdd.c)
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
  __int64 v16; // rcx
  TraceLoggingHProvider *v17; // rax
  __int64 v18; // r11
  const WCHAR *v19; // rdx
  __int64 v20; // r11
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  TraceLoggingHProvider v23; // r10
  int cData; // [rsp+20h] [rbp-89h]
  char v26[8]; // [rsp+40h] [rbp-69h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-61h] BYREF
  char v28; // [rsp+50h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  int *v30; // [rsp+80h] [rbp-29h]
  __int64 v31; // [rsp+88h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  char *v33; // [rsp+A0h] [rbp-9h]
  __int64 v34; // [rsp+A8h] [rbp-1h]
  int v35; // [rsp+118h] [rbp+6Fh] BYREF

  v35 = a2;
  v4 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    cData = a2;
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x15u,
      (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      this[108]);
  }
  v28 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 110);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = *((_DWORD *)this + 231);
  if ( v10 != v35 )
  {
    v7 = 1;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        22,
        (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        (unsigned int)this[108],
        v10,
        v35);
    }
    v11 = CAudioSession::ResetPolicyGainStages((CAudioSession *)this);
    v12 = v35;
    v6 = v11;
    *((_DWORD *)this + 231) = v35;
    if ( v12 )
    {
      v13 = (CMuteGainStage *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v13 )
        v4 = CMuteGainStage::CMuteGainStage(v13, v14);
      if ( v4 )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x17u,
            (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
            this[108]);
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
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x18u,
          (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
          this[108]);
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
      if ( (*((int (__fastcall **)(const wchar_t **, char *))*this + 16))(this, v26) >= 0 )
      {
        v17 = (TraceLoggingHProvider *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                         v16,
                                         lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        if ( *(_DWORD *)v17[1] > 4u )
        {
          if ( TlgKeywordOn(v17[1], 0x400000000000uLL) )
          {
            v19 = this[108];
            v30 = &v35;
            v31 = v18;
            TlgCreateWsz(&pDesc, v19);
            v34 = v20;
            v33 = v26;
            TlgWrite(v23, &unk_1800F8E69, v21, v22, 5u, &pData);
          }
        }
      }
      v15 = v6 == 0;
    }
    if ( !v15 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        cData = v6;
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x19u,
          (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
          this[108]);
      }
      *((_DWORD *)this + 231) = v10;
    }
  }
  if ( v28 )
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
    AudSrvTraceLoggingErrorHelper("CAudioSession::SetMute", 1109, v6);
  return (unsigned int)v6;
}

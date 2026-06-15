/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140012AF0
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003D250 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ??0?$CWatchdogTimer@$01@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x14000184C (--0-$CWatchdogTimer@$01@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$01@@QEAA@XZ @ 0x140001918 (--1-$CWatchdogTimer@$01@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400026AC (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x1400033B4 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140007B00 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000EB40 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14002EC2C (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::Initialize(
        CSystemAudioDeviceSharedBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        unsigned int a4)
{
  __int128 v4; // xmm0
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // r8
  HRESULT Instance; // edi
  __int64 v13; // rcx
  CAudioDeviceGraph *v14; // rcx
  struct IAudioGraphCallback *v15; // r8
  __int64 (__fastcall *v16)(CAudioDeviceGraph *, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, struct IAudioGraphCallback *, int); // rax
  int v17; // eax
  int v18; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v21; // [rsp+40h] [rbp-C8h]
  _WORD v22[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v23; // [rsp+4Ch] [rbp-BCh]
  __int128 v24; // [rsp+60h] [rbp-A8h]
  __int64 v25; // [rsp+70h] [rbp-98h]
  __int64 v26; // [rsp+78h] [rbp-90h]
  int v27; // [rsp+80h] [rbp-88h]
  __int64 v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  struct _TP_TIMER *pv[6]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v31; // [rsp+C8h] [rbp-40h]
  __int128 v32; // [rsp+D8h] [rbp-30h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 152);
  *(_OWORD *)((char *)this + 248) = v4;
  v31 = v4;
  v32 = v4;
  EtwEventActivityIdControl(4LL, &v32);
  v10 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
          v9,
          lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  CWatchdogTimer<2>::CWatchdogTimer<2>(
    pv,
    (struct _TP_TIMER *)v10[1],
    v11,
    (struct _TP_TIMER *)L"CSystemAudioDeviceSharedBase::Initialize",
    (__int64)&pftDueTime);
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v22, 0, 0x40uLL);
    v22[0] = 80;
    v24 = AEWMIGUID_PERFORMANCE;
    HIDWORD(v25) = 0x20000;
    v23 = 1033;
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v22);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  LOBYTE(v21) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !a3 )
  {
    Instance = -2147024809;
    goto LABEL_25;
  }
  Instance = CoCreateInstance(
               &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
               0LL,
               0x17u,
               &GUID_3c169ff7_37b2_484c_b199_c3155590f316,
               (LPVOID *)this + 41);
  if ( Instance < 0 )
    goto LABEL_25;
  *((_DWORD *)this + 56) = a4;
  if ( *((struct IAudioGraphCallback **)this + 40) != a3 )
  {
    (*(void (__fastcall **)(struct IAudioGraphCallback *))(*(_QWORD *)a3 + 8LL))(a3);
    v13 = *((_QWORD *)this + 40);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    *((_QWORD *)this + 40) = a3;
    a4 = *((_DWORD *)this + 56);
  }
  v14 = (CAudioDeviceGraph *)*((_QWORD *)this + 41);
  v15 = (CSystemAudioDeviceSharedBase *)((char *)this + 8);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
  v16 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, struct IAudioGraphCallback *, int))(*(_QWORD *)v14 + 24LL);
  v17 = v16 == CAudioDeviceGraph::Initialize ? CAudioDeviceGraph::Initialize(v14, a2, v15, a4) : v16(v14, a2, v15, a4);
  Instance = v17;
  if ( v17 < 0 )
    goto LABEL_25;
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 88) = *((_DWORD *)a2 + 25);
  v18 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
  *((_DWORD *)this + 85) = v18;
  if ( !v18 )
  {
    Instance = -2147024882;
    goto LABEL_25;
  }
  Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
  if ( Instance < 0 )
  {
LABEL_25:
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 208LL))(this);
    goto LABEL_16;
  }
  if ( *((_DWORD *)this + 88) == 1 )
    CSystemAudioDeviceSharedBase::SetGraphState(this, 3LL);
LABEL_16:
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v22, 0, 0x40uLL);
    v22[0] = 80;
    v24 = AEWMIGUID_PERFORMANCE;
    HIDWORD(v25) = 0x20000;
    v23 = 1034;
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v22);
  }
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_303e3d63e4de38f5f581b19c1b1d6ae5_Traceguids,
        (unsigned int)Instance);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::Initialize", 0xC1u, Instance);
  }
  PublishDeviceGraphWnfState();
  if ( (_BYTE)v21 )
    LeaveCriticalSection(lpCriticalSection);
  CWatchdogTimer<2>::~CWatchdogTimer<2>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v32);
  return (unsigned int)Instance;
}

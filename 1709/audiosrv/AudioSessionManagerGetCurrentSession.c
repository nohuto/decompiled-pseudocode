/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x180012D30
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180015510 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerGetCurrentSession(
        CAudioSessionManager ***a1,
        struct _GUID *a2,
        unsigned int a3,
        void **a4,
        unsigned __int16 **a5)
{
  CAudioSessionManager **v5; // r15
  void *v8; // rbx
  DWORD DueTime; // edi
  DWORD CurrentThreadId; // eax
  unsigned __int16 **v11; // r12
  int v12; // ebx
  struct IUnknown *v13; // rcx
  int v14; // edi
  unsigned int v15; // esi
  int OwningThread; // ebx
  int v17; // r14d
  unsigned int v18; // edi
  CAudioSessionManager *v19; // rcx
  int (*v20)(CAudioSessionManager *__hidden, struct IAudioProcess *, const struct _GUID *, unsigned int, unsigned int, int, void **, unsigned __int16 **); // rax
  int v21; // eax
  DWORD Period; // [rsp+28h] [rbp-59h]
  struct IAudioProcess *v24; // [rsp+50h] [rbp-31h] BYREF
  struct IUnknown *v25; // [rsp+58h] [rbp-29h] BYREF
  struct IUnknown *v26; // [rsp+60h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-19h] BYREF
  void *phNewTimer[2]; // [rsp+70h] [rbp-11h] BYREF
  DWORD v29; // [rsp+80h] [rbp-1h]
  const wchar_t *v30; // [rsp+88h] [rbp+7h]
  void *v31; // [rsp+90h] [rbp+Fh]
  char v32; // [rsp+98h] [rbp+17h]
  WINBOOL fPending; // [rsp+E0h] [rbp+5Fh] BYREF
  struct _GUID *v34; // [rsp+E8h] [rbp+67h]
  int v35; // [rsp+F8h] [rbp+77h] BYREF

  v34 = a2;
  v5 = *a1;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v8 = g_AudioHealthMonitor;
  DueTime = g_AudioSrvWatchDogTimerInMs;
  phNewTimer[1] = *((void **)Context + 1);
  phNewTimer[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v31 = v8;
  v29 = CurrentThreadId;
  v30 = L"AudioSessionManagerGetCurrentSession";
  v32 = 0;
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer(phNewTimer, 0LL, CWatchdogTimer::TimerCallback, phNewTimer, DueTime, 0, 0x20u);
  v11 = a5;
  *a5 = 0LL;
  *a4 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, *v5);
  }
  v12 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                 + 32LL))(
          g_PolicyManager,
          0LL,
          &v24);
  if ( v12 < 0 )
    goto LABEL_33;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          *((_QWORD *)*v5 + 30),
          &v26);
  if ( v12 < 0 )
    goto LABEL_33;
  v13 = v25;
  if ( v25 != v26 )
  {
    ATL::AtlComQIPtrAssign(&v25, v26, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v13 = v25;
  }
  if ( !v13 )
  {
    v12 = -2147467262;
LABEL_33:
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetCurrentSession", 0x848u, v12);
    goto LABEL_23;
  }
  v12 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v13->lpVtbl[1].QueryInterface)(v13, &v35);
  if ( v12 < 0 )
    goto LABEL_33;
  v14 = (a3 >> 28) & 1 | ~(unsigned __int8)(a3 >> 18) & 2;
  v15 = a3 & 0x60000000;
  if ( g_ADGProcess )
  {
    OwningThread = (int)g_ADGProcess[2].OwningThread;
    if ( OwningThread == (*(unsigned int (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v5[1] + 40LL))(v5[1]) )
      v15 = a3 & 0x40000000 | 0x20000000;
  }
  if ( (*(unsigned int (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v5[1] + 88LL))(v5[1]) )
  {
    v15 |= 0x200000u;
    v14 |= 0x40000000u;
  }
  v17 = a3 & 0x10000;
  v18 = v35 == 1 ? v14 & 0xFFFFFFFD : v14 | 8;
  v19 = *v5;
  Period = v17 != 0;
  v20 = *(int (**)(CAudioSessionManager *__hidden, struct IAudioProcess *, const struct _GUID *, unsigned int, unsigned int, int, void **, unsigned __int16 **))(*(_QWORD *)*v5 + 112LL);
  v21 = v20 == CAudioSessionManager::GetCurrentSession
      ? CAudioSessionManager::GetCurrentSession(v19, v24, v34, v18, v15, Period, a4, v11)
      : ((__int64 (__fastcall *)(CAudioSessionManager *, struct IAudioProcess *, struct _GUID *, _QWORD, unsigned int, DWORD, void **, unsigned __int16 **))v20)(
          v19,
          v24,
          v34,
          v18,
          v15,
          Period,
          a4,
          v11);
  v12 = v21;
  if ( v21 < 0 )
    goto LABEL_33;
LABEL_23:
  if ( v24 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v24 + 16LL))(v24);
    v24 = 0LL;
  }
  CWatchdogTimer::~CWatchdogTimer(phNewTimer);
  if ( v25 )
    ((void (__fastcall *)(struct IUnknown *))v25->lpVtbl->Release)(v25);
  if ( v26 )
    ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
  return (unsigned int)v12;
}

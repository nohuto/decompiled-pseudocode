/*
 * XREFs of ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001E970
 * Callers:
 *     AudioServerInitialize @ 0x18002E5B0 (AudioServerInitialize.c)
 *     asm_AudioServerInitializeStream @ 0x1800AFD50 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180016FF0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180017144 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017B18 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18001BC20 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?ReceiveSuccess@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z @ 0x18001DE40 (-ReceiveSuccess@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z.c)
 *     ?AddRef@CMonitor@@UEAAKXZ @ 0x180020350 (-AddRef@CMonitor@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x1800204E0 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180022900 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18002C040 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_dS @ 0x180090990 (WPP_SF_dS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioServerInitialize_Internal(
        void *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct _RTL_CRITICAL_SECTION *a5,
        struct _GUID *a6,
        unsigned int a7,
        struct VadServerSettings *a8,
        unsigned __int16 **a9,
        struct IProcessSubmixProxy *a10,
        void **a11)
{
  struct _TlgProvider_t *v14; // rcx
  CAudioHealthMonitor *v15; // rbx
  DWORD DueTime; // edi
  CAudioDGProcess *v17; // rcx
  CAudioDGProcess *v18; // rcx
  signed int v19; // ebx
  DWORD v20; // eax
  CMonitor *v21; // rdi
  unsigned int (__fastcall *v22)(CMonitor *__hidden); // rax
  __int64 (__fastcall *v23)(CVADServer *, struct IAudioProcess *, const unsigned __int16 *, unsigned int, unsigned int, const struct tWAVEFORMATEX *, const struct _GUID *, unsigned int, struct VadServerSettings *, unsigned __int16 **, struct IProcessSubmixProxy *); // rax
  int v24; // eax
  CAudioDGProcess *v25; // rcx
  unsigned int (__fastcall *v26)(CMonitor *__hidden); // rax
  __int64 (__fastcall *v27)(void *); // rax
  LPCRITICAL_SECTION v28; // rdi
  void (__fastcall *v30)(CAudioHealthMonitor *, const unsigned __int16 *, const struct _TlgProvider_t *); // rax
  int v32; // eax
  struct IAudioProcess *v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+68h] [rbp-98h]
  WINBOOL fPending; // [rsp+6Ch] [rbp-94h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-90h] BYREF
  char v37; // [rsp+78h] [rbp-88h]
  LPVOID Context; // [rsp+80h] [rbp-80h] BYREF
  CMonitor *v39; // [rsp+88h] [rbp-78h] BYREF
  struct IProcessSubmixProxy *v40; // [rsp+90h] [rbp-70h]
  unsigned __int16 **v41; // [rsp+98h] [rbp-68h]
  struct _GUID *v42; // [rsp+A0h] [rbp-60h]
  void *phNewTimer; // [rsp+A8h] [rbp-58h] BYREF
  struct _TlgProvider_t *v44; // [rsp+B0h] [rbp-50h]
  DWORD CurrentThreadId; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v46; // [rsp+C0h] [rbp-40h]
  CAudioHealthMonitor *v47; // [rsp+C8h] [rbp-38h]
  __int64 v48; // [rsp+D0h] [rbp-30h]
  __int128 v49; // [rsp+D8h] [rbp-28h]
  __int128 v50; // [rsp+E8h] [rbp-18h] BYREF

  v48 = -2LL;
  v34 = a4;
  lpCriticalSection = a5;
  v42 = a6;
  v41 = a9;
  v40 = a10;
  v49 = *(_OWORD *)a8;
  v50 = v49;
  EtwEventActivityIdControl(4LL, &v50);
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18012BF30;
    qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
  }
  v14 = (struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  v15 = (CAudioHealthMonitor *)g_AudioHealthMonitor;
  DueTime = g_AudioSrvWatchDogTimerInMs;
  phNewTimer = 0LL;
  v44 = v14;
  CurrentThreadId = GetCurrentThreadId();
  v46 = L"AudioServerInitialize_Internal";
  v47 = v15;
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer(&phNewTimer, 0LL, CWatchdogTimer::TimerCallback, &phNewTimer, DueTime, 0, 0x20u);
  v33 = 0LL;
  v39 = 0LL;
  *a11 = 0LL;
  CAudioDGProcess::LockADGProcess(v17);
  v19 = CAudioDGProcess::CheckADGStatus(v18);
  if ( v19 >= 0 )
  {
    v19 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL))(
            g_PolicyManager,
            a1,
            &v33);
    if ( v19 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v33 + 40LL))(v33);
      if ( (unsigned int)IsProcessAllowed(v20, a2) )
      {
        v19 = ATL::CComObject<CVADServer>::CreateInstance(&v39);
        v21 = v39;
        if ( !v19 )
        {
          v22 = *(unsigned int (__fastcall **)(CMonitor *__hidden))(*(_QWORD *)v39 + 8LL);
          if ( v22 == CMonitor::AddRef )
            CMonitor::AddRef(v39);
          else
            v22(v39);
          v23 = *(__int64 (__fastcall **)(CVADServer *, struct IAudioProcess *, const unsigned __int16 *, unsigned int, unsigned int, const struct tWAVEFORMATEX *, const struct _GUID *, unsigned int, struct VadServerSettings *, unsigned __int16 **, struct IProcessSubmixProxy *))(*(_QWORD *)v21 + 48LL);
          v24 = v23 == CVADServer::Initialize
              ? CVADServer::Initialize(
                  v21,
                  v33,
                  a2,
                  a3,
                  v34,
                  (const struct tWAVEFORMATEX *)lpCriticalSection,
                  v42,
                  a7,
                  a8,
                  v41,
                  v40)
              : ((__int64 (__fastcall *)(CMonitor *, struct IAudioProcess *, const unsigned __int16 *, _QWORD, unsigned int, LPCRITICAL_SECTION, struct _GUID *, unsigned int))v23)(
                  v21,
                  v33,
                  a2,
                  a3,
                  v34,
                  lpCriticalSection,
                  v42,
                  a7);
          v19 = v24;
          if ( v24 >= 0 )
          {
            CAudioDGProcess::LockADGProcess(v25);
            *a11 = v21;
            v26 = *(unsigned int (__fastcall **)(CMonitor *__hidden))(*(_QWORD *)v21 + 8LL);
            if ( v26 == CMonitor::AddRef )
              CMonitor::AddRef(v21);
            else
              v26(v21);
            v19 = 0;
          }
        }
        if ( v21 )
        {
          v27 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL);
          if ( v27 == ATL::CComObject<CVADServer>::Release )
            ATL::CComObject<CVADServer>::Release(v21);
          else
            v27(v21);
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v32 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v33 + 40LL))(v33);
          WPP_SF_dS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            60,
            (unsigned int)&WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
            v32,
            (__int64)a2);
        }
        v19 = -2147024891;
      }
    }
  }
  if ( v33 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v33 + 16LL))(v33);
    v33 = 0LL;
  }
  v28 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v37 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids);
  }
  if ( LODWORD(v28[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v28);
  if ( v37 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v19 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerInitialize_Internal", 0xAA3u, v19);
  if ( phNewTimer )
  {
    DeleteTimerQueueTimer(0LL, phNewTimer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    phNewTimer = 0LL;
  }
  if ( v47 )
  {
    v30 = *(void (__fastcall **)(CAudioHealthMonitor *, const unsigned __int16 *, const struct _TlgProvider_t *))(*(_QWORD *)v47 + 8LL);
    if ( v30 == CAudioHealthMonitor::ReceiveSuccess )
      CAudioHealthMonitor::ReceiveSuccess(v47, v46, v44);
    else
      v30(v47, v46, v44);
  }
  EtwEventActivityIdControl(4LL, &v50);
  return (unsigned int)v19;
}

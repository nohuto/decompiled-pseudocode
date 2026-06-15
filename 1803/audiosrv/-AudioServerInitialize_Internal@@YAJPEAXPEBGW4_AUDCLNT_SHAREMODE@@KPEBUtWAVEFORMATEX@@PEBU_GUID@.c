/*
 * XREFs of ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002F7B0
 * Callers:
 *     AudioServerInitialize @ 0x180017C00 (AudioServerInitialize.c)
 *     asm_AudioServerInitializeStream @ 0x1800D77B0 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180007B78 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180007CB4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x1800160A0 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180024820 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18002B0B4 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002B280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180032340 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18006339C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180063948 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dS @ 0x1800AE1B8 (WPP_SF_dS.c)
 *     ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x1800B5068 (-InternalRelease@-$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall AudioServerInitialize_Internal(
        void *a1,
        const unsigned __int16 *a2,
        enum _AUDCLNT_SHAREMODE a3,
        unsigned int a4,
        struct tWAVEFORMATEX *a5,
        struct _GUID *a6,
        unsigned int a7,
        struct VadServerSettings *a8,
        unsigned __int16 **a9,
        struct IProcessSubmixProxy *a10,
        void **a11)
{
  __int64 v14; // rdx
  void *v15; // r8
  struct _TP_TIMER *v16; // rcx
  void *v17; // rbx
  __int64 v18; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  LPCRITICAL_SECTION v20; // rbx
  CAudioDGProcess *v21; // rcx
  CAudioThreadPool *v22; // rdi
  struct _TP_TIMER *v23; // rcx
  void (__fastcall *v24)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rax
  void (__fastcall *v25)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int); // rax
  int v26; // edi
  DWORD v27; // eax
  int v28; // eax
  volatile int *v29; // rdx
  CVADServer *v30; // rbx
  unsigned int (__fastcall *v31)(__int64, volatile int *); // rax
  __int64 (__fastcall *v32)(CVADServer *, struct IAudioProcess *, const unsigned __int16 *, enum _AUDCLNT_SHAREMODE, unsigned int, const struct tWAVEFORMATEX *, const struct _GUID *, unsigned int, struct VadServerSettings *, __int64, struct IProcessSubmixProxy *); // rax
  int v33; // eax
  LPCRITICAL_SECTION v34; // rdi
  unsigned int (__fastcall *v35)(__int64, volatile int *); // rax
  __int64 (__fastcall *v36)(int *); // rax
  LPCRITICAL_SECTION v37; // rbx
  LPCRITICAL_SECTION v40; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+68h] [rbp-98h]
  struct IAudioProcess *v42; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v43; // [rsp+78h] [rbp-88h]
  WINBOOL fPending; // [rsp+7Ch] [rbp-84h] BYREF
  LPVOID Context; // [rsp+80h] [rbp-80h] BYREF
  struct _FILETIME pftDueTime; // [rsp+88h] [rbp-78h] BYREF
  CVADServer *v47; // [rsp+90h] [rbp-70h] BYREF
  struct IProcessSubmixProxy *v48; // [rsp+98h] [rbp-68h]
  unsigned __int16 **v49; // [rsp+A0h] [rbp-60h]
  struct _GUID *v50; // [rsp+A8h] [rbp-58h]
  struct tWAVEFORMATEX *v51; // [rsp+B0h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp-48h] BYREF
  char v53; // [rsp+C0h] [rbp-40h]
  PTP_TIMER pv[2]; // [rsp+C8h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+D8h] [rbp-28h]
  const wchar_t *v56; // [rsp+E0h] [rbp-20h]
  void *v57; // [rsp+E8h] [rbp-18h]
  char v58; // [rsp+F0h] [rbp-10h]
  int v59; // [rsp+F4h] [rbp-Ch]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  __int128 v61; // [rsp+100h] [rbp+0h]
  __int128 v62; // [rsp+110h] [rbp+10h] BYREF

  v60 = -2LL;
  v43 = a4;
  v51 = a5;
  v50 = a6;
  v49 = a9;
  v48 = a10;
  v61 = *(_OWORD *)a8;
  v62 = v61;
  EtwEventActivityIdControl(4LL, &v62);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v40 = (LPCRITICAL_SECTION)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v41 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v40, v14, v15);
  }
  v16 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
  v17 = g_AudioHealthMonitor;
  v18 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v16;
  CurrentThreadId = GetCurrentThreadId();
  v56 = L"AudioServerInitialize_Internal";
  v57 = v17;
  v58 = 0;
  v59 = 0;
  if ( (unsigned int)v18 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v18 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v18 / 3, 0);
    }
  }
  v42 = 0LL;
  v47 = 0LL;
  *a11 = 0LL;
  v20 = g_ADGProcess;
  v40 = g_ADGProcess;
  LOBYTE(v41) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v40);
  if ( ++LODWORD(v20[1].DebugInfo) == 1 )
  {
    v22 = ThreadPool;
    lpCriticalSection = v20;
    v53 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v23 = *(struct _TP_TIMER **)&v20[3].LockCount;
    if ( v23 )
    {
      v24 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)v22 + 24LL);
      if ( v24 == CAudioThreadPool::SetTimer )
        SetThreadpoolTimer(v23, 0LL, 0, 0);
      else
        v24(v22, v23, 0LL, 0, 0);
      v25 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, int))(*(_QWORD *)v22 + 32LL);
      if ( v25 == CAudioThreadPool::WaitForTimerCallbacks )
        WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)&v20[3].LockCount, 1);
      else
        v25(v22, *(struct _TP_TIMER **)&v20[3].LockCount, 1);
    }
    if ( v53 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v53 = 0;
    }
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v20);
  }
  if ( (_BYTE)v41 )
  {
    LeaveCriticalSection(v40);
    LOBYTE(v41) = 0;
  }
  v26 = CAudioDGProcess::CheckADGStatus(v21);
  if ( v26 >= 0 )
  {
    v26 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL))(
            g_PolicyManager,
            a1,
            &v42);
    if ( v26 >= 0 )
    {
      v27 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v42 + 40LL))(v42);
      if ( (unsigned int)IsProcessAllowed(v27, a2) )
      {
        v26 = ATL::CComObject<CVADServer>::CreateInstance(&v47);
        v30 = v47;
        if ( !v26 )
        {
          v31 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v47 + 8LL);
          if ( v31 == ATL::CComObject<CVADServer>::AddRef )
            Microsoft::WRL::Details::SafeUnknownIncrementReference((CVADServer *)((char *)v47 + 8), v29);
          else
            ((void (__fastcall *)(CVADServer *))v31)(v47);
          v32 = *(__int64 (__fastcall **)(CVADServer *, struct IAudioProcess *, const unsigned __int16 *, enum _AUDCLNT_SHAREMODE, unsigned int, const struct tWAVEFORMATEX *, const struct _GUID *, unsigned int, struct VadServerSettings *, __int64, struct IProcessSubmixProxy *))(*(_QWORD *)v30 + 48LL);
          v33 = v32 == CVADServer::Initialize
              ? CVADServer::Initialize(v30, v42, a2, a3, v43, v51, v50, a7, a8, (__int64)v49, v48)
              : ((__int64 (__fastcall *)(CVADServer *, struct IAudioProcess *, const unsigned __int16 *, _QWORD, unsigned int, struct tWAVEFORMATEX *, struct _GUID *, unsigned int))v32)(
                  v30,
                  v42,
                  a2,
                  (unsigned int)a3,
                  v43,
                  v51,
                  v50,
                  a7);
          v26 = v33;
          if ( v33 >= 0 )
          {
            v34 = g_ADGProcess;
            v40 = g_ADGProcess;
            LOBYTE(v41) = 0;
            ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v40);
            if ( ++LODWORD(v34[1].DebugInfo) == 1 )
            {
              CAudioDGProcess::CancelADGTerminationTimer(v34);
              CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v34);
            }
            if ( (_BYTE)v41 )
            {
              LeaveCriticalSection(v40);
              LOBYTE(v41) = 0;
            }
            *a11 = v30;
            v35 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v30 + 8LL);
            if ( v35 == ATL::CComObject<CVADServer>::AddRef )
              Microsoft::WRL::Details::StrongReference::IncrementStrongReference((CVADServer *)((char *)v30 + 8));
            else
              ((void (__fastcall *)(CVADServer *))v35)(v30);
            v26 = 0;
          }
        }
        if ( v30 )
        {
          v36 = *(__int64 (__fastcall **)(int *))(*(_QWORD *)v30 + 16LL);
          if ( v36 == ATL::CComObject<CVADServer>::Release )
          {
            if ( !(unsigned int)ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((char *)v30 + 8) )
            {
              (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
              (*(void (__fastcall **)(CVADServer *, __int64))(*(_QWORD *)v30 + 232LL))(v30, 1LL);
              (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
            }
          }
          else
          {
            v36((int *)v30);
          }
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v28 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v42 + 40LL))(v42);
          WPP_SF_dS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            55,
            (unsigned int)&WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids,
            v28,
            (__int64)a2);
        }
        v26 = -2147024891;
      }
    }
  }
  if ( v42 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v42 + 16LL))(v42);
    v42 = 0LL;
  }
  v37 = g_ADGProcess;
  v40 = g_ADGProcess;
  LOBYTE(v41) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v40);
  if ( LODWORD(v37[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v37);
  if ( (_BYTE)v41 )
  {
    LeaveCriticalSection(v40);
    LOBYTE(v41) = 0;
  }
  if ( v26 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerInitialize_Internal", 0xB77u, v26);
  if ( pv[0] )
  {
    SetThreadpoolTimer(pv[0], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv[0], 1);
    CloseThreadpoolTimer(pv[0]);
    pv[0] = 0LL;
  }
  if ( v58 && v57 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v57 + 8LL))(v57);
  EtwEventActivityIdControl(4LL, &v62);
  return (unsigned int)v26;
}

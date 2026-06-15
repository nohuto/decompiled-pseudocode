/*
 * XREFs of ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AD2C
 * Callers:
 *     AudioServerInitialize @ 0x18002CDC0 (AudioServerInitialize.c)
 *     asm_AudioServerInitializeStream @ 0x1800A05A0 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ??0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180009810 (--0CWatchdogTimer@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1CWatchdogTimer@@QEAA@XZ @ 0x18000989C (--1CWatchdogTimer@@QEAA@XZ.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18000A0DC (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?AddRef@CMonitor@@UEAAKXZ @ 0x180013250 (-AddRef@CMonitor@@UEAAKXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001D5C8 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D720 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D870 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180026F70 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18002B050 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x18002B120 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_dS @ 0x180076F3C (WPP_SF_dS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioServerInitialize_Internal(
        void *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct tWAVEFORMATEX *a5,
        struct _GUID *a6,
        unsigned int a7,
        struct VadServerSettings *a8,
        unsigned __int16 **a9,
        struct IProcessSubmixProxy *a10,
        void **a11)
{
  __int64 v15; // r8
  CAudioDGProcess *v16; // rcx
  CAudioDGProcess *v17; // rcx
  int v18; // edi
  DWORD v19; // eax
  CMonitor *v20; // rbx
  __int64 (__fastcall *v21)(CMonitor *); // rax
  __int64 (__fastcall *v22)(CVADServer *, struct IAudioProcess *, unsigned __int16 *, unsigned int, unsigned int, const struct tWAVEFORMATEX *, const struct _GUID *, unsigned int, struct VadServerSettings *, unsigned __int16 **, struct IProcessSubmixProxy *); // rax
  int v23; // eax
  CAudioDGProcess *v24; // rcx
  __int64 (__fastcall *v25)(CMonitor *); // rax
  __int64 (__fastcall *v26)(void *); // rax
  CAudioDGProcess *v27; // rcx
  int v29; // eax
  struct IAudioProcess *v30; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-90h] BYREF
  CMonitor *v33; // [rsp+78h] [rbp-88h] BYREF
  struct IProcessSubmixProxy *v34; // [rsp+80h] [rbp-80h]
  unsigned __int16 **v35; // [rsp+88h] [rbp-78h]
  struct _GUID *v36; // [rsp+90h] [rbp-70h]
  struct tWAVEFORMATEX *v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  HANDLE Parameter[6]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v40; // [rsp+D8h] [rbp-28h]
  __int128 v41; // [rsp+E8h] [rbp-18h] BYREF

  v38 = -2LL;
  v37 = a5;
  v36 = a6;
  v35 = a9;
  v34 = a10;
  v40 = *(_OWORD *)a8;
  v41 = v40;
  EtwEventActivityIdControl(4LL, &v41);
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
  CWatchdogTimer::CWatchdogTimer(
    Parameter,
    *((const struct _TlgProvider_t **)Context + 1),
    v15,
    L"AudioServerInitialize_Internal");
  v30 = 0LL;
  v33 = 0LL;
  *a11 = 0LL;
  CAudioDGProcess::LockADGProcess(v16);
  v18 = CAudioDGProcess::CheckADGStatus(v17);
  if ( v18 >= 0 )
  {
    v18 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL))(
            g_PolicyManager,
            a1,
            &v30);
    if ( v18 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v30 + 40LL))(v30);
      if ( (unsigned int)IsProcessAllowed(v19, a2) )
      {
        v18 = ATL::CComObject<CVADServer>::CreateInstance(&v33);
        v20 = v33;
        if ( !v18 )
        {
          v21 = *(__int64 (__fastcall **)(CMonitor *))(*(_QWORD *)v33 + 8LL);
          if ( v21 == CMonitor::AddRef )
            CMonitor::AddRef(v33);
          else
            v21(v33);
          v22 = *(__int64 (__fastcall **)(CVADServer *, struct IAudioProcess *, unsigned __int16 *, unsigned int, unsigned int, const struct tWAVEFORMATEX *, const struct _GUID *, unsigned int, struct VadServerSettings *, unsigned __int16 **, struct IProcessSubmixProxy *))(*(_QWORD *)v20 + 48LL);
          v23 = v22 == CVADServer::Initialize
              ? CVADServer::Initialize(v20, v30, a2, a3, a4, v37, v36, a7, a8, v35, v34)
              : ((__int64 (__fastcall *)(CMonitor *, struct IAudioProcess *, unsigned __int16 *, _QWORD, unsigned int, struct tWAVEFORMATEX *, struct _GUID *, unsigned int))v22)(
                  v20,
                  v30,
                  a2,
                  a3,
                  a4,
                  v37,
                  v36,
                  a7);
          v18 = v23;
          if ( v23 >= 0 )
          {
            CAudioDGProcess::LockADGProcess(v24);
            *a11 = v20;
            v25 = *(__int64 (__fastcall **)(CMonitor *))(*(_QWORD *)v20 + 8LL);
            if ( v25 == CMonitor::AddRef )
              CMonitor::AddRef(v20);
            else
              v25(v20);
            v18 = 0;
          }
        }
        if ( v20 )
        {
          v26 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL);
          if ( v26 == ATL::CComObject<CVADServer>::Release )
            ATL::CComObject<CVADServer>::Release(v20);
          else
            v26(v20);
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v29 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v30 + 40LL))(v30);
          WPP_SF_dS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            57,
            (unsigned int)&WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
            v29,
            (__int64)a2);
        }
        v18 = -2147024891;
      }
    }
  }
  v27 = v30;
  if ( v30 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v30 + 16LL))(v30);
    v30 = 0LL;
  }
  CAudioDGProcess::UnlockADGProcess(v27);
  if ( v18 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerInitialize_Internal", 0xA6Bu, v18);
  CWatchdogTimer::~CWatchdogTimer(Parameter);
  EtwEventActivityIdControl(4LL, &v41);
  return (unsigned int)v18;
}

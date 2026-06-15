/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x180003610
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800045E0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerGetCurrentSession(
        CAudioSessionManager ***a1,
        struct _GUID *a2,
        unsigned int a3,
        void **a4,
        unsigned __int16 **a5)
{
  CAudioSessionManager **v5; // r15
  unsigned __int16 **v8; // r13
  int v9; // ebx
  struct IUnknown *v10; // rcx
  int v11; // edi
  unsigned int v12; // esi
  int OwningThread; // ebx
  int v14; // r14d
  unsigned int v15; // edi
  CAudioSessionManager *v16; // rcx
  __int64 (__usercall *v17)@<rax>(CAudioSessionManager *__hidden@<rcx>, struct IAudioProcess *@<rdx>, const struct _GUID *@<r8>, unsigned int@<r9d>, unsigned int, int, void **, unsigned __int16 **); // rax
  int v18; // eax
  struct IUnknown *v20; // [rsp+50h] [rbp-21h] BYREF
  struct IUnknown *v21; // [rsp+58h] [rbp-19h] BYREF
  _BYTE pv[96]; // [rsp+60h] [rbp-11h] BYREF
  int v23; // [rsp+D0h] [rbp+5Fh] BYREF
  struct _GUID *v24; // [rsp+D8h] [rbp+67h]
  struct IAudioProcess *v25; // [rsp+E8h] [rbp+77h] BYREF

  v24 = a2;
  v5 = *a1;
  v21 = 0LL;
  v20 = 0LL;
  v25 = 0LL;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    a1,
    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v8 = a5;
  *a5 = 0LL;
  *a4 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 62LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, *v5);
  }
  v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL))(
         g_PolicyManager,
         0LL,
         &v25);
  if ( v9 < 0 )
    goto LABEL_29;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)*v5 + 38),
         &v21);
  if ( v9 < 0 )
    goto LABEL_29;
  v10 = v20;
  if ( v20 != v21 )
  {
    ATL::AtlComQIPtrAssign(&v20, v21, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v10 = v20;
  }
  if ( !v10 )
  {
    v9 = -2147467262;
LABEL_29:
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetCurrentSession", 0x91Bu, v9);
    goto LABEL_19;
  }
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v10->lpVtbl[1].QueryInterface)(v10, &v23);
  if ( v9 < 0 )
    goto LABEL_29;
  v11 = (a3 >> 28) & 1 | ~(unsigned __int8)(a3 >> 18) & 2;
  v12 = a3 & 0x60000000;
  if ( g_ADGProcess )
  {
    OwningThread = (int)g_ADGProcess[2].OwningThread;
    if ( OwningThread == (*(unsigned int (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v5[1] + 40LL))(v5[1]) )
      v12 = a3 & 0x40000000 | 0x20000000;
  }
  if ( (*(unsigned int (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v5[1] + 88LL))(v5[1]) )
  {
    v12 |= 0x200000u;
    v11 |= 0x40000000u;
  }
  v14 = a3 & 0x10000;
  v15 = v23 == 1 ? v11 & 0xFFFFFFFD : v11 | 8;
  v16 = *v5;
  v17 = *(__int64 (__usercall **)@<rax>(CAudioSessionManager *__hidden@<rcx>, struct IAudioProcess *@<rdx>, const struct _GUID *@<r8>, unsigned int@<r9d>, unsigned int, int, void **, unsigned __int16 **))(*(_QWORD *)*v5 + 112LL);
  v18 = v17 == CAudioSessionManager::GetCurrentSession
      ? CAudioSessionManager::GetCurrentSession(v16, v25, v24, v15, v12, v14 != 0, a4, v8)
      : ((__int64 (__fastcall *)(CAudioSessionManager *, struct IAudioProcess *, struct _GUID *, _QWORD))v17)(
          v16,
          v25,
          v24,
          v15);
  v9 = v18;
  if ( v18 < 0 )
    goto LABEL_29;
LABEL_19:
  if ( v25 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v25 + 16LL))(v25);
    v25 = 0LL;
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  return (unsigned int)v9;
}

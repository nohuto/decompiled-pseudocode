/*
 * XREFs of s_rtgGetDefaultAudioEndpoint @ 0x180036970
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x180035EA0 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 *     ?GetDefaultAudioEndpoint@PhoneCallAudio@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180036E40 (-GetDefaultAudioEndpoint@PhoneCallAudio@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4.c)
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@AEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIMMDevice@@@Z @ 0x18003FE30 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@AEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_rtgGetDefaultAudioEndpoint(
        RPC_BINDING_HANDLE Binding,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  struct IUnknown *v8; // rdi
  _WORD *v9; // r13
  struct _TP_TIMER *v10; // rcx
  void *v11; // rbx
  __int64 v12; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  _DWORD *v14; // rbx
  RPC_STATUS v15; // eax
  __int64 v16; // rcx
  int ApplicationDefaultEndpoint; // esi
  struct IUnknown *v18; // rcx
  struct IUnknown *v19; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
  int DefaultAudioEndpoint; // eax
  union _RTL_RUN_ONCE *v22; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v25; // rbx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  _WORD *v28; // rcx
  _WORD *v29; // rdx
  unsigned __int64 v30; // r8
  struct _FILETIME v31; // rcx
  struct _FILETIME v32; // rsi
  void *v33; // rax
  __int64 v34; // rdx
  void *v35; // r8
  struct IUnknown *v36; // rcx
  struct IUnknown *v37; // rax
  struct IUnknown *v38; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-61h] BYREF
  struct IUnknown *v40; // [rsp+38h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-51h] BYREF
  LPVOID v42; // [rsp+48h] [rbp-49h] BYREF
  struct IUnknown *v43; // [rsp+50h] [rbp-41h] BYREF
  struct IUnknown *v44; // [rsp+58h] [rbp-39h] BYREF
  unsigned int Pid; // [rsp+60h] [rbp-31h] BYREF
  union _RTL_RUN_ONCE *v46; // [rsp+68h] [rbp-29h] BYREF
  int v47; // [rsp+70h] [rbp-21h]
  PTP_TIMER pv[2]; // [rsp+78h] [rbp-19h] BYREF
  DWORD CurrentThreadId; // [rsp+88h] [rbp-9h]
  const wchar_t *v50; // [rsp+90h] [rbp-1h]
  void *v51; // [rsp+98h] [rbp+7h]
  char v52; // [rsp+A0h] [rbp+Fh]
  int v53; // [rsp+A4h] [rbp+13h]
  __int64 v54; // [rsp+A8h] [rbp+17h]
  WINBOOL fPending; // [rsp+100h] [rbp+6Fh] BYREF
  _QWORD *v56; // [rsp+108h] [rbp+77h]

  v56 = a4;
  v54 = -2LL;
  v42 = 0LL;
  v8 = 0LL;
  v40 = 0LL;
  v44 = 0LL;
  v9 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v46 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v47 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v46, v34, v35);
  }
  v10 = (struct _TP_TIMER *)*((_QWORD *)Context + 1);
  v11 = g_AudioHealthMonitor;
  v12 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v10;
  CurrentThreadId = GetCurrentThreadId();
  v50 = L"s_rtgGetDefaultAudioEndpoint";
  v51 = v11;
  v52 = 0;
  v53 = 0;
  if ( (unsigned int)v12 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v12 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v12 / 3, 0);
    }
  }
  if ( (int)a3 >= 7 )
  {
    ApplicationDefaultEndpoint = -2147024809;
    goto LABEL_30;
  }
  if ( !v56 || (v14 = a5) == 0LL )
  {
    ApplicationDefaultEndpoint = -2147467261;
    goto LABEL_30;
  }
  *a5 = 0;
  v15 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  ApplicationDefaultEndpoint = v15;
  if ( v15 > 0 )
    ApplicationDefaultEndpoint = (unsigned __int16)v15 | 0x80070000;
  if ( ApplicationDefaultEndpoint < 0 )
    goto LABEL_30;
  ApplicationDefaultEndpoint = CPolicyConfig::GetApplicationDefaultEndpoint(v16, Pid, a3, a2, (char **)&v40);
  v8 = v40;
  if ( ApplicationDefaultEndpoint < 0 )
  {
    v18 = v44;
    if ( v44 != g_TelephonyControl )
    {
      v19 = v44;
      v18 = 0LL;
      v44 = 0LL;
      if ( g_TelephonyControl )
      {
        ((void (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))g_TelephonyControl->lpVtbl->QueryInterface)(
          g_TelephonyControl,
          &GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4,
          &v44);
        v18 = v44;
      }
      if ( v19 )
      {
        ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
        v18 = v44;
      }
    }
    if ( v18 )
    {
      QueryInterface = v18->lpVtbl[1].QueryInterface;
      if ( (char *)QueryInterface == (char *)PhoneCallAudio::GetDefaultAudioEndpoint )
        DefaultAudioEndpoint = PhoneCallAudio::GetDefaultAudioEndpoint(v18, a2, a3, &v42);
      else
        DefaultAudioEndpoint = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD, LPVOID *))QueryInterface)(
                                 v18,
                                 a2,
                                 a3,
                                 &v42);
      ApplicationDefaultEndpoint = DefaultAudioEndpoint;
    }
    goto LABEL_23;
  }
  v40 = 0LL;
  v43 = 0LL;
  ApplicationDefaultEndpoint = mmdDevGetMMDeviceFromInterfaceId(v8, &v40);
  if ( ApplicationDefaultEndpoint < 0 )
  {
    v36 = v43;
LABEL_64:
    if ( v36 )
      ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
    if ( v40 )
      ((void (__fastcall *)(struct IUnknown *))v40->lpVtbl->Release)(v40);
    goto LABEL_59;
  }
  v37 = v43;
  v38 = v40;
  if ( v43 != v40 )
  {
    ATL::AtlComQIPtrAssign(&v43, v40, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
    v38 = v40;
    v37 = v43;
  }
  if ( !v37 )
  {
    ApplicationDefaultEndpoint = -2147023728;
    if ( v38 )
      ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
    goto LABEL_30;
  }
  ApplicationDefaultEndpoint = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))v37->lpVtbl[2].AddRef)(v37, &v42);
  v36 = v43;
  if ( ApplicationDefaultEndpoint < 0 )
    goto LABEL_64;
  *v14 = 1;
  if ( v36 )
    ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
  if ( v40 )
    ((void (__fastcall *)(struct IUnknown *))v40->lpVtbl->Release)(v40);
LABEL_23:
  if ( ApplicationDefaultEndpoint < 0 )
  {
    v46 = 0LL;
    pftDueTime = 0LL;
    Context = 0LL;
    ApplicationDefaultEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint(
                                   g_DynamicAudioEndpointManager,
                                   Binding,
                                   a2,
                                   a3,
                                   &v46);
    v22 = v46;
    if ( ApplicationDefaultEndpoint >= 0 )
    {
      v31 = pftDueTime;
      if ( *(union _RTL_RUN_ONCE **)&pftDueTime != v46 )
      {
        v32 = pftDueTime;
        v31 = 0LL;
        pftDueTime = 0LL;
        if ( v46 )
        {
          (*(void (__fastcall **)(union _RTL_RUN_ONCE *, GUID *, struct _FILETIME *))v46->Ptr)(
            v46,
            &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
            &pftDueTime);
          v31 = pftDueTime;
        }
        if ( v32 )
        {
          (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v32 + 16LL))(v32);
          v31 = pftDueTime;
        }
      }
      if ( v31 )
      {
        ApplicationDefaultEndpoint = (*(__int64 (__fastcall **)(struct _FILETIME, LPVOID *))(**(_QWORD **)&v31 + 56LL))(
                                       v31,
                                       &Context);
        if ( ApplicationDefaultEndpoint >= 0 )
        {
          v33 = Context;
          Context = 0LL;
          v42 = v33;
        }
      }
      else
      {
        ApplicationDefaultEndpoint = -2147023728;
      }
    }
    CoTaskMemFree(Context);
    Context = 0LL;
    if ( pftDueTime )
      (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&pftDueTime + 16LL))(pftDueTime);
    if ( v22 )
      (*((void (__fastcall **)(union _RTL_RUN_ONCE *))v22->Ptr + 2))(v22);
    if ( ApplicationDefaultEndpoint < 0 )
      goto LABEL_30;
  }
  v25 = -1LL;
  do
    ++v25;
  while ( *((_WORD *)v42 + v25) );
  v26 = 2 * v25 + 2;
  if ( v26 > 0x40000 )
  {
    v9 = 0LL;
    goto LABEL_83;
  }
  v9 = operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v9 )
  {
LABEL_83:
    ApplicationDefaultEndpoint = -2147024882;
    goto LABEL_30;
  }
  v27 = v26 >> 1;
  ApplicationDefaultEndpoint = 0;
  if ( v27 - 1 > 0x7FFFFFFE )
    ApplicationDefaultEndpoint = -2147024809;
  if ( ApplicationDefaultEndpoint < 0 )
  {
    if ( v27 )
      *v9 = 0;
  }
  else
  {
    v28 = v42;
    v29 = v9;
    ApplicationDefaultEndpoint = 0;
    if ( v27 )
    {
      v30 = 2147483646 - v27;
      while ( v27 + v30 && *v28 )
      {
        *v29++ = *v28++;
        if ( !--v27 )
          goto LABEL_84;
      }
    }
    else
    {
LABEL_84:
      --v29;
      ApplicationDefaultEndpoint = -2147024774;
    }
    *v29 = 0;
  }
LABEL_59:
  if ( ApplicationDefaultEndpoint < 0 )
  {
LABEL_30:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v9);
    goto LABEL_31;
  }
  *v56 = v9;
LABEL_31:
  if ( pv[0] )
  {
    SetThreadpoolTimer(pv[0], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv[0], 1);
    CloseThreadpoolTimer(pv[0]);
    pv[0] = 0LL;
  }
  if ( v52 && v51 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v51 + 8LL))(v51);
  if ( v44 )
    ((void (__fastcall *)(struct IUnknown *))v44->lpVtbl->Release)(v44);
  CoTaskMemFree(v8);
  CoTaskMemFree(v42);
  return (unsigned int)ApplicationDefaultEndpoint;
}

/*
 * XREFs of s_apmSetPersistedDefaultAudioEndpoint @ 0x1800D3F90
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800ACB7C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall s_apmSetPersistedDefaultAudioEndpoint(
        RPC_BINDING_HANDLE Binding,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  struct _TP_TIMER **v9; // rax
  __int64 v10; // r8
  unsigned int v11; // eax
  int v12; // ebx
  bool v13; // dl
  bool v14; // al
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r9
  int MMDeviceFromInterfaceId; // eax
  LPVOID *v20; // rsi
  void *v21; // rdi
  void *v22; // rcx
  HRESULT v23; // eax
  unsigned __int64 i; // rbx
  int v25; // eax
  unsigned int Pid; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-29h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-19h] BYREF
  __int64 v31; // [rsp+58h] [rbp-11h] BYREF
  __int64 v32; // [rsp+60h] [rbp-9h] BYREF
  LPVOID *p_pv; // [rsp+68h] [rbp-1h]
  LPVOID v34; // [rsp+70h] [rbp+7h] BYREF
  char v35; // [rsp+78h] [rbp+Fh]
  struct _TP_TIMER *v36[7]; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]

  v9 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)Binding,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(v36, v9[1], v10, (struct _TP_TIMER *)L"s_apmSetPersistedDefaultAudioEndpoint");
  Pid = 0;
  v11 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( !v11 )
  {
    v13 = Pid == GetCurrentProcessId();
    v14 = g_ADGProcess && Pid == LODWORD(g_ADGProcess[2].OwningThread);
    if ( v13 || v14 )
    {
      v15 = 127LL;
      goto LABEL_45;
    }
    if ( a4 > 2 )
    {
      v15 = 132LL;
LABEL_45:
      v12 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        (const char *)0x80070057LL);
      goto LABEL_46;
    }
    v32 = 0LL;
    v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 40LL))(
            g_PolicyManager,
            a2,
            &v32);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 137LL;
LABEL_17:
      v18 = (unsigned int)v16;
      goto LABEL_18;
    }
    if ( !v32 )
    {
      v12 = -2147024809;
      v17 = 138LL;
      v18 = 2147942487LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        (const char *)v18);
LABEL_43:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
      goto LABEL_46;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v32 + 24LL))(v32, a3, a4, a5);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 140LL;
      goto LABEL_17;
    }
    v31 = 0LL;
    if ( a5 )
    {
      v31 = 0LL;
      MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(a5, &v31);
      v12 = MMDeviceFromInterfaceId;
      if ( MMDeviceFromInterfaceId < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x93,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)(unsigned int)MMDeviceFromInterfaceId);
LABEL_42:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
        goto LABEL_43;
      }
      v28 = 0LL;
      pv = 0LL;
      v34 = 0LL;
      p_pv = &pv;
      v35 = 1;
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, LPVOID *))(*(_QWORD *)v32 + 56LL))(v32, &v28, &v34);
      if ( v35 )
      {
        v20 = p_pv;
        v21 = v34;
        v22 = *p_pv;
        if ( v34 != *p_pv )
        {
          if ( v22 )
            CoTaskMemFree(v22);
          *v20 = v21;
        }
      }
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x99,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_32;
      }
      if ( v28 )
      {
        ppv = 0LL;
        v23 = CoCreateInstance(
                &GUID_06cca63e_9941_441b_b004_39f999ada412,
                0LL,
                0x17u,
                &GUID_a00ffdbb_aba1_46f4_8225_b7499a6a9949,
                &ppv);
        v12 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9F,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
            (const char *)(unsigned int)v23);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
LABEL_32:
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_42;
        }
        for ( i = 0LL; i < v28; ++i )
        {
          v25 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 88LL))(
                  ppv,
                  v31,
                  a4,
                  *((unsigned int *)pv + i));
          if ( v25 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              163LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
              (const char *)(unsigned int)v25);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
    v12 = 0;
    goto LABEL_42;
  }
  v12 = wil::details::in1diag3::Return_Win32(
          retaddr,
          123LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)v11);
LABEL_46:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v36);
  return (unsigned int)v12;
}

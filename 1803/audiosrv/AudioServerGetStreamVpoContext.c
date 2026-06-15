/*
 * XREFs of AudioServerGetStreamVpoContext @ 0x1800C4AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18000422C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??1?$com_ptr_t@UIDeviceGraphObjectsStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005384 (--1-$com_ptr_t@UIDeviceGraphObjectsStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800981C4 (-reset@-$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x1800C03CC (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA-AV-$uniqu.c)
 *     ??0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x1800C042C (--0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z.c)
 *     ??4?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C053C (--4-$unique_ptr@VCVpoContextProxy@@U-$default_delete@VCVpoContextProxy@@@std@@@std@@QEAAAEAV01@$.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall AudioServerGetStreamVpoContext(char *a1, __int64 a2, __int64 **a3)
{
  __int64 v6; // rcx
  struct _TP_TIMER **v7; // rax
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // edi
  const char *v11; // r9
  __int64 result; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  struct IVpoContext *v20; // rbx
  struct ISaDeviceProxy *v21; // rsi
  struct ISubmixProxy *v22; // r14
  CVpoContextProxy *v23; // rax
  __int64 *v24; // rbx
  __int64 *v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // ebx
  void *v29; // rbx
  int v30; // eax
  unsigned int v31; // ebx
  int v32; // eax
  unsigned int v33; // ebx
  __int64 **v34; // rax
  __int64 *v35; // rbx
  int v36; // eax
  unsigned int v37; // esi
  struct IVpoContext *v38; // [rsp+30h] [rbp-E8h] BYREF
  struct ISubmixProxy *v39; // [rsp+38h] [rbp-E0h] BYREF
  struct ISaDeviceProxy *v40; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-D0h] BYREF
  void *v42; // [rsp+50h] [rbp-C8h] BYREF
  struct ISaDeviceProxy *v43; // [rsp+58h] [rbp-C0h] BYREF
  void *v44; // [rsp+60h] [rbp-B8h] BYREF
  struct IVpoContext *v45; // [rsp+68h] [rbp-B0h] BYREF
  struct ISaDeviceProxy *v46; // [rsp+70h] [rbp-A8h] BYREF
  struct ISubmixProxy *v47; // [rsp+78h] [rbp-A0h] BYREF
  void *v48; // [rsp+80h] [rbp-98h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+88h] [rbp-90h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-58h] BYREF
  _BYTE v51[16]; // [rsp+D0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  pv[6] = (struct _TP_TIMER *)-2LL;
  try
  {
    SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)&v50, a1);
    v7 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                v6,
                                lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v8, (struct _TP_TIMER *)L"AudioServerGetStreamVpoContext");
    v39 = 0LL;
    v9 = (*(__int64 (__fastcall **)(char *, struct ISubmixProxy **))(*(_QWORD *)a1 + 32LL))(a1, &v39);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBEC,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v51);
      return v10;
    }
    v41 = 0LL;
    v13 = (*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v41);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF1,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v51);
      return v14;
    }
    v40 = 0LL;
    v15 = v41;
    wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset((__int64 *)&v40);
    v16 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v15 + 208LL))(v15, &v40);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF6,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v16);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v51);
      return v17;
    }
    v38 = 0LL;
    v44 = 0LL;
    if ( v40 )
    {
      v38 = 0LL;
      v18 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, struct IVpoContext **))(*(_QWORD *)v39 + 72LL))(v39, &v38);
      v19 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBFD,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v18);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        EtwEventActivityIdControl(4LL, v51);
        return v19;
      }
      v20 = v38;
      v21 = v40;
      v22 = v39;
      v23 = (CVpoContextProxy *)operator new(0x18uLL);
      if ( v23 )
        v23 = CVpoContextProxy::CVpoContextProxy(v23, v22, v21, v20);
      v42 = v23;
      std::unique_ptr<CVpoContextProxy>::operator=((__int64 **)&v44, (__int64 **)&v42);
      v24 = (__int64 *)v42;
      if ( v42 )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v42 + 2);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v24 + 1);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v24);
        operator delete(v24, (const struct std::nothrow_t *)0x18);
      }
      v25 = (__int64 *)v44;
      if ( !v44 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC00,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        EtwEventActivityIdControl(4LL, v51);
        return 2147942414LL;
      }
    }
    else
    {
      v42 = 0LL;
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 120LL))(v41);
      v27 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, __int64, void **))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
              g_DeviceGraphStore,
              v26,
              &v42);
      v28 = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC07,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v27);
        wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>((__int64 *)&v42);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        EtwEventActivityIdControl(4LL, v51);
        return v28;
      }
      v43 = 0LL;
      v29 = v42;
      wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset((__int64 *)&v43);
      v30 = (*(__int64 (__fastcall **)(void *, struct ISaDeviceProxy **))(*(_QWORD *)v29 + 120LL))(v29, &v43);
      v31 = v30;
      if ( v30 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC0A,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v30);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
        wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>((__int64 *)&v42);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        EtwEventActivityIdControl(4LL, v51);
        return v31;
      }
      v38 = 0LL;
      v32 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct IVpoContext **))(*(_QWORD *)v43 + 96LL))(
              v43,
              &v38);
      v33 = v32;
      if ( v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC0C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v32);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
        wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>((__int64 *)&v42);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        EtwEventActivityIdControl(4LL, v51);
        return v33;
      }
      v45 = v38;
      v46 = v43;
      v47 = 0LL;
      v34 = (__int64 **)std::make_unique<CVpoContextProxy,std::nullptr_t,ISaDeviceProxy *,IVpoContext *,0>(
                          (CVpoContextProxy **)&v48,
                          &v47,
                          &v46,
                          &v45);
      std::unique_ptr<CVpoContextProxy>::operator=((__int64 **)&v44, v34);
      v35 = (__int64 *)v48;
      if ( v48 )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v48 + 2);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v35 + 1);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v35);
        operator delete(v35, (const struct std::nothrow_t *)0x18);
      }
      v25 = (__int64 *)v44;
      if ( !v44 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC0F,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
        wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>((__int64 *)&v42);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        EtwEventActivityIdControl(4LL, v51);
        return 2147942414LL;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>((__int64 *)&v42);
    }
    v36 = (*(__int64 (__fastcall **)(struct IVpoContext *, __int64))(*(_QWORD *)v38 + 32LL))(v38, a2);
    v37 = v36;
    if ( v36 >= 0 )
    {
      *a3 = v25;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v51);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC13,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v36);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v25 + 2);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v25 + 1);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v25);
      operator delete(v25, (const struct std::nothrow_t *)0x18);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v51);
      result = v37;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC18,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           v11);
  }
  return result;
}

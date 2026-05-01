/*
 * XREFs of ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801599A4
 * Callers:
 *     ?MonitorAdded@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801596C0 (-MonitorAdded@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18015AB24 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@Z @ 0x1800EB914 (--$emplace_back@AEBV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VMonitorFrame@@@.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?StartActivity@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAXXZ @ 0x180155C74 (-StartActivity@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180156E04 (--1-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     _lambda_439a64ed92fed00dbcb4e6e66f12d415_::_lambda_439a64ed92fed00dbcb4e6e66f12d415_ @ 0x18015A90C (_lambda_439a64ed92fed00dbcb4e6e66f12d415_--_lambda_439a64ed92fed00dbcb4e6e66f12d415_.c)
 *     _lambda_439a64ed92fed00dbcb4e6e66f12d415_::__lambda_439a64ed92fed00dbcb4e6e66f12d415_ @ 0x18015AA44 (_lambda_439a64ed92fed00dbcb4e6e66f12d415_--__lambda_439a64ed92fed00dbcb4e6e66f12d415_.c)
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18015CE44 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18015D800 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Para_ea_18015D800.c)
 *     ?CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@UE$AAAPE$AAVDesktopBackgroundThumbnailFactory@23456@VRect@Foundation@6@@Z @ 0x18015DAC8 (-CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@I.c)
 *     ??$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@wil@@YA?AV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x18015F250 (--$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitas.c)
 *     ??0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ @ 0x1801696FC (--0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15 #try_helpers=1
__int64 __fastcall XamlAllUpViewHost::CreateFrameForMonitor(XamlAllUpViewHost *this, struct IImmersiveMonitor *a2)
{
  __int64 v4; // r12
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 (__fastcall ***v13)(_QWORD, void *, __int64 *); // rcx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r13
  __int64 v17; // rbx
  Microsoft::WRL::FtmBase *v18; // rsi
  Microsoft::WRL::FtmBase *v19; // rax
  Microsoft::WRL::FtmBase *v20; // rdi
  __int64 v21; // r8
  struct IImmersiveMonitor *v22; // rcx
  struct IImmersiveMonitor *v23; // rcx
  struct IImmersiveMonitor *v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rcx
  XamlAllUpViewHost *v31; // rsi
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // [rsp+50h] [rbp-398h] BYREF
  struct IImmersiveMonitor *v38; // [rsp+58h] [rbp-390h] BYREF
  __int64 v39; // [rsp+60h] [rbp-388h] BYREF
  int v40[2]; // [rsp+68h] [rbp-380h] BYREF
  __int64 v41; // [rsp+70h] [rbp-378h]
  __int64 v42; // [rsp+78h] [rbp-370h] BYREF
  __int128 v43; // [rsp+80h] [rbp-368h]
  __int64 v44; // [rsp+90h] [rbp-358h] BYREF
  int v45[2]; // [rsp+98h] [rbp-350h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-348h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-340h] BYREF
  XamlAllUpViewHost *v48; // [rsp+B0h] [rbp-338h]
  __int64 v49; // [rsp+B8h] [rbp-330h]
  __int128 v50; // [rsp+C0h] [rbp-328h] BYREF
  __int128 v51; // [rsp+D0h] [rbp-318h] BYREF
  __int128 v52; // [rsp+E0h] [rbp-308h] BYREF
  _QWORD v53[4]; // [rsp+F0h] [rbp-2F8h] BYREF
  int v54; // [rsp+110h] [rbp-2D8h]
  int *v55; // [rsp+118h] [rbp-2D0h]
  int *v56; // [rsp+120h] [rbp-2C8h]
  int v57; // [rsp+128h] [rbp-2C0h] BYREF
  char v58; // [rsp+12Ch] [rbp-2BCh]
  int v59; // [rsp+150h] [rbp-298h] BYREF
  const char *v60; // [rsp+158h] [rbp-290h]
  __int64 v61; // [rsp+160h] [rbp-288h]
  char v62; // [rsp+168h] [rbp-280h]
  __int64 v63; // [rsp+170h] [rbp-278h]
  _BYTE v64[144]; // [rsp+178h] [rbp-270h] BYREF
  __int64 v65; // [rsp+208h] [rbp-1E0h]
  __int64 v66; // [rsp+210h] [rbp-1D8h]
  __int64 v67; // [rsp+218h] [rbp-1D0h]
  __int64 v68; // [rsp+220h] [rbp-1C8h]
  __int64 v69; // [rsp+230h] [rbp-1B8h] BYREF
  struct IImmersiveMonitor *v70; // [rsp+238h] [rbp-1B0h]
  __int128 v71; // [rsp+240h] [rbp-1A8h]
  struct IImmersiveMonitor *v72; // [rsp+250h] [rbp-198h]
  struct IImmersiveMonitor *v73; // [rsp+258h] [rbp-190h]
  __int64 v74; // [rsp+260h] [rbp-188h] BYREF
  char v75[32]; // [rsp+268h] [rbp-180h] BYREF
  int v76; // [rsp+288h] [rbp-160h]
  __int64 v77; // [rsp+3A0h] [rbp-48h]
  __int64 v78; // [rsp+3A8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+3E8h] [rbp+0h]

  v49 = -2LL;
  v48 = this;
  v38 = a2;
  v4 = 0LL;
  v42 = 0LL;
  v53[1] = 0LL;
  v53[2] = v53;
  v53[3] = 0LL;
  v54 = 0;
  v55 = &v59;
  v56 = &v57;
  v57 = 0;
  v58 = 0;
  v62 = 0;
  v59 = 0;
  v60 = "MonitorFrameCreated";
  v61 = 0LL;
  v63 = 1LL;
  v65 = 0LL;
  v66 = 0LL;
  memset(v64, 0, sizeof(v64));
  v67 = 0LL;
  v68 = 0LL;
  v53[0] = &XamlSwitcherTelemetry::MonitorFrameCreated::`vftable';
  XamlSwitcherTelemetry::MonitorFrameCreated::StartActivity((XamlSwitcherTelemetry::MonitorFrameCreated *)v53);
  v5 = Platform::Details::Heap::Allocate(0x78uLL, 0xA0uLL);
  v6 = Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl(v5);
  v7 = v6;
  v41 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v4 = v7;
    v42 = v7;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v52);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *(float *)&v43 = (float)(int)v52;
    *((float *)&v43 + 1) = (float)SDWORD1(v52);
    *((float *)&v43 + 2) = (float)(DWORD2(v52) - v52);
    *((float *)&v43 + 3) = (float)(HIDWORD(v52) - DWORD1(v52));
    v50 = v43;
    v11 = Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice::CreateThumbnailFactoryForDesktopBackground(
            *((_QWORD *)this + 19),
            &v50);
    v12 = v11;
    v41 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    *(_QWORD *)v45 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)this + 23);
    v14 = 0LL;
    v39 = 0LL;
    if ( v13 )
    {
      v15 = (**v13)(v13, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__, &v39);
      if ( v15 < 0 )
        __abi_WinRTraiseException(v15);
      v14 = v39;
    }
    v41 = v14;
    v44 = v14;
    wil::MakeOrThrow<MonitorFrame,IImmersiveMonitor * &,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl __gc * &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc *>(
      (unsigned int)&v37,
      (unsigned int)&v38,
      (unsigned int)&v42,
      (_DWORD)this + 184,
      (__int64)&v44);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v16 = *((_QWORD *)this + 20);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*((_QWORD *)this + 20));
    v46 = v16;
    v17 = *((_QWORD *)this + 28);
    v47 = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    lambda_439a64ed92fed00dbcb4e6e66f12d415_::_lambda_439a64ed92fed00dbcb4e6e66f12d415_(
      (unsigned int)&v69,
      (unsigned int)&v47,
      (unsigned int)&v46,
      (unsigned int)&v52,
      (__int64)v45,
      (__int64)&v42,
      (__int64)&v37,
      (__int64)v53,
      *((_QWORD *)this + 21),
      *((_QWORD *)this + 22));
    v41 = 0LL;
    v18 = 0LL;
    *(_QWORD *)&v43 = 0LL;
    v19 = (Microsoft::WRL::FtmBase *)operator new(0x1B8uLL, (const struct std::nothrow_t *)&std::nothrow);
    v20 = v19;
    if ( v19 )
    {
      Microsoft::WRL::FtmBase::FtmBase(v19);
      *((_DWORD *)v20 + 13) = 1;
      *(_QWORD *)v20 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::`vftable'{for `Microsoft::WRL::FtmBase'};
      *((_QWORD *)v20 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IXamlExplorerHostWindowCreatedCallback>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v20 = off_1802B4F60;
      *((_QWORD *)v20 + 5) = off_1802B4FC0;
      *((_QWORD *)v20 + 7) = 0LL;
      if ( (__int64 *)((char *)v20 + 56) != &v69 )
      {
        *((_QWORD *)v20 + 7) = v69;
        v69 = 0LL;
      }
      v22 = v70;
      v38 = v70;
      if ( v70 )
      {
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v70 + 8LL))(v70);
        v22 = v38;
      }
      *((_QWORD *)v20 + 8) = v22;
      *(_OWORD *)((char *)v20 + 72) = v71;
      v23 = v72;
      v38 = v72;
      if ( v72 )
      {
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v72 + 8LL))(v72);
        v23 = v38;
      }
      *((_QWORD *)v20 + 11) = v23;
      v24 = v73;
      v38 = v73;
      if ( v73 )
      {
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v73 + 8LL))(v73);
        v24 = v38;
      }
      *((_QWORD *)v20 + 12) = v24;
      *((_QWORD *)v20 + 13) = 0LL;
      if ( (__int64 *)((char *)v20 + 104) != &v74 )
      {
        *((_QWORD *)v20 + 13) = v74;
        v74 = 0LL;
      }
      LOBYTE(v21) = v76 != 0;
      wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        (char *)v20 + 112,
        v75,
        v21);
      *((_QWORD *)v20 + 14) = &XamlSwitcherTelemetry::MonitorFrameCreated::`vftable';
      v25 = v77;
      if ( v77 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 8LL))(v77);
      *((_QWORD *)v20 + 53) = v25;
      v26 = v78;
      if ( v78 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 8LL))(v78);
      *((_QWORD *)v20 + 54) = v26;
      v18 = v20;
    }
    v27 = (__int64)v18 + 40;
    v28 = -(__int64)v18;
    v29 = v27 & -(__int64)(v28 != 0);
    if ( v29 )
    {
      v41 = v27 & -(__int64)(v28 != 0);
      *(_QWORD *)v40 = 0LL;
      v51 = v52;
      v31 = v48;
      v32 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, GUID *, int *))(**((_QWORD **)v48 + 26) + 24LL))(
              *((_QWORD *)v48 + 26),
              v29,
              &v51,
              &GUID_a9728204_899b_46a5_9344_43e74614d24b,
              v40);
      LODWORD(v39) = v32;
      if ( v32 >= 0 )
      {
        std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::emplace_back<Microsoft::WRL::ComPtr<MonitorFrame> const &>(
          (__int64 **)v31 + 34,
          &v37);
        v35 = *(_QWORD *)v40;
        if ( *(_QWORD *)v40 )
        {
          *(_QWORD *)v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        lambda_439a64ed92fed00dbcb4e6e66f12d415_::__lambda_439a64ed92fed00dbcb4e6e66f12d415_(&v69);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v36 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v53[0] = &XamlSwitcherTelemetry::MonitorFrameCreated::`vftable';
        wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v53);
        wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v53);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2A2,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v32);
        v33 = *(_QWORD *)v40;
        if ( *(_QWORD *)v40 )
        {
          *(_QWORD *)v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        lambda_439a64ed92fed00dbcb4e6e66f12d415_::__lambda_439a64ed92fed00dbcb4e6e66f12d415_(&v69);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v34 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v53[0] = &XamlSwitcherTelemetry::MonitorFrameCreated::`vftable';
        wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v53);
        wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v53);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        return (unsigned int)v39;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (__int64)"pcshell\\twinui\\XamlExplorerHost\\inc\\XamlExplorerHostWindowCreatedCallback.h",
        (const char *)0x8007000ELL);
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x29F,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)0x8007000ELL);
      lambda_439a64ed92fed00dbcb4e6e66f12d415_::__lambda_439a64ed92fed00dbcb4e6e66f12d415_(&v69);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v30 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v53[0] = &XamlSwitcherTelemetry::MonitorFrameCreated::`vftable';
      wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v53);
      wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v53);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x23D,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v8);
    v53[0] = &XamlSwitcherTelemetry::MonitorFrameCreated::`vftable';
    wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v53);
    wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v53);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    return v9;
  }
}

/*
 * XREFs of ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18012D894
 * Callers:
 *     ?MonitorAdded@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18012D750 (-MonitorAdded@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18012E4C8 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$emplace_back@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@Z @ 0x1800DE8D0 (--$emplace_back@AEBV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VMonitorFrame@@@.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??1MonitorFrameCreated@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18012B858 (--1MonitorFrameCreated@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     _lambda_4d9498deded80cfab1ff9f78bf19bcab_::__lambda_4d9498deded80cfab1ff9f78bf19bcab_ @ 0x18012E450 (_lambda_4d9498deded80cfab1ff9f78bf19bcab_--__lambda_4d9498deded80cfab1ff9f78bf19bcab_.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18012FDC4 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??$Start@$$V@MonitorFrameCreated@XamlSwitcherTelemetry@@SA?AV01@XZ @ 0x180130F10 (--$Start@$$V@MonitorFrameCreated@XamlSwitcherTelemetry@@SA-AV01@XZ.c)
 *     ??$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@wil@@YA?AV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180130FBC (--$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAUISwitchItemDataView@Common@Mult.c)
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab_____lambda_4d9498deded80cfab1ff9f78bf19bcab___ @ 0x180131594 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff.c)
 *     ??0SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18013E980 (--0SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QE$AA.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
__int64 __fastcall XamlAllUpViewHost::CreateFrameForMonitor(XamlAllUpViewHost *this, struct IImmersiveMonitor *a2)
{
  __int64 v4; // r14
  void *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, void *, struct IImmersiveMonitor **); // rcx
  struct IImmersiveMonitor *v18; // rbx
  int v19; // eax
  struct IImmersiveMonitor *v20; // r15
  struct IImmersiveMonitor *v21; // rdi
  int v22; // eax
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab_____lambda_4d9498deded80cfab1ff9f78bf19bcab; // rax
  struct IImmersiveMonitor *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // r12d
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 (__fastcall ***v40)(_QWORD, GUID *, struct IImmersiveMonitor **); // [rsp+30h] [rbp-368h] BYREF
  __int64 v41; // [rsp+38h] [rbp-360h] BYREF
  int v42; // [rsp+40h] [rbp-358h] BYREF
  int v43[2]; // [rsp+48h] [rbp-350h] BYREF
  struct IImmersiveMonitor *v44; // [rsp+50h] [rbp-348h] BYREF
  struct IImmersiveMonitor *v45; // [rsp+58h] [rbp-340h] BYREF
  int v46[4]; // [rsp+60h] [rbp-338h] BYREF
  __int64 v47; // [rsp+70h] [rbp-328h] BYREF
  struct IImmersiveMonitor *v48; // [rsp+78h] [rbp-320h]
  __int128 v49; // [rsp+80h] [rbp-318h] BYREF
  __int64 v50; // [rsp+90h] [rbp-308h]
  __int128 v51; // [rsp+A0h] [rbp-2F8h] BYREF
  int v52; // [rsp+B0h] [rbp-2E8h] BYREF
  struct IImmersiveMonitor *v53; // [rsp+B8h] [rbp-2E0h]
  __int128 v54; // [rsp+C0h] [rbp-2D8h]
  struct IImmersiveMonitor *v55; // [rsp+D0h] [rbp-2C8h]
  __int64 v56; // [rsp+D8h] [rbp-2C0h]
  __int64 v57; // [rsp+E0h] [rbp-2B8h]
  void **v58; // [rsp+E8h] [rbp-2B0h] BYREF
  _BYTE v59[320]; // [rsp+220h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+398h] [rbp+0h]

  v50 = -2LL;
  v45 = a2;
  v4 = 0LL;
  v47 = 0LL;
  XamlSwitcherTelemetry::MonitorFrameCreated::Start<>((XamlSwitcherTelemetry::MonitorFrameCreated *)v59);
  v5 = Platform::Details::Heap::Allocate(0x78uLL, 0xA0uLL);
  v6 = WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::SwitchItemDataViewImpl(v5);
  *(_QWORD *)v46 = v6;
  v7 = v6 + 8;
  if ( !v6 )
    v7 = 0LL;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v4 = v7;
    v47 = v7;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v51);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v40 = 0LL;
    v49 = v51;
    v11 = (__int64 *)*((_QWORD *)this + 23);
    v12 = *v11;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v40);
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, GUID *, __int64 *))(v12 + 32))(
            v11,
            &v49,
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            v13);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v17 = (__int64 (__fastcall ***)(_QWORD, void *, struct IImmersiveMonitor **))*((_QWORD *)this + 19);
      v18 = 0LL;
      v44 = 0LL;
      if ( v17 )
      {
        v19 = (**v17)(v17, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__, &v44);
        if ( v19 < 0 )
          __abi_WinRTraiseException(v19);
        v18 = v44;
      }
      v48 = v18;
      *(_QWORD *)v46 = v18;
      wil::MakeOrThrow<MonitorFrame,IImmersiveMonitor * &,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView __gc * &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc *>(
        (unsigned int)&v41,
        (unsigned int)&v45,
        (unsigned int)&v47,
        (_DWORD)this + 152,
        (__int64)v46);
      if ( v18 )
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v18 + 16LL))(v18);
      v20 = (struct IImmersiveMonitor *)*((_QWORD *)this + 18);
      if ( v20 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 8LL))(*((_QWORD *)this + 18));
      v48 = v20;
      v21 = 0LL;
      v44 = 0LL;
      if ( v40 )
      {
        v22 = (**v40)(v40, &GUID_5c594542_969f_4b3c_971b_c13cb89bbdbb, &v44);
        if ( v22 < 0 )
          __abi_WinRTraiseException(v22);
        v21 = v44;
      }
      v45 = v21;
      if ( v21 )
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v21 + 8LL))(v21);
      *(_QWORD *)&v49 = v21;
      if ( v21 )
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v21 + 16LL))(v21);
      v23 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, _QWORD, int *))(*(_QWORD *)a2 + 96LL))(
              a2,
              *((_QWORD *)this + 25),
              &v42);
      v24 = v23;
      if ( v23 >= 0 )
      {
        v52 = v42;
        if ( v20 )
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v20 + 8LL))(v20);
        v53 = v20;
        v54 = v51;
        if ( v21 )
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v21 + 8LL))(v21);
        v55 = v21;
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        v56 = v4;
        v57 = v41;
        if ( v41 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
        wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
          &v58,
          v59);
        v58 = &XamlSwitcherTelemetry::MonitorFrameCreated::`vftable';
        v45 = 0LL;
        XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab_____lambda_4d9498deded80cfab1ff9f78bf19bcab = (_QWORD *)Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab_____lambda_4d9498deded80cfab1ff9f78bf19bcab___(v46, &v52);
        v28 = (struct IImmersiveMonitor *)((*XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab_____lambda_4d9498deded80cfab1ff9f78bf19bcab
                                          + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab_____lambda_4d9498deded80cfab1ff9f78bf19bcab >> 64));
        *XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab_____lambda_4d9498deded80cfab1ff9f78bf19bcab = 0LL;
        v29 = *(_QWORD *)v46;
        if ( *(_QWORD *)v46 )
        {
          *(_QWORD *)v46 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        if ( v28 )
        {
          v45 = v28;
          *(_QWORD *)v43 = 0LL;
          *(_OWORD *)v46 = v51;
          v32 = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveMonitor *, int *, GUID *, int *))(**((_QWORD **)this + 22) + 24LL))(
                  *((_QWORD *)this + 22),
                  v28,
                  v46,
                  &GUID_a9728204_899b_46a5_9344_43e74614d24b,
                  v43);
          v33 = v32;
          if ( v32 >= 0 )
          {
            std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::emplace_back<Microsoft::WRL::ComPtr<MonitorFrame> const &>(
              (__int64 **)this + 29,
              &v41);
            v37 = *(_QWORD *)v43;
            if ( *(_QWORD *)v43 )
            {
              *(_QWORD *)v43 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
            }
            (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v28 + 16LL))(v28);
            lambda_4d9498deded80cfab1ff9f78bf19bcab_::__lambda_4d9498deded80cfab1ff9f78bf19bcab_(&v52);
            if ( v21 )
              (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v21 + 16LL))(v21);
            if ( v20 )
              (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v20 + 16LL))(v20);
            v38 = v41;
            if ( v41 )
            {
              v41 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
            }
            v39 = (__int64)v40;
            if ( v40 )
            {
              v40 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
            }
            XamlSwitcherTelemetry::MonitorFrameCreated::~MonitorFrameCreated((XamlSwitcherTelemetry::MonitorFrameCreated *)v59);
            if ( v4 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
            return 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x1B8,
              (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
              (const char *)(unsigned int)v32);
            v34 = *(_QWORD *)v43;
            if ( *(_QWORD *)v43 )
            {
              *(_QWORD *)v43 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
            }
            (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v28 + 16LL))(v28);
            lambda_4d9498deded80cfab1ff9f78bf19bcab_::__lambda_4d9498deded80cfab1ff9f78bf19bcab_(&v52);
            if ( v21 )
              (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v21 + 16LL))(v21);
            if ( v20 )
              (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v20 + 16LL))(v20);
            v35 = v41;
            if ( v41 )
            {
              v41 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
            }
            v36 = (__int64)v40;
            if ( v40 )
            {
              v40 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
            }
            XamlSwitcherTelemetry::MonitorFrameCreated::~MonitorFrameCreated((XamlSwitcherTelemetry::MonitorFrameCreated *)v59);
            if ( v4 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
            return v33;
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
            (void *)0x1B5,
            (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
            (const char *)0x8007000ELL);
          lambda_4d9498deded80cfab1ff9f78bf19bcab_::__lambda_4d9498deded80cfab1ff9f78bf19bcab_(&v52);
          if ( v21 )
            (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v21 + 16LL))(v21);
          if ( v20 )
            (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v20 + 16LL))(v20);
          v30 = v41;
          if ( v41 )
          {
            v41 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
          v31 = (__int64)v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          XamlSwitcherTelemetry::MonitorFrameCreated::~MonitorFrameCreated((XamlSwitcherTelemetry::MonitorFrameCreated *)v59);
          if ( v4 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
          return 2147942414LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x18F,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v23);
        if ( v21 )
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v20 )
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v20 + 16LL))(v20);
        v25 = v41;
        if ( v41 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        v26 = (__int64)v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        XamlSwitcherTelemetry::MonitorFrameCreated::~MonitorFrameCreated((XamlSwitcherTelemetry::MonitorFrameCreated *)v59);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        return v24;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x185,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v14);
      v16 = (__int64)v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      XamlSwitcherTelemetry::MonitorFrameCreated::~MonitorFrameCreated((XamlSwitcherTelemetry::MonitorFrameCreated *)v59);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      return v15;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x181,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v8);
    XamlSwitcherTelemetry::MonitorFrameCreated::~MonitorFrameCreated((XamlSwitcherTelemetry::MonitorFrameCreated *)v59);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    return v9;
  }
}

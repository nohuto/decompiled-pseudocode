/*
 * XREFs of ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180158840
 * Callers:
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1801590C0 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800A01E4 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ??4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180156664 (--4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ @ 0x18015687C (-StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180156E04 (--1-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18015AB24 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18015CB30 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18015CE44 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18015D800 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Para_ea_18015D800.c)
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIAppLayoutCache@@@Z @ 0x180170C84 (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
__int64 __fastcall XamlAllUpViewHost::Show(__int64 a1, IUnknown *a2, __int64 a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r13
  __int64 *v8; // rax
  HRESULT Service; // eax
  int Frames; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  int v15; // eax
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  TabletModeHelpers *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  HRESULT v22; // eax
  unsigned int v23; // ebx
  void *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rcx
  void *v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r8
  _DWORD *v34; // [rsp+40h] [rbp-318h]
  int v35; // [rsp+48h] [rbp-310h]
  void *v37; // [rsp+50h] [rbp-308h] BYREF
  void *ppvOut; // [rsp+58h] [rbp-300h] BYREF
  void *v39; // [rsp+60h] [rbp-2F8h]
  __int64 v40; // [rsp+68h] [rbp-2F0h]
  __int64 v41; // [rsp+70h] [rbp-2E8h]
  char v42; // [rsp+78h] [rbp-2E0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-2D8h]
  int v44; // [rsp+88h] [rbp-2D0h]
  __int64 v45; // [rsp+90h] [rbp-2C8h]
  _QWORD v46[4]; // [rsp+A0h] [rbp-2B8h] BYREF
  int v47; // [rsp+C0h] [rbp-298h]
  int *v48; // [rsp+C8h] [rbp-290h]
  int *v49; // [rsp+D0h] [rbp-288h]
  int v50; // [rsp+D8h] [rbp-280h] BYREF
  char v51; // [rsp+DCh] [rbp-27Ch]
  int v52; // [rsp+100h] [rbp-258h] BYREF
  const char *v53; // [rsp+108h] [rbp-250h]
  __int64 v54; // [rsp+110h] [rbp-248h]
  char v55; // [rsp+118h] [rbp-240h]
  __int64 v56; // [rsp+120h] [rbp-238h]
  _BYTE v57[144]; // [rsp+128h] [rbp-230h] BYREF
  __int64 v58; // [rsp+1B8h] [rbp-1A0h]
  __int64 v59; // [rsp+1C0h] [rbp-198h]
  __int64 v60; // [rsp+1C8h] [rbp-190h]
  __int64 v61; // [rsp+1D0h] [rbp-188h]
  _QWORD v62[40]; // [rsp+1E0h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+0h]

  v45 = -2LL;
  v40 = a1;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  lpCriticalSection = v7;
  v35 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v44 = v35;
  v46[1] = 0LL;
  v46[2] = v46;
  v46[3] = 0LL;
  v47 = 0;
  v48 = &v52;
  v49 = &v50;
  v50 = 0;
  v51 = 0;
  v55 = 0;
  v52 = 0;
  v53 = "ShowXamlTaskView";
  v54 = 0LL;
  v56 = 1LL;
  v58 = 0LL;
  v59 = 0LL;
  memset(v57, 0, sizeof(v57));
  v60 = 0LL;
  v61 = 0LL;
  v46[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  XamlSwitcherTelemetry::ShowXamlTaskView::StartActivity((XamlSwitcherTelemetry::ShowXamlTaskView *)v46);
  v41 = a1;
  v42 = 1;
  v37 = 0LL;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v37);
  Service = IUnknown_QueryService(
              a2,
              (const GUID *const)&SID_IImmersiveMonitorService,
              &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
              (void **)v8);
  Frames = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\Shell\\inc\\multitaskingbaseviewhost.h",
      (const char *)(unsigned int)Service);
    goto LABEL_24;
  }
  v39 = v37;
  v11 = *(_QWORD *)(a1 + 104);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
    v12 = *(_QWORD *)(a1 + 104);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 104) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  if ( !v13 )
  {
    Frames = -2147024882;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3C,
      (__int64)"internal\\shell\\private\\inc\\eventregistrationhelpers.h",
      (const char *)0x8007000ELL);
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"internal\\Shell\\inc\\multitaskingbaseviewhost.h",
      (const char *)(unsigned int)Frames);
    goto LABEL_24;
  }
  v13[3] = 1;
  *(_QWORD *)v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)v14 + 2) = 0LL;
  v14[6] = 0;
  *((_QWORD *)v14 + 4) = 0LL;
  *(_QWORD *)v14 = off_1802B4F20;
  *((_QWORD *)v14 + 2) = *(_QWORD *)(a1 + 96);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
  v34 = v14;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = (*(__int64 (__fastcall **)(_DWORD *, void *))(*(_QWORD *)v34 + 48LL))(v34, v39);
  Frames = v15;
  if ( v15 >= 0 )
  {
    v16 = v34;
    if ( *(_DWORD **)(a1 + 104) != v34 )
    {
      if ( v34 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 8LL))(v34);
        v16 = v34;
      }
      v17 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 104) = v34;
      if ( v17 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v16 = v34;
      }
    }
    if ( v16 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 16LL))(v16);
    Frames = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3D,
      (__int64)"internal\\shell\\private\\inc\\eventregistrationhelpers.h",
      (const char *)(unsigned int)v15);
    if ( v34 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 16LL))(v34);
  }
  if ( Frames < 0 )
    goto LABEL_23;
LABEL_24:
  v18 = (TabletModeHelpers *)v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(TabletModeHelpers *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( Frames < 0 )
  {
    v19 = 386LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)Frames);
    v20 = *(_QWORD *)(a1 + 216);
    if ( v20 )
    {
      *(_QWORD *)(a1 + 216) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1);
    v46[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
    wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v46);
    wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v46);
    if ( v35 >= 0 )
      LeaveCriticalSection(v7);
    return (unsigned int)Frames;
  }
  *(_DWORD *)(a1 + 248) = a4;
  if ( *(IUnknown **)(a1 + 216) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(IUnknown *))a2->lpVtbl->AddRef)(a2);
    v18 = *(TabletModeHelpers **)(a1 + 216);
    *(_QWORD *)(a1 + 216) = a2;
    if ( v18 )
      (*(void (__fastcall **)(TabletModeHelpers *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( *(_QWORD *)(a1 + 224) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v18 = *(TabletModeHelpers **)(a1 + 224);
    *(_QWORD *)(a1 + 224) = a3;
    if ( v18 )
      (*(void (__fastcall **)(TabletModeHelpers *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( TabletModeHelpers::IsTabletMode(v18) )
  {
    ppvOut = 0LL;
    v22 = IUnknown_QueryService(
            *(IUnknown **)(a1 + 224),
            &GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0,
            &GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0,
            &ppvOut);
    v23 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x18E,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v22);
      v24 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v42 = 0;
      v25 = *(_QWORD *)(a1 + 216);
      if ( v25 )
      {
        *(_QWORD *)(a1 + 216) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1);
      v46[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
      wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v46);
      wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v46);
      if ( v35 >= 0 )
        LeaveCriticalSection(v7);
      return v23;
    }
    v39 = Platform::Details::Heap::Allocate(0x68uLL, 0xB0uLL);
    v26 = XamlAllUpViewController::XamlAllUpViewController(
            (int)v39,
            a1,
            *(_QWORD *)(a1 + 192),
            *(_QWORD *)(a1 + 200),
            *(struct IUnknown **)(a1 + 232),
            *(_QWORD *)(a1 + 80),
            (__int64)ppvOut);
    v39 = (void *)v26;
    v27 = v26 + 16;
    if ( !v26 )
      v27 = 0LL;
    if ( v27 != *(_QWORD *)(a1 + 184) )
    {
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      v28 = *(_QWORD *)(a1 + 184);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      *(_QWORD *)(a1 + 184) = v27;
    }
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v29 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  else
  {
    v39 = Platform::Details::Heap::Allocate(0x68uLL, 0xB0uLL);
    v30 = XamlAllUpViewController::XamlAllUpViewController(
            (int)v39,
            a1,
            *(_QWORD *)(a1 + 192),
            *(_QWORD *)(a1 + 200),
            *(struct IUnknown **)(a1 + 232),
            *(_QWORD *)(a1 + 80),
            0LL);
    v39 = (void *)v30;
    v31 = v30 + 16;
    if ( !v30 )
      v31 = 0LL;
    if ( v31 != *(_QWORD *)(a1 + 184) )
    {
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
      v32 = *(_QWORD *)(a1 + 184);
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      *(_QWORD *)(a1 + 184) = v31;
    }
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  Frames = XamlAllUpViewHost::CreateFrames((XamlAllUpViewHost *)a1);
  if ( Frames < 0 )
  {
    v19 = 408LL;
    goto LABEL_28;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
    *(_QWORD *)(a1 + 88),
    *(unsigned int *)(a1 + 72));
  *(_BYTE *)(a1 + 112) = 1;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    v62,
    v46,
    0LL);
  v62[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  XamlSwitcherTelemetry::ShowXamlTaskView::operator=(a1 + 312, (__int64)v62, v33);
  v62[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v62);
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v62);
  v46[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v46);
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v46);
  if ( v35 >= 0 )
    LeaveCriticalSection(v7);
  return 0LL;
}

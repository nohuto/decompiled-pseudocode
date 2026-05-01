/*
 * XREFs of ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18020994C
 * Callers:
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18020A004 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180085F20 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@wil@@YA?AV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180203B84 (--$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitas.c)
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c___ @ 0x180203C04 (MakeXamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c___.c)
 *     ??$emplace_back@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@Z @ 0x180204C44 (--$emplace_back@AEBV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VMonitorFrame@@@.c)
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::_lambda_d4c350abf5d24183546902bae9e0768c__0 @ 0x180205178 (_lambda_d4c350abf5d24183546902bae9e0768c_--_lambda_d4c350abf5d24183546902bae9e0768c__0.c)
 *     ??0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ @ 0x180206058 (--0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ.c)
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::__lambda_d4c350abf5d24183546902bae9e0768c_ @ 0x1802071D8 (_lambda_d4c350abf5d24183546902bae9e0768c_--__lambda_d4c350abf5d24183546902bae9e0768c_.c)
 *     ?CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@UE$AAAPE$AAVDesktopBackgroundThumbnailFactory@23456@VRect@Foundation@6@@Z @ 0x18020A47C (-CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@I.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18020E4C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObs_ea_18020E4C0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802B3EEC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultit.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
__int64 __fastcall XamlAllUpViewHost::CreateFrameForMonitor(XamlAllUpViewHost *this, struct IImmersiveMonitor *a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  enum _TABLETMODESTATE *v6; // rdx
  TabletModeHelpers *v7; // rcx
  char IsTabletMode; // r13
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rsi
  int XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c; // eax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+60h] [rbp-128h] BYREF
  __int64 v28; // [rsp+68h] [rbp-120h] BYREF
  struct IImmersiveMonitor *v29; // [rsp+70h] [rbp-118h] BYREF
  __int64 v30; // [rsp+78h] [rbp-110h] BYREF
  __int64 v31[2]; // [rsp+80h] [rbp-108h] BYREF
  __int128 v32; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v37[3]; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v38[12]; // [rsp+E0h] [rbp-A8h] BYREF
  int v39[4]; // [rsp+140h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v37[1] = -2LL;
  v29 = a2;
  v28 = 0LL;
  v4 = Platform::Details::Heap::Allocate(0x78uLL, 0xA0uLL);
  v5 = Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl((__int64)v4);
  *(_QWORD *)&v32 = v5;
  __abi_winrt_ptr_assign(&v28, v5);
  __abi_winrt_ptr_dtor(v5);
  IsTabletMode = TabletModeHelpers::IsTabletMode(v7, v6);
  v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 88LL))(a2, v39);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C5,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v9);
    __abi_winrt_ptr_dtor(v28);
    return v10;
  }
  *(float *)&v33 = (float)v39[0];
  *((float *)&v33 + 1) = (float)v39[1];
  *((float *)&v33 + 2) = (float)(v39[2] - v39[0]);
  *((float *)&v33 + 3) = (float)(v39[3] - v39[1]);
  v32 = v33;
  v12 = Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice::CreateThumbnailFactoryForDesktopBackground(
          *((_QWORD *)this + 20),
          &v32);
  *(_QWORD *)&v32 = v12;
  v13 = __abi_winrt_ptr_ctor(v12);
  v36 = v13;
  __abi_winrt_ptr_dtor(v12);
  v14 = __abi_winrt_cast_to(
          0,
          *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 25),
          (__int64)&_uuidof__AUIXamlSwitcherWindowInteractionEvents__);
  *(_QWORD *)&v32 = v14;
  v30 = v14;
  wil::MakeOrThrow<MonitorFrame,IImmersiveMonitor * &,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl __gc * &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc *>(
    &v27,
    (__int64)&v29,
    (__int64)&v28,
    (__int64)this + 200,
    &v30);
  __abi_winrt_ptr_dtor(v14);
  v15 = __abi_winrt_ptr_ctor(*((_QWORD *)this + 22));
  v37[0] = v15;
  v30 = *((_QWORD *)this + 30);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v30);
  if ( IsTabletMode )
    v16 = 0LL;
  else
    v16 = *((_QWORD *)this + 23);
  v17 = __abi_winrt_ptr_ctor(v16);
  v35 = v17;
  if ( IsTabletMode )
    v18 = 0LL;
  else
    v18 = *((_QWORD *)this + 24);
  v19 = __abi_winrt_ptr_ctor(v18);
  v34 = v19;
  *(_QWORD *)&v32 = this;
  if ( this )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::InternalAddRef(this);
  lambda_d4c350abf5d24183546902bae9e0768c_::_lambda_d4c350abf5d24183546902bae9e0768c__0(
    (__int64)v38,
    (__int64 *)&v32,
    &v30,
    v37,
    v39,
    &v33,
    &v36,
    &v28,
    &v27,
    &v35,
    &v34);
  v31[0] = 0LL;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
  XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c = MakeXamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c_(
                                                                                     (__int64 *)&v29,
                                                                                     (__int64)v38);
  v21 = XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c;
  if ( XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24D,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31);
    lambda_d4c350abf5d24183546902bae9e0768c_::__lambda_d4c350abf5d24183546902bae9e0768c_(v38);
    if ( this )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(this);
    __abi_winrt_ptr_dtor(v19);
    __abi_winrt_ptr_dtor(v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v30);
    __abi_winrt_ptr_dtor(v15);
    v22 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
LABEL_16:
    __abi_winrt_ptr_dtor(v13);
    __abi_winrt_ptr_dtor(v28);
    return v21;
  }
  v33 = *(_OWORD *)v39;
  v23 = *((_QWORD *)this + 28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31);
  v24 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *, __int128 *, __int64, GUID *, __int64 *))(*(_QWORD *)v23 + 32LL))(
          v23,
          v29,
          &v33,
          5LL,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          v31);
  v21 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24E,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31);
    lambda_d4c350abf5d24183546902bae9e0768c_::__lambda_d4c350abf5d24183546902bae9e0768c_(v38);
    if ( this )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(this);
    __abi_winrt_ptr_dtor(v19);
    __abi_winrt_ptr_dtor(v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v30);
    __abi_winrt_ptr_dtor(v15);
    v25 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_16;
  }
  std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::emplace_back<Microsoft::WRL::ComPtr<MonitorFrame> const &>(
    (__int64 **)this + 41,
    &v27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31);
  lambda_d4c350abf5d24183546902bae9e0768c_::__lambda_d4c350abf5d24183546902bae9e0768c_(v38);
  if ( this )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(this);
  __abi_winrt_ptr_dtor(v19);
  __abi_winrt_ptr_dtor(v17);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v30);
  __abi_winrt_ptr_dtor(v15);
  v26 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  __abi_winrt_ptr_dtor(v13);
  __abi_winrt_ptr_dtor(v28);
  return 0LL;
}

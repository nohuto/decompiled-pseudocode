/*
 * XREFs of ??_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z @ 0x18018EA40
 * Callers:
 *     ??_ECLaunchActivatedEventArgs@@GPI@EAAPEAXI@Z @ 0x180190940 (--_ECLaunchActivatedEventArgs@@GPI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??1CActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAA@XZ @ 0x18018E904 (--1CActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CLaunchActivatedEventArgs *__fastcall CLaunchActivatedEventArgs::`scalar deleting destructor'(
        CLaunchActivatedEventArgs *this,
        char a2)
{
  __int64 v4; // rcx
  HSTRING v5; // rcx
  HSTRING v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgs'};
  *((_QWORD *)this + 1) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 2) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs'};
  *((_QWORD *)this + 3) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 4) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::INavigationActivatedEventArgs'};
  *((_QWORD *)this + 5) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 14) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs'};
  *((_QWORD *)this + 15) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeApplicationViewActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 16) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IInitializeApplicationViewActivatedEventArgs'};
  *((_QWORD *)this + 17) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 23) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs'};
  *((_QWORD *)this + 24) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializePrelaunchActivatedEventArgs>,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 26) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::RuntimeClass<CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 27) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs'};
  *((_QWORD *)this + 28) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 31) = &CLaunchActivatedEventArgs::`vftable'{for `CThreadRefTaker'};
  v4 = *((_QWORD *)this + 35);
  if ( v4 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (HSTRING)*((_QWORD *)this + 34);
  if ( v5 )
    WindowsDeleteString(v5);
  v6 = (HSTRING)*((_QWORD *)this + 33);
  if ( v6 )
    WindowsDeleteString(v6);
  *((_QWORD *)this + 31) = &CThreadRefTaker::`vftable';
  v7 = *((_QWORD *)this + 32);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 32) = 0LL;
  }
  v8 = *((_QWORD *)this + 30);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v8));
  CActivatedEventArgsWithPrelaunchAndViewIdBase::~CActivatedEventArgsWithPrelaunchAndViewIdBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

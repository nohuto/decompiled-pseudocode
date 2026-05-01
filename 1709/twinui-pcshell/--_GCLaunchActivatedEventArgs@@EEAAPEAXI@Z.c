/*
 * XREFs of ??_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z @ 0x1801CDCB0
 * Callers:
 *     ??_ECLaunchActivatedEventArgs@@GBDA@EAAPEAXI@Z @ 0x1801CF2F0 (--_ECLaunchActivatedEventArgs@@GBDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801CE140 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWith.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CLaunchActivatedEventArgs *__fastcall CLaunchActivatedEventArgs::`scalar deleting destructor'(
        CLaunchActivatedEventArgs *this,
        char a2)
{
  __int64 v4; // rcx
  HSTRING v5; // rcx
  HSTRING v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgs'};
  *((_QWORD *)this + 1) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>'};
  *((_QWORD *)this + 3) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>'};
  *((_QWORD *)this + 5) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 17) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs'};
  *((_QWORD *)this + 18) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeApplicationViewActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>'};
  *((_QWORD *)this + 19) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IInitializeApplicationViewActivatedEventArgs>'};
  *((_QWORD *)this + 20) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>'};
  *((_QWORD *)this + 28) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs'};
  *((_QWORD *)this + 29) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializePrelaunchActivatedEventArgs>>'};
  *((_QWORD *)this + 33) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::RuntimeClass<CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>'};
  *((_QWORD *)this + 34) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs'};
  *((_QWORD *)this + 35) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>'};
  *((_QWORD *)this + 38) = &CLaunchActivatedEventArgs::`vftable'{for `CThreadRefTaker'};
  v4 = *((_QWORD *)this + 42);
  if ( v4 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (HSTRING)*((_QWORD *)this + 41);
  if ( v5 )
    WindowsDeleteString(v5);
  v6 = (HSTRING)*((_QWORD *)this + 40);
  if ( v6 )
    WindowsDeleteString(v6);
  v7 = *((_QWORD *)this + 39);
  *((_QWORD *)this + 38) = &CThreadRefTaker::`vftable';
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 39) = 0LL;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

/*
 * XREFs of ??0CActivatedEventArgsWithViewIdBase@@QEAA@XZ @ 0x180071DB4
 * Callers:
 *     ??0CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAA@XZ @ 0x180071EF0 (--0CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAA@XZ.c)
 * Callees:
 *     ??0CActivatedEventArgsBase@@QEAA@XZ @ 0x1800719A0 (--0CActivatedEventArgsBase@@QEAA@XZ.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x18009770C (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ??0srwlock@wil@@QEAA@XZ @ 0x1800FBB68 (--0srwlock@wil@@QEAA@XZ.c)
 */

CActivatedEventArgsWithViewIdBase *__fastcall CActivatedEventArgsWithViewIdBase::CActivatedEventArgsWithViewIdBase(
        CActivatedEventArgsWithViewIdBase *this)
{
  CActivatedEventArgsBase::CActivatedEventArgsBase(this);
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsWithViewIdBase *)((char *)this + 120));
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsWithViewIdBase *)((char *)this + 128));
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsWithViewIdBase *)((char *)this + 136));
  *(_QWORD *)this = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Microsoft::WRL::Details::Selector<CActivatedEventArgsBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsBase>,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>>'};
  *((_QWORD *)this + 1) = &CActivatedEventArgsBase::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser'};
  *((_QWORD *)this + 2) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>'};
  *((_QWORD *)this + 4) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 15) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsBase>,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>>'};
  *((_QWORD *)this + 16) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Windows::ApplicationModel::Activation::IViewSwitcherProvider'};
  *((_QWORD *)this + 17) = &CActivatedEventArgsWithPrelaunchAndViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>'};
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  wil::srwlock::srwlock((CActivatedEventArgsWithViewIdBase *)((char *)this + 176));
  return this;
}

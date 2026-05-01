/*
 * XREFs of ??0CActivatedEventArgsBase@@QEAA@XZ @ 0x1800719A0
 * Callers:
 *     ??0CActivatedEventArgsWithViewIdBase@@QEAA@XZ @ 0x180071DB4 (--0CActivatedEventArgsWithViewIdBase@@QEAA@XZ.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180071D18 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFtmBase@WR.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x18009770C (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ??0srwlock@wil@@QEAA@XZ @ 0x1800FBB68 (--0srwlock@wil@@QEAA@XZ.c)
 */

CActivatedEventArgsBase *__fastcall CActivatedEventArgsBase::CActivatedEventArgsBase(CActivatedEventArgsBase *this)
{
  __int64 v2; // rdx

  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsBase *)((char *)this + 8));
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsBase *)((char *)this + 16));
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsBase *)((char *)this + 24));
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((char *)this + 32);
  *(_QWORD *)this = &CActivatedEventArgsBase::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 1) = &CActivatedEventArgsBase::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser'};
  *((_QWORD *)this + 2) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>'};
  *((_QWORD *)this + 4) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::WeakRef::WeakRef((CActivatedEventArgsBase *)((char *)this + 80));
  *((_DWORD *)this + 22) = v2;
  *((_WORD *)this + 46) = v2;
  *((_BYTE *)this + 94) = 1;
  *((_QWORD *)this + 12) = v2;
  *((_BYTE *)this + 104) = v2;
  wil::srwlock::srwlock((CActivatedEventArgsBase *)((char *)this + 112));
  return this;
}

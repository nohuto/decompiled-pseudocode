/*
 * XREFs of ??1CActivatedEventArgsBase@@MEAA@XZ @ 0x180071948
 * Callers:
 *     ??1CActivatedEventArgsWithViewIdBase@@MEAA@XZ @ 0x180071D30 (--1CActivatedEventArgsWithViewIdBase@@MEAA@XZ.c)
 *     ??_ECActivatedEventArgsBase@@MEAAPEAXI@Z @ 0x180305E70 (--_ECActivatedEventArgsBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007115C (--1-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CActivatedEventArgsBase::~CActivatedEventArgsBase(CActivatedEventArgsBase *this)
{
  char *v1; // rbx

  v1 = (char *)this + 32;
  *(_QWORD *)this = &CActivatedEventArgsBase::`vftable';
  *((_QWORD *)this + 1) = &CActivatedEventArgsBase::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser'};
  *((_QWORD *)this + 2) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>'};
  *((_QWORD *)this + 4) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)this + 80);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>(v1);
}

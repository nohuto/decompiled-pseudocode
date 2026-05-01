/*
 * XREFs of ??_ECActivatedEventArgsBase@@MEAAPEAXI@Z @ 0x1801CD990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180005860 (--1-$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 *     ??1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ @ 0x1800059F4 (--1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

CActivatedEventArgsBase *__fastcall CActivatedEventArgsBase::`vector deleting destructor'(
        CActivatedEventArgsBase *this,
        char a2)
{
  *(_QWORD *)this = &CActivatedEventArgsBase::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgs'};
  *((_QWORD *)this + 1) = &CActivatedEventArgsWithPrelaunchAndViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>'};
  *((_QWORD *)this + 3) = &CActivatedEventArgsWithPrelaunchAndViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 4) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::FtmBase::`vftable';
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>((__int64 *)this + 12);
  CApplicationManager::ACTIVATION_STACK_DATA::~ACTIVATION_STACK_DATA((CActivatedEventArgsBase *)((char *)this + 40));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

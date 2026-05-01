/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801CE140
 * Callers:
 *     ??_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z @ 0x1801CDCB0 (--_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@345@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801CEB80 (--_E-$RuntimeClass@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Ac.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>(
        CActivatedEventArgsWithPrelaunchAndViewIdBase *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *((_QWORD *)this + 37);
  if ( v2 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v2);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v3 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  CActivatedEventArgsWithPrelaunchAndViewIdBase::~CActivatedEventArgsWithPrelaunchAndViewIdBase(this);
}

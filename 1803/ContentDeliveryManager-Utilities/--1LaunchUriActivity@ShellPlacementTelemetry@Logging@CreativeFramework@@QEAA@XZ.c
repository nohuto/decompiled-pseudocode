/*
 * XREFs of ??1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18002B22C
 * Callers:
 *     _ContentManagement::ContentManagementService::ProcessCreativeEvent_::_1_::dtor$1 @ 0x1800C2AD2 (_ContentManagement--ContentManagementService--ProcessCreativeEvent_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18002BA88 (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorT_ea_18002BA88.c)
 *     ?Destroy@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032AAC (-Destroy@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::~LaunchUriActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *this)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::`vftable';
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = (char *)*((_QWORD *)this + 38);
      if ( v3 )
      {
        wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)this + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *)((char *)this + 8));
}

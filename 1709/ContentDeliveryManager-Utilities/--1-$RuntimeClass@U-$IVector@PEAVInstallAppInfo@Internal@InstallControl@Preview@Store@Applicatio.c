/*
 * XREFs of ??1?$RuntimeClass@U?$IVector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@234@@WRL@Microsoft@@UEAA@XZ @ 0x180018D0C
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64___::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800B58B9 (_Windows--Foundation--Collections--Internal--Vector_Windows--ApplicationModel--Stor_ea_1800B58B9.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64___::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800B58D1 (_Windows--Foundation--Collections--Internal--Vector_Windows--Security--Authenticati_ea_1800B58D1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::~RuntimeClass<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>(
        __int64 a1)
{
  __int64 v1; // rcx
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 < 0 )
  {
    v2 = (volatile signed __int32 *)(2 * v1);
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v2 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return result;
}

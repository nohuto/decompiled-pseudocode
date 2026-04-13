/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180029928
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_IInspectable_____ptr64_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs_____ptr64_Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs_____ptr64___::_)(IInspectable_____ptr64_Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_IInspectable_____ptr64_Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs_____ptr64___lambda_d2e1a1bfe118cc3da1a4c200d83afca4___1_IInspectable_____ptr64_Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs_____ptr64_::Invoke @ 0x18007A230 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18007A230.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  result = RoGetMatchingRestrictedErrorInfo(a1, &v3);
  if ( (int)result >= 0 )
    result = SetRestrictedErrorInfo(v3);
  v2 = v3;
  if ( v3 )
  {
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}

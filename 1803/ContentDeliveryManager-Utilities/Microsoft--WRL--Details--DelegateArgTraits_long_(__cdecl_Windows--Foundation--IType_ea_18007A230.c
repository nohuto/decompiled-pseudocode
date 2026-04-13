/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_IInspectable_____ptr64_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs_____ptr64_Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs_____ptr64___::_)(IInspectable_____ptr64_Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_IInspectable_____ptr64_Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs_____ptr64___lambda_d2e1a1bfe118cc3da1a4c200d83afca4___1_IInspectable_____ptr64_Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs_____ptr64_::Invoke @ 0x18007A230
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180029928 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_IInspectable_____ptr64_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs_____ptr64_Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs_____ptr64___::___IInspectable_____ptr64_Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_IInspectable_____ptr64_Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs_____ptr64___lambda_d2e1a1bfe118cc3da1a4c200d83afca4___1_IInspectable_____ptr64_Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs_____ptr64_::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}

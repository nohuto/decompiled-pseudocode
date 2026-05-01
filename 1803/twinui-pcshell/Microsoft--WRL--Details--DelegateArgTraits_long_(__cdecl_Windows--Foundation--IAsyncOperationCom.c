/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_8fc892d76078465b937591a5e1afd338___1_Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_8fc892d76078465b937591a5e1afd338___1_Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x1801EF9A0
 * Callers:
 *     _lambda_d69c6045195ff860b1c2e6c344d418ce_::operator() @ 0x1801F1304 (_lambda_d69c6045195ff860b1c2e6c344d418ce_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus____ptr64_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_8fc892d76078465b937591a5e1afd338___1_Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_8fc892d76078465b937591a5e1afd338___1_Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = *a2;
  v4 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)a1 = off_1803364A8;
  return a1;
}

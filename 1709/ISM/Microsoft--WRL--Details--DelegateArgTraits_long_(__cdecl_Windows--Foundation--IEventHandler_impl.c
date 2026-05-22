/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::Internal::UserProfileEventArgs_____ptr64_Windows::System::Internal::IUserProfileEventArgs_____ptr64___::_)(IInspectable_____ptr64_Windows::System::Internal::IUserProfileEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____ptr64___lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable_____ptr64_Windows::System::Internal::IUserProfileEventArgs_____ptr64_::Invoke @ 0x1800689B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800638C8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::Internal::UserProfileEventArgs_____ptr64_Windows::System::Internal::IUserProfileEventArgs_____ptr64___::___IInspectable_____ptr64_Windows::System::Internal::IUserProfileEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::System::Internal::UserProfileEventArgs_____ptr64___lambda_534a6f120349d7091033bbf6854946a9___1_IInspectable_____ptr64_Windows::System::Internal::IUserProfileEventArgs_____ptr64_::Invoke(
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

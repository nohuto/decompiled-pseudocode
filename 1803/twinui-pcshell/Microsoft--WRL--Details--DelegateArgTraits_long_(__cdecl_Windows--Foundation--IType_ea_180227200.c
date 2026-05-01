/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_87fc7d809160b20f68e97a66791572a7___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::Invoke @ 0x180227200
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_87fc7d809160b20f68e97a66791572a7___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  signed int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 48LL))(a3, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 104LL) + 88LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL),
           (unsigned int)v9);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        754LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v6);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F1,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  return (unsigned int)v5;
}

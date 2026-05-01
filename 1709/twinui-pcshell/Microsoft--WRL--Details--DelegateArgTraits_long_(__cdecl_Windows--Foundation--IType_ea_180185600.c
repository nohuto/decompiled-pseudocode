/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_73decc9878748c888fba19c0a10ffe89___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180185600
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__IInspectable_____ptr64_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_73decc9878748c888fba19c0a10ffe89___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 104LL) + 72LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E1,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v1);
  return 0LL;
}

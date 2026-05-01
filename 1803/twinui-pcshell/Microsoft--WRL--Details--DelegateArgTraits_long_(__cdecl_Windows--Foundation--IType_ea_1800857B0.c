/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_f5a524404605f2a8f1a83f7a1edf160f___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x1800857B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DimStart@CStartExperienceManager@@UEAAJXZ @ 0x180076B10 (-DimStart@CStartExperienceManager@@UEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__IInspectable_____ptr64_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_f5a524404605f2a8f1a83f7a1edf160f___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke(
        __int64 a1)
{
  CStartExperienceManager *v1; // rcx
  __int64 (*v2)(void); // rax
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(CStartExperienceManager **)(*(_QWORD *)(a1 + 16) + 104LL);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 72LL);
  if ( (char *)v2 == (char *)CStartExperienceManager::DimStart )
    v3 = CStartExperienceManager::DimStart(v1);
  else
    v3 = v2();
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E0,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3,
      v5);
  return 0LL;
}

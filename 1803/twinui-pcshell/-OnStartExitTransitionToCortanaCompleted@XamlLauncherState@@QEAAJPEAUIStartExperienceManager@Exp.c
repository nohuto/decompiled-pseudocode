/*
 * XREFs of ?OnStartExitTransitionToCortanaCompleted@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180078840
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_44bbd199841b4d5ffbef2dab891128e4___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180076080 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180076080.c)
 * Callees:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180067BE0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnStartExitTransitionToCortanaCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180094890 (--$OnStartExitTransitionToCortanaCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartW.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartExitTransitionToCortanaCompleted(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v3; // rdi
  HSTRING v4; // rdx
  __int64 (__fastcall *v5)(__int64, HSTRING, unsigned int); // rax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v11; // [rsp+30h] [rbp-18h]
  char v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_DWORD *)((char *)this + 64);
  v10 = *((_DWORD *)this + 16);
  v11 = this;
  v12 = 1;
  if ( v10 == 12
    && ((*v3 = 13,
         v4 = (HSTRING)*((_QWORD *)this + 124),
         v5 = *(__int64 (__fastcall **)(__int64, HSTRING, unsigned int))(**((_QWORD **)this + 11) + 56LL),
         v6 = *((_QWORD *)this + 11),
         v5 != CortanaSharedExperienceManager::Show)
      ? (v7 = v5(v6, v4, 2u))
      : (v7 = CortanaSharedExperienceManager::Show(v6, v4, 2u)),
        v8 = v7,
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x840,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v7,
      -2);
  }
  else
  {
    v8 = 0;
  }
  v12 = 0;
  StartWindowTelemetry::OnStartExitTransitionToCortanaCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v10,
    v3,
    a3);
  return v8;
}

/*
 * XREFs of ?OnCortanaAppTransitionCompleted@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180078FF0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_c6c6b71d79175f062023ba8be746059f___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180085740 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180085740.c)
 * Callees:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1800776B0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1800947A4 (--$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTel.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaAppTransitionCompleted(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v3; // rdi
  CStartExperienceManager *v4; // rcx
  __int64 (__fastcall *v5)(CStartExperienceManager *, int); // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v10; // [rsp+30h] [rbp-18h]
  char v11; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_DWORD *)((char *)this + 64);
  v9 = *((_DWORD *)this + 16);
  v10 = this;
  v11 = 1;
  if ( v9 == 13
    && ((*v3 = 14,
         v4 = (CStartExperienceManager *)*((_QWORD *)this + 10),
         v5 = *(__int64 (__fastcall **)(CStartExperienceManager *, int))(*(_QWORD *)v4 + 64LL),
         v5 != CStartExperienceManager::Hide)
      ? (v6 = ((__int64 (__fastcall *)(CStartExperienceManager *, __int64, struct IInspectable *))v5)(v4, 7LL, a3))
      : (v6 = CStartExperienceManager::Hide(v4, 7)),
        v7 = v6,
        v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x870,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v6,
      -2);
  }
  else
  {
    v7 = 0;
  }
  v11 = 0;
  StartWindowTelemetry::OnCortanaAppTransitionCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v9,
    v3,
    a3);
  return v7;
}

/*
 * XREFs of ?_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x180067290
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64_::_)(Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64___lambda_41b5fd1e85b5fa293ba99f420d7ce4cb___1_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64_::Invoke @ 0x180068FF0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180068FF0.c)
 * Callees:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180066C30 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_ValueSet @ 0x180068E70 (_TwinUI--Cortana--ShellExperienceView--_FireViewEvent_--_2_--ShellExperienceViewEventArg--get_Va.c)
 *     _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_Name @ 0x180068EC0 (_TwinUI--Cortana--ShellExperienceView--_FireViewEvent_--_2_--ShellExperienceViewEventArg--get_Na.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::_OnViewEventHandler(
        CortanaSharedExperienceManager *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, HSTRING *); // rax
  int Name; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, struct Windows::Foundation::Collections::IPropertySet **); // rax
  int ValueSet; // eax
  int v10; // eax
  struct Windows::Foundation::Collections::IPropertySet *v11; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct Windows::Foundation::Collections::IPropertySet *v16; // [rsp+60h] [rbp+30h] BYREF
  HSTRING string; // [rsp+68h] [rbp+38h] BYREF

  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  if ( (char *)v5 == (char *)TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_Name )
    Name = TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_Name(
             a3,
             &string);
  else
    Name = v5(a3, &string);
  v7 = Name;
  if ( Name < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FF,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)Name,
      -2);
    goto LABEL_11;
  }
  v16 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)a3 + 56LL);
  if ( (char *)v8 == (char *)TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_ValueSet )
    ValueSet = TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_ValueSet(
                 a3,
                 &v16);
  else
    ValueSet = v8(a3, &v16);
  v7 = ValueSet;
  if ( ValueSet < 0 )
  {
    v13 = (unsigned int)ValueSet;
    v14 = 1025LL;
  }
  else
  {
    v10 = CortanaSharedExperienceManager::_OnViewEvent(this, (Microsoft::WRL::Wrappers::Details *)string, v16);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = 0;
      goto LABEL_9;
    }
    v13 = (unsigned int)v10;
    v14 = 1026LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)v13,
    -2);
LABEL_9:
  v11 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_11:
  WindowsDeleteString(string);
  return v7;
}

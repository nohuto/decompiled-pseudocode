/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_ac37171d66894d0304dff38577cb7028___1_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::Invoke @ 0x18007E0B0
 * Callers:
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_5e56cf8d1dd2eec0a17832a5cbbc524e__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___ @ 0x18007DF74 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_5e56cf8d1dd2eec0a17832a5cbbc524e__Windo.c)
 * Callees:
 *     ?get_IsVisible@CToastCenterExperienceManager@@UEAAJPEAE@Z @ 0x18007B2F0 (-get_IsVisible@CToastCenterExperienceManager@@UEAAJPEAE@Z.c)
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x18007E13C (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::___Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___lambda_ac37171d66894d0304dff38577cb7028___1_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64_::Invoke(
        __int64 a1,
        CToastCenterExperienceManager *a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v5)(CToastCenterExperienceManager *, bool *); // rax
  int IsVisible; // eax
  int v7; // ebx
  CToastCenterExperienceManager *v8; // rcx
  bool v9; // al
  int v10; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = a3;
  v3 = *(_QWORD *)a2;
  LOBYTE(v14) = 0;
  v5 = *(__int64 (__fastcall **)(CToastCenterExperienceManager *, bool *))(v3 + 48);
  if ( v5 == CToastCenterExperienceManager::get_IsVisible )
    IsVisible = CToastCenterExperienceManager::get_IsVisible(a2, (bool *)&v14);
  else
    IsVisible = v5(a2, (bool *)&v14);
  v7 = IsVisible;
  if ( IsVisible < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)IsVisible,
      v12);
  }
  else
  {
    v8 = *(CToastCenterExperienceManager **)(a1 + 16);
    v9 = (_BYTE)v14 != 0;
    *((_BYTE *)v8 + 418) = (_BYTE)v14 != 0;
    if ( v9 )
    {
      v10 = CToastCenterExperienceManager::Hide(v8);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x172,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v10,
          v12);
    }
    v7 = 0;
  }
  if ( v7 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v7);
  return (unsigned int)v7;
}

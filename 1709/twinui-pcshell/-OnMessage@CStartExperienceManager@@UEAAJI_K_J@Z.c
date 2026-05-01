/*
 * XREFs of ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x1800B7E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x1800B8698 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_d789d36f4409f79ab6db7c104c5ebf63__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int___ @ 0x1800BA534 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_d789d36f4409f79ab6db7c104c5ebf63__Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::OnMessage(CStartExperienceManager *this, int a2, char *a3, const WCHAR *a4)
{
  char *v5; // rcx
  char *v6; // rsi
  RTL_SRWLOCK *v7; // rdi
  RTL_SRWLOCK *v8; // rcx
  volatile signed __int32 *v9; // rbx
  CStartExperienceManager *v10; // rcx
  unsigned int v11; // r8d
  int v12; // eax
  char *v14; // [rsp+38h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h]
  __int128 v16; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v18; // [rsp+78h] [rbp+10h] BYREF

  if ( a2 == 26 )
  {
    if ( !a4 || CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 0) != 2 )
      return 0LL;
    v10 = (CStartExperienceManager *)((char *)this - 48);
    v11 = 0;
  }
  else
  {
    if ( a2 != 798 )
    {
      if ( a2 == 1025 )
      {
        v5 = (char *)this - 48;
        if ( a3 == v5 )
        {
          v18 = (int)a4;
          v6 = (char *)this + 224;
          v14 = v5;
          *(_QWORD *)&v15 = &v14;
          v7 = (RTL_SRWLOCK *)((char *)this + 232);
          v8 = (RTL_SRWLOCK *)((char *)this + 232);
          *((_QWORD *)&v15 + 1) = &v18;
          v9 = 0LL;
          AcquireSRWLockExclusive(v8);
          if ( *(_QWORD *)v6 )
          {
            v9 = *(volatile signed __int32 **)v6;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v6 + 12LL));
          }
          if ( v7 )
            ReleaseSRWLockExclusive(v7);
          if ( v9 )
          {
            v16 = v15;
            Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_d789d36f4409f79ab6db7c104c5ebf63__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int___(
              &v16,
              v9,
              v6);
            if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
            }
          }
        }
      }
      return 0LL;
    }
    v10 = (CStartExperienceManager *)((char *)this - 48);
    v11 = 1;
  }
  v12 = CStartExperienceManager::ReactivateHelper(v10, L"OnStartThemeChanged", v11);
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  return 0LL;
}

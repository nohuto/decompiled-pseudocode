/*
 * XREFs of ?OnViewCreated@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B15F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1801D2ED4 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewCreated(
        CPeopleBarJumpViewExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v4; // rax
  unsigned int v5; // ebx
  int v6; // eax
  _DWORD *v7; // rdi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-20h]
  __int128 v13; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h]
  _DWORD *v17; // [rsp+88h] [rbp+38h]

  v4 = ExperienceManagerUtils::WindowFromViewWrapper(
         a2[3],
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( !v4 || SetPropW(v4, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v15 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(ExperienceManagerUtils *, GUID *, __int64 *))a2[3])(
           a2[3],
           &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
           &v15);
    v5 = v6;
    if ( v6 >= 0 )
    {
      LODWORD(v12) = 0;
      *(_QWORD *)&v13 = (char *)this - 48;
      *((_QWORD *)&v13 + 1) = CPeopleBarJumpViewExperienceManager::OnClientWindowReadyForPresentationChanged;
      v7 = 0LL;
      v16 = 0LL;
      v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = v8;
      if ( v8 )
      {
        *(_QWORD *)v8 = &IAppViewDataSourceAdapter::`vftable';
        v8[3] = 1;
        *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *((_OWORD *)v9 + 1) = v13;
        *((_QWORD *)v9 + 4) = v12;
        *(_QWORD *)v9 = off_180201DF0;
        v7 = v9;
      }
      v17 = v7;
      CSingleViewShellExperience::SetPreferentialRMSettings((char *)this + 8, 1LL);
      v5 = 0;
      if ( v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xA7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    }
    v10 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    v5 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)0x80004005LL);
  }
  return v5;
}

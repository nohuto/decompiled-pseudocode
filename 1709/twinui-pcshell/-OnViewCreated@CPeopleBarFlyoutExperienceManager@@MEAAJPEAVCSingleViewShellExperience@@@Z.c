/*
 * XREFs of ?OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800ADFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x1800AE904 (-GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801D0D98 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1801D2ED4 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewCreated(
        CPeopleBarFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v4; // rax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  _DWORD *v8; // rdi
  _DWORD *v9; // rax
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  _DWORD *v11; // rbx
  int FlyoutRectForLocationAndBorderFlag; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-11h] BYREF
  __int128 v19; // [rsp+48h] [rbp-9h]
  _BYTE v20[24]; // [rsp+58h] [rbp+7h]
  __int64 v21; // [rsp+70h] [rbp+1Fh]
  __int64 v22; // [rsp+78h] [rbp+27h]
  struct tagRECT v23; // [rsp+80h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v21 = -2LL;
  v4 = ExperienceManagerUtils::WindowFromViewWrapper(
         a2[3],
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( v4 && !SetPropW(v4, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v5 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)0x80004005LL);
    return v5;
  }
  v17 = 0LL;
  v6 = CSingleViewShellExperience::SetPreferentialRMSettings(a2, 1LL);
  v5 = v6;
  if ( v6 >= 0 )
  {
    v6 = (**(__int64 (__fastcall ***)(ExperienceManagerUtils *, GUID *, __int64 *))a2[3])(
           a2[3],
           &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
           &v17);
    v5 = v6;
    if ( v6 >= 0 )
    {
      *(_QWORD *)&v19 = CPeopleBarFlyoutExperienceManager::OnClientWindowReadyForPresentationChanged;
      DWORD2(v19) = 0;
      *(_QWORD *)v20 = (char *)this - 64;
      *(_OWORD *)&v20[8] = v19;
      v8 = 0LL;
      v22 = 0LL;
      v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v11 = v9;
      if ( v9 )
      {
        *(_QWORD *)v9 = &IAppViewDataSourceAdapter::`vftable';
        v9[3] = 1;
        *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::`vftable';
        v10 = Microsoft::WRL::Details::ModuleBase::module_;
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *((_OWORD *)v11 + 1) = *(_OWORD *)v20;
        *((_QWORD *)v11 + 4) = *(_QWORD *)&v20[16];
        *(_QWORD *)v11 = off_180201DF0;
        v8 = v11;
      }
      *(_QWORD *)&v19 = v8;
      FlyoutRectForLocationAndBorderFlag = CPeopleBarFlyoutExperienceManager::GetFlyoutRectForLocationAndBorderFlag(
                                             v10,
                                             *((_QWORD *)this + 31),
                                             &v23,
                                             &v18);
      v5 = FlyoutRectForLocationAndBorderFlag;
      if ( FlyoutRectForLocationAndBorderFlag >= 0 )
      {
        v13 = CSingleViewShellExperience::ShowBorder(a2, v18, 1LL, 0LL, 0LL);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x143,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
            (const char *)(unsigned int)v13);
        v14 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)a2, &v23);
        v5 = v14;
        if ( v14 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x144,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
            (const char *)(unsigned int)v14);
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x142,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
          (const char *)(unsigned int)FlyoutRectForLocationAndBorderFlag);
      }
      if ( v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
      goto LABEL_21;
    }
    v7 = 311LL;
  }
  else
  {
    v7 = 309LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_21:
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v5;
}

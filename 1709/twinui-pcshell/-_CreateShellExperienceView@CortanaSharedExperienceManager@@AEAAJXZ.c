/*
 * XREFs of ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A202C
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800A0490 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x1800A9000 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaSharedExperienceManager::_CreateShellExperienceView(CortanaSharedExperienceManager *this)
{
  HRESULT v2; // eax
  HRESULT v3; // eax
  HRESULT v4; // eax
  _QWORD *v5; // r15
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rsi
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  int v13; // eax
  _DWORD *v14; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  int v17; // eax
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp-C8h]
  int v21[2]; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v22; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h]
  __int128 v26; // [rsp+80h] [rbp-88h]
  __int128 v27; // [rsp+90h] [rbp-78h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  _DWORD *v29; // [rsp+A8h] [rbp-60h]
  HSTRING_HEADER v30; // [rsp+B0h] [rbp-58h] BYREF
  HSTRING v31; // [rsp+C8h] [rbp-40h] BYREF
  HSTRING_HEADER v32; // [rsp+D0h] [rbp-38h] BYREF
  HSTRING v33; // [rsp+E8h] [rbp-20h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+F0h] [rbp-18h] BYREF
  HSTRING string; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  v28 = -2LL;
  v19 = 13;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.Cortana", 0x28u, &hstringHeader, &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  *(_QWORD *)v21 = string;
  v33 = 0LL;
  v3 = WindowsCreateStringReference(L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI", 0x29u, &v32, &v33);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
  v22 = v33;
  v31 = 0LL;
  v4 = WindowsCreateStringReference(L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI", 0x31u, &v30, &v31);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
  v23 = v31;
  v24 = *((_QWORD *)this + 48);
  v5 = (_QWORD *)((char *)this + 480);
  v6 = *((_QWORD *)this + 60);
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
         (int)this + 480,
         (unsigned int)&v24,
         (unsigned int)&v23,
         (unsigned int)&v22,
         (__int64)v21,
         (__int64)&v19);
  v31 = 0LL;
  v33 = 0LL;
  string = 0LL;
  if ( v7 < 0 )
  {
    v8 = 724LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v9 = *((_QWORD *)this + 59);
  if ( v9 )
  {
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v5)(
         *v5,
         &GUID_0af05558_d7f8_465e_977e_67af403ddef2,
         (char *)this + 472);
  if ( v7 < 0 )
  {
    v8 = 726LL;
    goto LABEL_11;
  }
  *(_QWORD *)&v27 = CortanaSharedExperienceManager::_OnViewChangedHandler;
  DWORD2(v27) = 0;
  *(_QWORD *)v20 = this;
  *(_OWORD *)&v20[8] = v27;
  v10 = 0LL;
  v25 = 0LL;
  v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = &IAppViewDataSourceAdapter::`vftable';
    v11[3] = 1;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v12 + 1) = *(_OWORD *)v20;
    *((_QWORD *)v12 + 4) = *(_QWORD *)&v20[16];
    *(_QWORD *)v12 = off_180201E40;
    v10 = v12;
  }
  v29 = v10;
  v25 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *))(*(_QWORD *)*v5 + 152LL))(*v5, v10, (char *)this + 488);
  v7 = v13;
  if ( v13 >= 0 )
  {
    *(_QWORD *)&v26 = CortanaSharedExperienceManager::_OnViewEventHandler;
    DWORD2(v26) = 0;
    *(_QWORD *)v20 = this;
    *(_OWORD *)&v20[8] = v26;
    v14 = 0LL;
    *(_QWORD *)&v26 = 0LL;
    v15 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    if ( v15 )
    {
      *(_QWORD *)v15 = &IAppViewDataSourceAdapter::`vftable';
      v15[3] = 1;
      *(_QWORD *)v15 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_OWORD *)v16 + 1) = *(_OWORD *)v20;
      *((_QWORD *)v16 + 4) = *(_QWORD *)&v20[16];
      *(_QWORD *)v16 = off_180201E18;
      v14 = v16;
    }
    *(_QWORD *)&v27 = v14;
    v17 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *))(*(_QWORD *)*v5 + 168LL))(*v5, v14, (char *)this + 496);
    v7 = v17;
    if ( v17 >= 0 )
      v7 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2DC,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
    if ( v14 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2D9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  }
  if ( v10 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v7;
}

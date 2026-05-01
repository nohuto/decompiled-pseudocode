/*
 * XREFs of ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1800D44A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D6638 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D70B0 (-EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1800DA958 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ControlGained(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  int v8; // eax
  unsigned int v9; // edi
  _DWORD *v11; // rdi
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  int v14; // esi
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+38h] [rbp-18h]
  __int128 v19; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  CortanaDesktopExperienceView::SetExplicitDimissEnabled((CortanaDesktopExperienceView *)a1, 0);
  if ( *(_QWORD *)(a1 + 144) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  LODWORD(v17) = 0;
  *(_QWORD *)&v18 = a1;
  *((_QWORD *)&v18 + 1) = CortanaDesktopExperienceView::OnViewChanged;
  v5 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &IAppViewDataSourceAdapter::`vftable';
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v7 + 1) = v18;
    *((_QWORD *)v7 + 4) = v17;
    *(_QWORD *)v7 = off_180201E40;
    v5 = v7;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64))(**(_QWORD **)(a1 + 144) + 152LL))(
         *(_QWORD *)(a1 + 144),
         v5,
         a1 + 152);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1C1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v8);
    if ( v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    return v9;
  }
  LODWORD(v17) = 0;
  *(_QWORD *)&v19 = a1;
  *((_QWORD *)&v19 + 1) = CortanaDesktopExperienceView::OnViewEvent;
  v11 = 0LL;
  v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = &IAppViewDataSourceAdapter::`vftable';
    v12[3] = 1;
    *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v13 + 1) = v19;
    *((_QWORD *)v13 + 4) = v17;
    *(_QWORD *)v13 = off_180201E18;
    v11 = v13;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64))(**(_QWORD **)(a1 + 144) + 168LL))(
          *(_QWORD *)(a1 + 144),
          v11,
          a1 + 160);
  if ( v14 < 0 )
  {
    v15 = 451LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v14);
    if ( v11 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    return (unsigned int)v14;
  }
  CortanaDesktopExperienceView::OnViewPropertiesChanging((CortanaDesktopExperienceView *)a1);
  v14 = CortanaDesktopExperienceView::EnsureInputHostManager((CortanaDesktopExperienceView *)a1);
  if ( v14 < 0 )
  {
    v15 = 457LL;
    goto LABEL_20;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 120) + 24LL))(
          *(_QWORD *)(a1 + 120),
          a1 + 56,
          a1 + 224);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v16);
  if ( v11 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v5 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}

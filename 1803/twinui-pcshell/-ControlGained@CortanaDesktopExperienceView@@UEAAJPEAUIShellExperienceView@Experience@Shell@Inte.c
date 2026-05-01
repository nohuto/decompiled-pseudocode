/*
 * XREFs of ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x180066450
 * Callers:
 *     ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x180085020 (-SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B390 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewIc.c)
 *     ?EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064768 (-EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064B10 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?add_ViewChanged@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAU?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800683C0 (-add_ViewChanged@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAU-$ITypedEventHandler@PEAUIShellExp.c)
 *     ?add_ViewEvent@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAU?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180068400 (-add_ViewEvent@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAU-$ITypedEventHandler@PEAUIShellExper.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008F4E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180095F5C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIShellExperi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180095FB8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_180095FB8.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800960F8 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ControlGained(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rcx
  _OWORD *v6; // rax
  _OWORD *v7; // rbx
  _OWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 (__fastcall *v11)(__int64, _OWORD *, __int64); // rax
  int v12; // eax
  unsigned int v13; // ebx
  _OWORD *v14; // rax
  _OWORD *v15; // rbx
  _OWORD *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 (__fastcall *v19)(__int64, _OWORD *, __int64); // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  void (__fastcall *v24)(_OWORD *); // rdx
  __int64 v25; // [rsp+30h] [rbp-20h]
  __int128 v26; // [rsp+38h] [rbp-18h]
  __int128 v27; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  *(_BYTE *)(a1 + 129) = 0;
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,0,std::nullptr_t>>::reset(
    a1 + 232,
    0LL);
  if ( *(_QWORD *)(a1 + 144) != a2 )
  {
    if ( a2 )
    {
      v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL);
      if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>::AddRef )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>::AddRef(a2);
      else
        v4(a2);
    }
    v5 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  LODWORD(v25) = 0;
  *(_QWORD *)&v26 = a1;
  *((_QWORD *)&v26 + 1) = CortanaDesktopExperienceView::OnViewChanged;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = 0LL;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>(v6);
    v7[1] = v26;
    *((_QWORD *)v7 + 4) = v25;
    *(_QWORD *)v7 = off_18031B7C8;
    v8 = v7;
  }
  v9 = *(_QWORD *)(a1 + 144);
  v10 = a1 + 152;
  v11 = *(__int64 (__fastcall **)(__int64, _OWORD *, __int64))(*(_QWORD *)v9 + 152LL);
  if ( (char *)v11 == (char *)TwinUI::Cortana::ShellExperienceView::add_ViewChanged )
    v12 = TwinUI::Cortana::ShellExperienceView::add_ViewChanged(v9, v8, v10);
  else
    v12 = v11(v9, v8, v10);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C6,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v12,
      -2);
  }
  else
  {
    LODWORD(v25) = 0;
    *(_QWORD *)&v27 = a1;
    *((_QWORD *)&v27 + 1) = CortanaDesktopExperienceView::OnViewEvent;
    v14 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    v16 = 0LL;
    if ( v14 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>(v14);
      v15[1] = v27;
      *((_QWORD *)v15 + 4) = v25;
      *(_QWORD *)v15 = off_18031B7A0;
      v16 = v15;
    }
    v17 = *(_QWORD *)(a1 + 144);
    v18 = a1 + 160;
    v19 = *(__int64 (__fastcall **)(__int64, _OWORD *, __int64))(*(_QWORD *)v17 + 168LL);
    if ( (char *)v19 == (char *)TwinUI::Cortana::ShellExperienceView::add_ViewEvent )
      v20 = TwinUI::Cortana::ShellExperienceView::add_ViewEvent(v17, v16, v18);
    else
      v20 = v19(v17, v16, v18);
    v13 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C8,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v20,
        -2);
      if ( v16 )
      {
        v24 = *(void (__fastcall **)(_OWORD *))(*(_QWORD *)v16 + 16LL);
        goto LABEL_39;
      }
    }
    else
    {
      CortanaDesktopExperienceView::OnViewPropertiesChanging((CortanaDesktopExperienceView *)a1);
      v21 = CortanaDesktopExperienceView::EnsureInputHostManager((CortanaDesktopExperienceView *)a1);
      v13 = v21;
      if ( v21 >= 0 )
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 120) + 24LL))(
                *(_QWORD *)(a1 + 120),
                a1 + 56,
                a1 + 224);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1CF,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v22,
            -2);
        if ( v16 )
        {
          if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 16LL) == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v16);
          else
            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v16 + 16LL))(v16);
        }
        if ( v8 )
        {
          if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL) == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
          else
            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v8 + 16LL))(v8);
        }
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CE,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v21,
        -2);
      if ( v16 )
      {
        v24 = *(void (__fastcall **)(_OWORD *))(*(_QWORD *)v16 + 16LL);
LABEL_39:
        if ( (char *)v24 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v16);
        else
          v24(v16);
      }
    }
  }
  if ( v8 )
  {
    if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL) == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
    else
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v13;
}

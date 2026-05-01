/*
 * XREFs of ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x180122CE0
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@OBI@E$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x180124BD0 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Co_ea_180124BD0.c)
 *     ?__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x18012683C (-__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnLaunched@-QIApplicationOverri_ea_18012683C.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x18011E630 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?get@CoreWindow@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAV1Core@45@XZ @ 0x18011E7D4 (-get@CoreWindow@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAV1Core@45@XZ.c)
 *     ?begin@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@XZ @ 0x180123540 (-begin@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$a.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x180123914 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall _OnLaunched__QIApplicationOverrides_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__ME_AAAXPE_AAVLaunchActivatedEventArgs_Activation_ApplicationModel_4__Z(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void **v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  bool v10; // bl
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  _QWORD **v15; // r15
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD **v22; // r12
  __int64 v23; // rcx
  int v25; // eax
  _DWORD *v26; // rbx
  int v27; // eax
  __int64 v28; // rbx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  _DWORD *v35; // [rsp+20h] [rbp-50h] BYREF
  _QWORD **v36; // [rsp+28h] [rbp-48h]
  __int64 v37; // [rsp+30h] [rbp-40h]
  __int64 v38; // [rsp+38h] [rbp-38h]
  __int64 v39; // [rsp+40h] [rbp-30h]
  __int64 v40; // [rsp+48h] [rbp-28h]
  char v41[32]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v43; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v44; // [rsp+C8h] [rbp+58h] BYREF

  v37 = -2LL;
  EnableMiPShellThread();
  v6 = Windows::UI::Xaml::Window::Current::get(v3, v2, v4, v5);
  v7 = v6;
  v43 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v38 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = Windows::UI::Xaml::IWindow::Content::get(v7);
  v9 = v8;
  v43 = v8;
  v10 = v8 == 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v10 )
  {
    v11 = Windows::UI::Xaml::IWindow::CoreWindow::get(v7);
    v12 = v11;
    v43 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v39 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v44 = 0LL;
    v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
            v12,
            &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f,
            &v44);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _DWORD **))(*(_QWORD *)v44 + 24LL))(v44, &v35);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x67,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = 0LL;
    v36 = 0LL;
    v43 = a1 + 104;
    v16 = _Mtx_lock((_Mtx_t)(a1 + 104));
    if ( v16 )
      std::_Throw_C_error(v16);
    v18 = std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::begin(
            a1 + 184,
            v41,
            v17);
    if ( *(_QWORD *)v18 )
      v19 = **(_QWORD **)v18;
    else
      v19 = 0LL;
    v20 = *(_QWORD *)(v18 + 16) & 1LL;
    v21 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8 * ((*(_QWORD *)(v18 + 16) >> 1) & (*(_QWORD *)(v19 + 16) - 1LL)));
    v22 = *(_QWORD ***)(v21 + 8 * v20);
    if ( v22 )
    {
      ((void (__fastcall *)(_QWORD))(*v22)[1])(*(_QWORD *)(v21 + 8 * v20));
      v15 = v22;
      v36 = v22;
    }
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 192)
                                + 8 * ((*(_QWORD *)(a1 + 208) >> 1) & (*(_QWORD *)(a1 + 200) - 1LL)))
                    + 8 * (*(_QWORD *)(a1 + 208) & 1LL));
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( (*(_QWORD *)(a1 + 216))-- == 1LL )
      *(_QWORD *)(a1 + 208) = 0LL;
    else
      ++*(_QWORD *)(a1 + 208);
    v25 = _Mtx_unlock((_Mtx_t)(a1 + 104));
    if ( v25 )
      std::_Throw_C_error(v25);
    v26 = v35;
    if ( *v15 == &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `__abi_IUnknown's `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate'} )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, _DWORD *))(*v15[39] + 8LL))(v15[39], v7, v35);
    }
    else
    {
      if ( v35 )
      {
        memset(&v43, 0, 4uLL);
        *v35 = v43;
      }
      v27 = ((__int64 (__fastcall *)(_QWORD **, __int64, _DWORD *))(*v15)[3])(v15, v7, v26);
      if ( v27 < 0 )
        __abi_WinRTraiseException(v27);
    }
    v28 = 0LL;
    v43 = 0LL;
    if ( v7 )
    {
      v29 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v7)(
              v7,
              &_uuidof__AUIWindowPrivate_Xaml_UI_Windows__,
              &v43);
      if ( v29 < 0 )
        __abi_WinRTraiseException(v29);
      v28 = v43;
    }
    v40 = v28;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    v40 = v28;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 64LL))(v28);
    if ( v30 < 0 )
      __abi_WinRTraiseException(v30);
    v31 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
            *(_QWORD *)(a1 + 88),
            v35,
            0LL);
    if ( v31 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)v31);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    ((void (__fastcall *)(_QWORD **))(*v15)[2])(v15);
    v32 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v33 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 160LL))(v7, v9);
  if ( v33 < 0 )
    __abi_WinRTraiseException(v33);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}

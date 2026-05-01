/*
 * XREFs of ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x18014D2B0
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@OBI@E$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x18014EE50 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Co_ea_18014EE50.c)
 *     ?__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x180150ABC (-__abi_Windows_UI_Xaml_IApplicationOverrides____abi_OnLaunched@-QIApplicationOverri_ea_180150ABC.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x180148BDC (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x180148D3C (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?get@CoreWindow@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAV1Core@45@XZ @ 0x180148E24 (-get@CoreWindow@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAV1Core@45@XZ.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x18014DF2C (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801E5664 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall _OnLaunched__QIApplicationOverrides_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__ME_AAAXPE_AAVLaunchActivatedEventArgs_Activation_ApplicationModel_4__Z(
        __int64 a1)
{
  void **v2; // r9
  int ActivationFactoryByPCWSTR; // eax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  void **v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  bool v17; // bl
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 (__fastcall **v20)(__int64, GUID *, __int64 *); // rbx
  __int64 *v21; // rax
  int v22; // eax
  int v23; // eax
  _QWORD **v24; // r15
  int v25; // eax
  __int64 *v26; // rax
  __int64 v27; // rdx
  _QWORD **v28; // r12
  __int64 v29; // rcx
  int v31; // eax
  _DWORD *v32; // rbx
  int v33; // eax
  __int64 v34; // rbx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  _DWORD *v41; // [rsp+20h] [rbp-40h] BYREF
  __int64 v42; // [rsp+28h] [rbp-38h]
  __int64 v43; // [rsp+30h] [rbp-30h]
  __int64 v44; // [rsp+38h] [rbp-28h]
  __int64 v45; // [rsp+40h] [rbp-20h]
  __int64 v46; // [rsp+48h] [rbp-18h] BYREF
  int v47; // [rsp+50h] [rbp-10h]
  int v48; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v50; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v51; // [rsp+A8h] [rbp+48h] BYREF

  v43 = -2LL;
  EnableMouseInPointerForThread();
  v46 = 0x45FEF7B406499997LL;
  v47 = 2004181943;
  v48 = 1254872017;
  v50 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Xaml.Application",
                                &v46,
                                (struct Platform::Guid *)&v50,
                                v2);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v4 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v50);
  v5 = v4;
  v51 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v51 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  v42 = v5;
  v6 = 0LL;
  v51 = 0LL;
  if ( v5 )
  {
    v7 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v5)(
           v5,
           &_uuidof__AUIApplication2_Xaml_UI_Windows__,
           &v51);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    v6 = v51;
  }
  v41 = (_DWORD *)v6;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 1LL);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v13 = Windows::UI::Xaml::Window::Current::get(v10, v9, v11, v12);
  v14 = v13;
  v50 = v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v44 = v14;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = Windows::UI::Xaml::IWindow::Content::get(v14);
  v16 = v15;
  v50 = v15;
  v17 = v15 == 0;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v17 )
  {
    v18 = Windows::UI::Xaml::IWindow::CoreWindow::get(v14);
    v19 = v18;
    v50 = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v45 = v19;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v51 = 0LL;
    v20 = *(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v19;
    v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v51);
    v22 = (*v20)(v19, &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f, v21);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x67,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)v22);
      __debugbreak();
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _DWORD **))(*(_QWORD *)v51 + 24LL))(v51, &v41);
    if ( v23 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x6A,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)v23);
      __debugbreak();
    }
    v24 = 0LL;
    v42 = 0LL;
    v50 = a1 + 104;
    v25 = _Mtx_lock((_Mtx_t)(a1 + 104));
    if ( v25 )
      std::_Throw_C_error(v25);
    v26 = *(__int64 **)(a1 + 184);
    if ( v26 )
      v27 = *v26;
    else
      v27 = 0LL;
    v28 = *(_QWORD ***)(*(_QWORD *)(*(_QWORD *)(v27 + 8)
                                  + 8 * ((*(_QWORD *)(a1 + 208) >> 1) & (*(_QWORD *)(v27 + 16) - 1LL)))
                      + 8 * (*(_QWORD *)(a1 + 208) & 1LL));
    if ( v28 )
    {
      ((void (__fastcall *)(_QWORD **))(*v28)[1])(v28);
      v24 = v28;
      v42 = (__int64)v28;
    }
    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 192)
                                + 8 * ((*(_QWORD *)(a1 + 208) >> 1) & (*(_QWORD *)(a1 + 200) - 1LL)))
                    + 8 * (*(_QWORD *)(a1 + 208) & 1LL));
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( (*(_QWORD *)(a1 + 216))-- == 1LL )
      *(_QWORD *)(a1 + 208) = 0LL;
    else
      ++*(_QWORD *)(a1 + 208);
    v31 = _Mtx_unlock((_Mtx_t)(a1 + 104));
    if ( v31 )
      std::_Throw_C_error(v31);
    v32 = v41;
    if ( *v24 == &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `__abi_IUnknown's `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate'} )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, _DWORD *))(*v24[39] + 8LL))(v24[39], v14, v41);
    }
    else
    {
      if ( v41 )
      {
        memset(&v50, 0, 4uLL);
        *v41 = v50;
      }
      v33 = ((__int64 (__fastcall *)(_QWORD **, __int64, _DWORD *))(*v24)[3])(v24, v14, v32);
      if ( v33 < 0 )
        __abi_WinRTraiseException(v33);
    }
    v34 = 0LL;
    v50 = 0LL;
    if ( v14 )
    {
      v35 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v14)(
              v14,
              &_uuidof__AUIWindowPrivate_Xaml_UI_Windows__,
              &v50);
      if ( v35 < 0 )
        __abi_WinRTraiseException(v35);
      v34 = v50;
    }
    v46 = v34;
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
    v46 = v34;
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 64LL))(v34);
    if ( v36 < 0 )
      __abi_WinRTraiseException(v36);
    v37 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
            *(_QWORD *)(a1 + 88),
            v41,
            0LL);
    if ( v37 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x77,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)v37);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    ((void (__fastcall *)(_QWORD **))(*v24)[2])(v24);
    v38 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v39 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 160LL))(v14, v16);
  if ( v39 < 0 )
    __abi_WinRTraiseException(v39);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
}

/*
 * XREFs of ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1801FCA74
 * Callers:
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1801FAC48 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1801FA548 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ??0Application@Xaml@UI@Windows@@QE$AAA@XZ @ 0x1801FC970 (--0Application@Xaml@UI@Windows@@QE$AAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  void **v9; // r9

  *(_QWORD *)a1 = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `WindowsInternal::ComposableShell::Desktop::__IXamlExplorerHostAppPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Platform::Object's `Windows::UI::Xaml::Application'};
  *(_QWORD *)(a1 + 8) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::IApplication'};
  *(_QWORD *)(a1 + 24) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::IApplicationOverrides'};
  *(_QWORD *)(a1 + 64) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::Markup::IXamlMetadataProvider'};
  *(_QWORD *)(a1 + 72) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 80) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 224);
  *(_QWORD *)(a1 + 88) = a3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 88));
  *(_QWORD *)(a1 + 96) = __abi_winrt_ptr_ctor(a2);
  _Mtx_init_in_situ((_Mtx_t)(a1 + 104), 2);
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  v6 = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x10uLL);
  *(_QWORD *)(a1 + 184) = v6;
  *v6 = 0LL;
  **(_QWORD **)(a1 + 184) = a1 + 184;
  Windows::UI::Xaml::Application::Application(a1 + 8, v7, v8, v9);
  return a1;
}

/*
 * XREFs of _lambda_7e172f12ff20f7d48d0a79092595c49c_::operator() @ 0x180216984
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c___::Run @ 0x1802174F0 (XamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1801FBB24 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z @ 0x180201FDC (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Multitasking@Com_ea_180201FDC.c)
 *     ??$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z@WindowActivatedEventHandler@Xaml@UI@Windows@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P84@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@23@@ZW4CallbackContext@6@_N@Z @ 0x18020232C (--$-0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivat.c)
 *     ??0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x180206244 (--0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@@Z @ 0x180206624 (--0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchIt.c)
 *     ?Show@IWindowPrivate@Xaml@UI@Windows@@UE$AAAXXZ @ 0x18020B230 (-Show@IWindowPrivate@Xaml@UI@Windows@@UE$AAAXXZ.c)
 *     ?add@SwitchItemCloseInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemCloseInvokedEventHandler@3456@@Z @ 0x18021526C (-add@SwitchItemCloseInvoked@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInter.c)
 *     ?ViewLoaded@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ @ 0x180216160 (-ViewLoaded@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ.c)
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@@Z @ 0x1802166D4 (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE_ea_1802166D4.c)
 *     ?add@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInvoked@SwitcherViewModelBase@2345@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemInvokedEventHandler@2345@@Z @ 0x180217848 (-add@-QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInvoke.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall lambda_7e172f12ff20f7d48d0a79092595c49c_::operator()(__int64 *a1, __int64 a2, __int64 a3, void **a4)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  void **v9; // r9
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r8
  void **v14; // r9
  __int64 v15; // rbx
  __int64 (__fastcall ***v16)(_QWORD, __int64, __int64 *); // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void **v20; // r9
  __int64 v21; // rbx
  __int64 (__fastcall ***v22)(_QWORD, __int64, __int64 *); // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  _QWORD *v25; // rbx
  _QWORD *v27; // [rsp+38h] [rbp-20h]
  __int64 v28; // [rsp+40h] [rbp-18h] BYREF
  _QWORD *v29; // [rsp+48h] [rbp-10h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+48h]

  v6 = Windows::UI::Xaml::Window::Current::get((__int64)a1, a2, a3, a4);
  v30 = __abi_winrt_ptr_ctor(v6);
  __abi_winrt_ptr_dtor(v6);
  v10 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
          v7,
          a1[2],
          v8,
          v9);
  v11 = __abi_winrt_ptr_ctor(v10);
  __abi_winrt_ptr_dtor(v10);
  v15 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewViewModel::TaskViewViewModel(
          v12,
          v11,
          v13,
          v14);
  v16 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v15);
  __abi_winrt_ptr_dtor(v15);
  v21 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskView::TaskView(v18, v17, v19, v20);
  v22 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v21);
  __abi_winrt_ptr_dtor(v21);
  Windows::UI::Xaml::IWindowPrivate::Show((__int64)v22);
  v23 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v27 = WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler(
          v23,
          a1[3]);
  v28 = __abi_winrt_cast_to(
          0,
          v16,
          (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__);
  _add__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__SwitchItemInvoked_SwitcherViewModelBase_2345_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAVItemInvokedEventHandler_2345__Z(
    v28,
    &v29,
    v27);
  __abi_winrt_ptr_dtor(v28);
  __abi_winrt_ptr_dtor((__int64)v27);
  v29 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v24 = Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler(v29, a1[4]);
  v29 = v24;
  WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemCloseInvoked::add(
    v30,
    &v28,
    (__int64)v24);
  __abi_winrt_ptr_dtor((__int64)v24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, a1);
  v25 = (_QWORD *)__abi_winrt_cast_to(0, v22, (__int64)&_uuidof__AVUIElement_Xaml_UI_Windows__);
  v29 = v25;
  IXamlSwitcherWindowInteractionEvents::ViewLoaded(v30);
  __abi_winrt_ptr_dtor((__int64)v25);
  __abi_winrt_ptr_dtor((__int64)v22);
  __abi_winrt_ptr_dtor((__int64)v16);
  __abi_winrt_ptr_dtor(v11);
  return __abi_winrt_ptr_dtor(v30);
}

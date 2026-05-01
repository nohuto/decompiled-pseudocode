/*
 * XREFs of _lambda_7e172f12ff20f7d48d0a79092595c49c_::operator() @ 0x18016D884
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c___::Run @ 0x18016E490 (XamlExplorerHostWindowCreatedCallback__lambda_7e172f12ff20f7d48d0a79092595c49c___--Run.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x180148BDC (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ??0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18015C810 (--0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z @ 0x18015E184 (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@.c)
 *     ??$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z@WindowActivatedEventHandler@Xaml@UI@Windows@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P84@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@23@@ZW4CallbackContext@6@_N@Z @ 0x18015EB74 (--$-0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivat.c)
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@@Z @ 0x18016DC08 (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE_ea_18016DC08.c)
 *     ??0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@@Z @ 0x18016DCAC (--0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@P_ea_18016DCAC.c)
 *     ?add@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInvoked@SwitcherViewModelBase@2345@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemInvokedEventHandler@2345@@Z @ 0x18016E1F4 (-add@-QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInvoke.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall lambda_7e172f12ff20f7d48d0a79092595c49c_::operator()(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  void **v16; // r9
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  _QWORD *v19; // r14
  int v20; // eax
  __int64 v21; // r8
  _QWORD *v22; // r12
  int v23; // eax
  __int64 v24; // r8
  _QWORD *v25; // r15
  int v26; // eax
  __int64 v27; // r15
  int v28; // eax
  _QWORD *v29; // r15
  int v30; // eax
  _QWORD *v32; // [rsp+58h] [rbp-10h] BYREF
  _QWORD *v33; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+50h]
  _QWORD *v35; // [rsp+C0h] [rbp+58h]
  _QWORD *v36; // [rsp+C8h] [rbp+60h]

  v34 = a2;
  v5 = (_QWORD *)Windows::UI::Xaml::Window::Current::get(a1, a2, a3, a4);
  v7 = v5;
  v33 = v5;
  v8 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
  v35 = v7;
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  v33 = 0LL;
  v9 = (_QWORD *)WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
                   v6,
                   *(_QWORD *)(a1 + 16));
  v11 = v9;
  v33 = v9;
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
  v36 = v11;
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  v33 = 0LL;
  v12 = (_QWORD *)WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewViewModel::TaskViewViewModel(
                    v10,
                    v11);
  v17 = v12;
  v33 = v12;
  if ( v12 )
    (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
  if ( v17 )
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
  v33 = 0LL;
  v18 = (_QWORD *)WindowsInternal::ComposableShell::Experiences::Switcher::TaskView::TaskView(v14, v13, v15, v16);
  v19 = v18;
  v33 = v18;
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
  v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v19 + 64LL))(v19, v17);
  if ( v20 < 0 )
    __abi_WinRTraiseException(v20);
  v33 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v22 = WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler(
          v33,
          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24),
          v21);
  v33 = 0LL;
  if ( v17 )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD *, void *, _QWORD **))*v17)(
            v17,
            &_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__,
            &v33);
    if ( v23 < 0 )
      __abi_WinRTraiseException(v23);
    v8 = v33;
  }
  _add__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__SwitchItemInvoked_SwitcherViewModelBase_2345_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAVItemInvokedEventHandler_2345__Z(
    v8,
    &v32,
    v22);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  if ( v22 )
    (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
  v32 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v25 = Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler(
          v32,
          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 32),
          v24);
  v32 = v25;
  v33 = 0LL;
  v26 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, _QWORD **))(*v7 + 96LL))(v7, v25, &v33);
  if ( v26 < 0 )
    __abi_WinRTraiseException(v26);
  if ( v25 )
    (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
  v27 = v34;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 24LL))(v34);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 48LL))(v27, a1);
  v33 = 0LL;
  v28 = (*(__int64 (__fastcall **)(_QWORD *, void *, _QWORD **))*v19)(
          v19,
          &_uuidof__AVUIElement_Xaml_UI_Windows__,
          &v33);
  if ( v28 < 0 )
    __abi_WinRTraiseException(v28);
  v29 = v33;
  v32 = v33;
  v30 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 72LL))(v7, v33);
  if ( v30 < 0 )
    __abi_WinRTraiseException(v30);
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
  (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
  if ( v17 )
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  return (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
}

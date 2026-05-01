/*
 * XREFs of _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x18016F8CC
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___::Run @ 0x180170380 (XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___--Run.c)
 * Callees:
 *     ?__abi_winrt_cast_use_helper@@YAPE$AAVObject@Platform@@_NPEAXAEBU_GUID@@PEAU__abi_IUnknown@@@Z @ 0x18014737C (-__abi_winrt_cast_use_helper@@YAPE$AAVObject@Platform@@_NPEAXAEBU_GUID@@PEAU__abi_IUnknown@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x180148BDC (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ??0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18015C810 (--0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z @ 0x18015E184 (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@.c)
 *     ??$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z@WindowActivatedEventHandler@Xaml@UI@Windows@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P84@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@23@@ZW4CallbackContext@6@_N@Z @ 0x18015EB74 (--$-0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivat.c)
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@@Z @ 0x18016DC08 (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE_ea_18016DC08.c)
 *     ??0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@@Z @ 0x18016DCAC (--0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@P_ea_18016DCAC.c)
 *     ?add@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInvoked@SwitcherViewModelBase@2345@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVItemInvokedEventHandler@2345@@Z @ 0x18016E1F4 (-add@-QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitchItemInvoke.c)
 *     ?set@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@BackgroundThumbnail@SwitcherViewModelBase@2345@UE$AAAXPE$AAUIThumbnailFactory@Multitasking@4Internal@Windows@@@Z @ 0x1801700F8 (-set@-QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@BackgroundThumbn.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall lambda_237a64fcb5f24c6cb49474a7b0122401_::operator()(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  void **v8; // r9
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  void **v13; // r9
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 (__fastcall ***v16)(_QWORD, __int64, __int64 *); // rbx
  _QWORD *v17; // r15
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  void **v22; // r9
  _QWORD *v23; // rax
  _QWORD *v24; // r14
  int v25; // eax
  __int64 v26; // r8
  _QWORD *v27; // r12
  __int64 (__fastcall ***v28)(_QWORD, void *, __int64 *); // rax
  __int64 v29; // r8
  _QWORD *v30; // r12
  int v31; // eax
  int v32; // eax
  _QWORD *v33; // r12
  int v34; // eax
  __int64 v35; // r12
  _QWORD *v37; // [rsp+50h] [rbp-18h] BYREF
  _QWORD *v38; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+50h]
  _QWORD *v40; // [rsp+C0h] [rbp+58h]
  __int64 v41; // [rsp+C8h] [rbp+60h]

  v39 = a2;
  v5 = (_QWORD *)Windows::UI::Xaml::Window::Current::get(a1, a2, a3, a4);
  v9 = v5;
  v38 = v5;
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
  v40 = v9;
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  v38 = 0LL;
  v10 = (_QWORD *)WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
                    v6,
                    *(_QWORD *)(a1 + 16),
                    v7,
                    v8);
  v14 = (__int64)v10;
  v38 = v10;
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
  v41 = v14;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v38 = 0LL;
  v15 = (_QWORD *)WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewViewModel::TaskViewViewModel(
                    v11,
                    v14,
                    v12,
                    v13);
  v16 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v15;
  v38 = v15;
  if ( v15 )
    (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
  if ( v16 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v16)[2])(v16);
  v17 = 0LL;
  v38 = 0LL;
  if ( v16 )
  {
    v18 = (**v16)(
            v16,
            (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__,
            (__int64 *)&v38);
    if ( v18 < 0 )
      __abi_WinRTraiseException(v18);
    v17 = v38;
  }
  _set__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__BackgroundThumbnail_SwitcherViewModelBase_2345_UE_AAAXPE_AAUIThumbnailFactory_Multitasking_4Internal_Windows___Z(
    v17,
    *(_QWORD *)(a1 + 40));
  v38 = 0LL;
  v23 = (_QWORD *)WindowsInternal::ComposableShell::Experiences::Switcher::TaskView::TaskView(v20, v19, v21, v22);
  v24 = v23;
  v38 = v23;
  if ( v23 )
    (*(void (__fastcall **)(_QWORD *))(*v23 + 8LL))(v23);
  if ( v24 )
    (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
  v25 = (*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v24 + 64LL))(
          v24,
          v16);
  if ( v25 < 0 )
    __abi_WinRTraiseException(v25);
  v38 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v27 = WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler(
          v38,
          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24),
          v26);
  v38 = v27;
  v28 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))__abi_winrt_cast_use_helper(
                                                               0,
                                                               v16,
                                                               (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__,
                                                               (__int64)v17);
  _add__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__SwitchItemInvoked_SwitcherViewModelBase_2345_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAVItemInvokedEventHandler_2345__Z(
    v28,
    &v37,
    (__int64)v27);
  if ( v27 )
    (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
  v37 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v30 = Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler(
          v37,
          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 32),
          v29);
  v37 = v30;
  v38 = 0LL;
  v31 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, _QWORD **))(*v9 + 96LL))(v9, v30, &v38);
  if ( v31 < 0 )
    __abi_WinRTraiseException(v31);
  if ( v30 )
    (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
  v38 = 0LL;
  v32 = (*(__int64 (__fastcall **)(_QWORD *, void *, _QWORD **))*v24)(
          v24,
          &_uuidof__AVUIElement_Xaml_UI_Windows__,
          &v38);
  if ( v32 < 0 )
    __abi_WinRTraiseException(v32);
  v33 = v38;
  v37 = v38;
  v34 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 72LL))(v9, v38);
  if ( v34 < 0 )
    __abi_WinRTraiseException(v34);
  if ( v33 )
    (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
  v35 = v39;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 24LL))(v39);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 48LL))(v35, a1);
  (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
  if ( v17 )
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
  if ( v16 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v16)[2])(v16);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
}

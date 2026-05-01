/*
 * XREFs of _lambda_595b6875358bb48b4963d1a32745e1c2_::operator() @ 0x180141268
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2___::Run @ 0x180141C40 (XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2___--Run.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x18011E630 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ??0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@@Z @ 0x18012EDD4 (--0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchIt.c)
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Common@Multitasking@234@@Z @ 0x18012F0B4 (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIS.c)
 *     ??0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18012F158 (--0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z@TaskViewSwitchItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUISwitchItem@Common@Multitasking@234@@ZW4CallbackContext@Platform@@_N@Z @ 0x180130308 (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Common@Multitasking@Experienc.c)
 *     ??$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z@WindowActivatedEventHandler@Xaml@UI@Windows@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P84@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@23@@ZW4CallbackContext@6@_N@Z @ 0x180130924 (--$-0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivat.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall lambda_595b6875358bb48b4963d1a32745e1c2_::operator()(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  void **v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  void **v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  void **v22; // r9
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // eax
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // r15
  int v29; // eax
  _QWORD *v30; // rax
  __int64 v31; // r8
  _QWORD *v32; // r15
  int v33; // eax
  int v34; // eax
  __int64 v35; // r15
  int v36; // eax
  __int64 v38; // [rsp+90h] [rbp+40h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+50h]
  __int64 v40; // [rsp+A8h] [rbp+58h]

  v6 = Windows::UI::Xaml::Window::Current::get(a1, a2, a3, a4);
  v10 = v6;
  v38 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v39 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v38 = 0LL;
  v11 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
          v7,
          *(_QWORD *)(a1 + 16),
          v8,
          v9);
  v15 = v11;
  v38 = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v40 = v15;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v38 = 0LL;
  v16 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewViewModel::TaskViewViewModel(
          v12,
          v15,
          v13,
          v14);
  v17 = v16;
  v38 = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 80LL))(v17, *(_QWORD *)(a1 + 40));
  if ( v18 < 0 )
    __abi_WinRTraiseException(v18);
  v38 = 0LL;
  v23 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskView::TaskView(v20, v19, v21, v22);
  v24 = v23;
  v38 = v23;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 64LL))(v24, v17);
  if ( v25 < 0 )
    __abi_WinRTraiseException(v25);
  v26 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v28 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemInvokedEventHandler::TaskViewSwitchItemInvokedEventHandler(
          v26,
          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24),
          v27);
  v38 = 0LL;
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v17 + 88LL))(v17, v28, &v38);
  if ( v29 < 0 )
    __abi_WinRTraiseException(v29);
  if ( v28 )
    (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
  v30 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v32 = Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler(
          v30,
          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 32),
          v31);
  v38 = 0LL;
  v33 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v10 + 96LL))(v10, v32, &v38);
  if ( v33 < 0 )
    __abi_WinRTraiseException(v33);
  if ( v32 )
    (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
  v38 = 0LL;
  v34 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v24)(
          v24,
          &_uuidof__AVUIElement_Xaml_UI_Windows__,
          &v38);
  if ( v34 < 0 )
    __abi_WinRTraiseException(v34);
  v35 = v38;
  v36 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 72LL))(v10, v38);
  if ( v36 < 0 )
    __abi_WinRTraiseException(v36);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}

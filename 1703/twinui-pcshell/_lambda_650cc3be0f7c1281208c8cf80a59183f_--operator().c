/*
 * XREFs of _lambda_650cc3be0f7c1281208c8cf80a59183f_::operator() @ 0x18013F570
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_650cc3be0f7c1281208c8cf80a59183f___::Run @ 0x18013FEC0 (XamlExplorerHostWindowCreatedCallback__lambda_650cc3be0f7c1281208c8cf80a59183f___--Run.c)
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
__int64 __fastcall lambda_650cc3be0f7c1281208c8cf80a59183f_::operator()(__int64 a1, __int64 a2, __int64 a3, void **a4)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void **v20; // r9
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // r15
  int v28; // eax
  _QWORD *v29; // rax
  __int64 v30; // r8
  _QWORD *v31; // r15
  int v32; // eax
  int v33; // eax
  __int64 v34; // r15
  int v35; // eax
  __int64 v37; // [rsp+90h] [rbp+40h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+50h]
  __int64 v39; // [rsp+A8h] [rbp+58h]

  v6 = Windows::UI::Xaml::Window::Current::get(a1, a2, a3, a4);
  v10 = v6;
  v37 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v38 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v37 = 0LL;
  v11 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
          v7,
          *(_QWORD *)(a1 + 16),
          v8,
          v9);
  v15 = v11;
  v37 = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v39 = v15;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v37 = 0LL;
  v16 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewViewModel::TaskViewViewModel(
          v12,
          v15,
          v13,
          v14);
  v21 = v16;
  v37 = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v37 = 0LL;
  v22 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskView::TaskView(v18, v17, v19, v20);
  v23 = v22;
  v37 = v22;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 64LL))(v23, v21);
  if ( v24 < 0 )
    __abi_WinRTraiseException(v24);
  v25 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v27 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemInvokedEventHandler::TaskViewSwitchItemInvokedEventHandler(
          v25,
          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24),
          v26);
  v37 = 0LL;
  v28 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v21 + 88LL))(v21, v27, &v37);
  if ( v28 < 0 )
    __abi_WinRTraiseException(v28);
  if ( v27 )
    (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
  v29 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v31 = Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler(
          v29,
          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 32),
          v30);
  v37 = 0LL;
  v32 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v10 + 96LL))(v10, v31, &v37);
  if ( v32 < 0 )
    __abi_WinRTraiseException(v32);
  if ( v31 )
    (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, a1);
  v37 = 0LL;
  v33 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v23)(
          v23,
          &_uuidof__AVUIElement_Xaml_UI_Windows__,
          &v37);
  if ( v33 < 0 )
    __abi_WinRTraiseException(v33);
  v34 = v37;
  v35 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 72LL))(v10, v37);
  if ( v35 < 0 )
    __abi_WinRTraiseException(v35);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}

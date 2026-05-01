/*
 * XREFs of ?Initialize@MonitorFrame@@QEAAXPE$AAVTaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVWindow@Xaml@UI@Windows@@PEAUIXamlExplorerHostWindow@@@Z @ 0x18012C280
 * Callers:
 *     _lambda_4d9498deded80cfab1ff9f78bf19bcab_::operator() @ 0x18012E08C (_lambda_4d9498deded80cfab1ff9f78bf19bcab_--operator().c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z@TaskViewSwitchItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUISwitchItem@Common@Multitasking@234@@ZW4CallbackContext@Platform@@_N@Z @ 0x180130308 (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Common@Multitasking@Experienc.c)
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUISwitchItem@Common@Multitasking@234@@ZW4CallbackContext@Platform@@_N@Z @ 0x180130574 (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Common@Multitask_ea_180130574.c)
 *     ??$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXXZ@TaskViewBackgroundClickedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P85@E$AAAXXZW4CallbackContext@Platform@@_N@Z @ 0x1801306BC (--$-0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXXZ@TaskViewBackgroundClickedEventHandler@S.c)
 *     ??$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z@WindowActivatedEventHandler@Xaml@UI@Windows@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P84@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@23@@ZW4CallbackContext@6@_N@Z @ 0x180130924 (--$-0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivat.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall MonitorFrame::Initialize(RTL_SRWLOCK *a1, PVOID a2, PVOID a3, PVOID a4)
{
  PVOID Ptr; // rcx
  PVOID v9; // rcx
  PVOID v10; // rcx
  __int64 v11; // rdi
  PVOID v12; // rcx
  int v13; // eax
  __int64 v14; // rdi
  PVOID v15; // rcx
  int v16; // eax
  __int64 v17; // rdi
  PVOID v18; // rcx
  int v19; // eax
  __int64 v20; // rdi
  PVOID v21; // rcx
  int v22; // eax
  char v23[24]; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v24; // [rsp+80h] [rbp+30h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+38h] BYREF
  void *v26; // [rsp+90h] [rbp+40h]

  wil::srwlock::lock_exclusive(a1 + 16, &SRWLock);
  v24 = a1;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)v23, &v24);
  if ( a2 != a1[11].Ptr )
  {
    if ( a2 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)a2 + 8LL))(a2);
    Ptr = a1[11].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    a1[11].Ptr = a2;
  }
  if ( a3 != a1[10].Ptr )
  {
    if ( a3 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)a3 + 8LL))(a3);
    v9 = a1[10].Ptr;
    if ( v9 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
    a1[10].Ptr = a3;
  }
  if ( a1[5].Ptr != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)a4 + 8LL))(a4);
    v10 = a1[5].Ptr;
    a1[5].Ptr = a4;
    if ( v10 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v26 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v11 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemInvokedEventHandler::TaskViewSwitchItemInvokedEventHandler(
          v26,
          a1[8].Ptr);
  v26 = (void *)v11;
  v12 = a1[11].Ptr;
  v24 = 0LL;
  v13 = (*(__int64 (__fastcall **)(PVOID, __int64, RTL_SRWLOCK **))(*(_QWORD *)v12 + 88LL))(v12, v11, &v24);
  if ( v13 < 0 )
    __abi_WinRTraiseException(v13);
  a1[12].Ptr = v24;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v26 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v14 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemCloseInvokedEventHandler::TaskViewSwitchItemCloseInvokedEventHandler(
          v26,
          a1[8].Ptr);
  v26 = (void *)v14;
  v15 = a1[11].Ptr;
  v24 = 0LL;
  v16 = (*(__int64 (__fastcall **)(PVOID, __int64, RTL_SRWLOCK **))(*(_QWORD *)v15 + 104LL))(v15, v14, &v24);
  if ( v16 < 0 )
    __abi_WinRTraiseException(v16);
  a1[13].Ptr = v24;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v26 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v17 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewBackgroundClickedEventHandler::TaskViewBackgroundClickedEventHandler(
          v26,
          a1[7].Ptr);
  v26 = (void *)v17;
  v18 = a1[11].Ptr;
  v24 = 0LL;
  v19 = (*(__int64 (__fastcall **)(PVOID, __int64, RTL_SRWLOCK **))(*(_QWORD *)v18 + 120LL))(v18, v17, &v24);
  if ( v19 < 0 )
    __abi_WinRTraiseException(v19);
  a1[14].Ptr = v24;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v26 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
  v20 = Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler(v26, a1[7].Ptr);
  v26 = (void *)v20;
  v21 = a1[10].Ptr;
  v24 = 0LL;
  v22 = (*(__int64 (__fastcall **)(PVOID, __int64, RTL_SRWLOCK **))(*(_QWORD *)v21 + 96LL))(v21, v20, &v24);
  if ( v22 < 0 )
    __abi_WinRTraiseException(v22);
  a1[15].Ptr = v24;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}

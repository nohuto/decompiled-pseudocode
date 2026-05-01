/*
 * XREFs of ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18013431C
 * Callers:
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z@TaskViewSwitchItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUISwitchItem@Common@Multitasking@234@@ZW4CallbackContext@Platform@@_N@Z @ 0x180130308 (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Common@Multitasking@Experienc.c)
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z@TaskViewSwitchItemCloseInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUISwitchItem@Common@Multitasking@234@@ZW4CallbackContext@Platform@@_N@Z @ 0x180130574 (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Common@Multitask_ea_180130574.c)
 *     ??$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXXZ@TaskViewBackgroundClickedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P85@E$AAAXXZW4CallbackContext@Platform@@_N@Z @ 0x1801306BC (--$-0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXXZ@TaskViewBackgroundClickedEventHandler@S.c)
 *     ??$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z@WindowActivatedEventHandler@Xaml@UI@Windows@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P84@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@23@@ZW4CallbackContext@6@_N@Z @ 0x180130924 (--$-0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivat.c)
 *     ??$?0VSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@P8012345@E$AAAXPE$AAUISwitchItemDataSource@12345@PE$AAUISwitchItemCollectionChangedEventArgs@12345@@Z@?$TypedEventHandler@PE$AAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@QE$AAA@PE$AAVSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@P8345678@E$AAAXPE$AAUISwitchItemDataSource@45678@PE$AAUISwitchItemCollectionChangedEventArgs@45678@@ZW4CallbackContext@Platform@@_N@Z @ 0x18013397C (--$-0VSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@P8.c)
 *     ??$?0VSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@P8012345@E$AAAXPE$AAUISwitchItem@12345@W4SwitchItemProperty@12345@@Z@?$TypedEventHandler@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@@Foundation@Windows@@QE$AAA@PE$AAVSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@P8345678@E$AAAXPE$AAUISwitchItem@45678@W4SwitchItemProperty@45678@@ZW4CallbackContext@Platform@@_N@Z @ 0x180134390 (--$-0VSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Window_ea_180134390.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Details::IWeakReferenceSource::GetWeakReference(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v5);
  if ( v1 < 0 )
    __abi_WinRTraiseException(v1);
  v2 = v5;
  v3 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v2 = v5;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v3;
}

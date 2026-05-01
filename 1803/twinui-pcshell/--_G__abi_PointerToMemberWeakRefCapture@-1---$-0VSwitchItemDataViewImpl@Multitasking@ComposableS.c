/*
 * XREFs of ??_G__abi_PointerToMemberWeakRefCapture@?1???$?0VSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@P801234@E$AAAXPE$AAUISwitchItem@1234@W4SwitchItemProperty@1234@@Z@?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@Windows@@QE$AAA@PE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@3@P845673@E$AAAXPE$AAUISwitchItem@5673@W4SwitchItemProperty@5673@@ZW4CallbackContext@Platform@@_N@Z@UEAAPEAXI@Z @ 0x180208B80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall `Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,enum Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty>::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,enum Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty>'::`2'::__abi_PointerToMemberWeakRefCapture::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __abi_winrt_ptr_dtor(a1[1]);
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}

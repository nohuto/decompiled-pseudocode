/*
 * XREFs of ??_G__abi_PointerToMemberWeakRefCapture@?1???$?0VSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@P801234@E$AAAXPE$AAUISwitchItem@1234@W4SwitchItemProperty@1234@@Z@?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@Windows@@QE$AAA@PE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@3@P845673@E$AAAXPE$AAUISwitchItem@5673@W4SwitchItemProperty@5673@@ZW4CallbackContext@Platform@@_N@Z@UEAAPEAXI@Z @ 0x180169820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall `Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,enum Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty>::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,enum Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty>'::`2'::__abi_PointerToMemberWeakRefCapture::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  v4 = Block[1];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *Block = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}

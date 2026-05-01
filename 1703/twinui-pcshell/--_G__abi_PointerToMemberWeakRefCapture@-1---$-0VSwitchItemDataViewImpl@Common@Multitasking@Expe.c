/*
 * XREFs of ??_G__abi_PointerToMemberWeakRefCapture@?1???$?0VSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@P8012345@E$AAAXPE$AAUISwitchItemDataSource@12345@PE$AAUISwitchItemCollectionChangedEventArgs@12345@@Z@?$TypedEventHandler@PE$AAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@QE$AAA@PE$AAVSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@P8456789@E$AAAXPE$AAUISwitchItemDataSource@56789@PE$AAUISwitchItemCollectionChangedEventArgs@56789@@ZW4CallbackContext@Platform@@_N@Z@UEAAPEAXI@Z @ 0x1801337E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall `Windows::Foundation::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource __gc *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs __gc *>::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource __gc *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs __gc *>'::`2'::__abi_PointerToMemberWeakRefCapture::`scalar deleting destructor'(
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

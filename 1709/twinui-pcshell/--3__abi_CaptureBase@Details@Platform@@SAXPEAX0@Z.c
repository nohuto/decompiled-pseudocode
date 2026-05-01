/*
 * XREFs of ??3__abi_CaptureBase@Details@Platform@@SAXPEAX0@Z @ 0x180149FF8
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::ButtonClickedEventHandler_Windows::UI::Core::DispatchedHandler_____ptr64__::_1_::dtor$2 @ 0x1801F0B76 (_WindowsInternal--ComposableShell--Desktop--ButtonClickedEventHandler--ButtonClicke_ea_1801F0B76.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::ViewLoadedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)___ptr64__::_1_::dtor$3 @ 0x1801F1988 (_WindowsInternal--ComposableShell--Experiences--Switcher--ViewLoadedEventHandler--V_ea_1801F1988.c)
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64__Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_void_(__cdecl_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64)___ptr64__::_1_::dtor$3 @ 0x1801F3544 (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multita_ea_1801F3544.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Platform::Details::__abi_CaptureBase::operator delete(
        void (__fastcall ***a1)(void *, _QWORD),
        void (__fastcall ***a2)(void *, _QWORD))
{
  (**a1)(a1, 0LL);
  if ( a1 != a2 )
    Platform::Details::Heap::Free(a1);
}

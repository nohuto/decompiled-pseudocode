/*
 * XREFs of ??3__abi_CaptureBase@Details@Platform@@SAXPEAX0@Z @ 0x18011FAC8
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::ButtonClickedEventHandler_Windows::UI::Core::DispatchedHandler_____ptr64__::_1_::dtor$2 @ 0x1801A09E3 (_WindowsInternal--ComposableShell--Desktop--ButtonClickedEventHandler--ButtonClicke_ea_1801A09E3.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewBackgroundClickedEventHandler::TaskViewBackgroundClickedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)___ptr64__::_1_::dtor$3 @ 0x1801A1339 (_WindowsInternal--ComposableShell--Experiences--Switcher--TaskViewBackgroundClicked_ea_1801A1339.c)
 *     _Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64_::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64__WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl_void_(__cdecl_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::_)(WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64)___ptr64__::_1_::dtor$3 @ 0x1801A167E (_Windows--Foundation--TypedEventHandler_WindowsInternal--ComposableShell--Experienc_ea_1801A167E.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Platform::Details::__abi_CaptureBase::operator delete(
        void (__fastcall ***a1)(void *, _QWORD),
        void (__fastcall ***a2)(void *, _QWORD))
{
  (**a1)(a1, 0LL);
  if ( a1 != a2 )
    Platform::Details::Heap::Free(a1);
}

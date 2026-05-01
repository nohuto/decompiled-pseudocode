/*
 * XREFs of ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x18016A4CC
 * Callers:
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::TaskViewContainerNavigationEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(unsigned_int)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18015E060 (_WindowsInternal--ComposableShell--Experiences--Switcher--TaskViewContainerNavigationEventHandle.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_IXamlMultitaskingViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18015E2D0 (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemInvokedEventHandler--ItemInvokedEv.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::ItemContextMenuRequestedHandler_IXamlMultitaskingViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18015E690 (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemContextMenuRequestedHandler--ItemC.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::ViewLoadedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18015EA60 (_WindowsInternal--ComposableShell--Experiences--Switcher--ViewLoadedEventHandler--ViewLoadedEven.c)
 *     _Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(Platform::Object_____ptr64_Windows::UI::Core::WindowActivatedEventArgs_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18015ECC0 (_Windows--UI--Xaml--WindowActivatedEventHandler--WindowActivatedEventHandler_IXamlSwitcherWindow.c)
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64__Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_void_(__cdecl_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x180169880 (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multitasking--ISwitc.c)
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty__Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_void_(__cdecl_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18016A540 (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multita_ea_18016A540.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Details::IWeakReference::Resolve(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, a2, &v6);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = v6;
  v4 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v3 = v6;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}

/*
 * XREFs of ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x18020EAF8
 * Callers:
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_IXamlMultitaskingViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18020CBB0 (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemInvokedEventHandler--_ea_18020CBB0.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::ItemContextMenuRequestedHandler_IXamlMultitaskingViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemContextMenuArgs_____ptr64_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18020CCE0 (_WindowsInternal--ComposableShell--Experiences--Switcher--ItemContextMenuRequestedH_ea_18020CCE0.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::TaskViewContainerNavigationEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(unsigned_int)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18020CE20 (_WindowsInternal--ComposableShell--Experiences--Switcher--TaskViewContainerNavigati_ea_18020CE20.c)
 *     _Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(Platform::Object_____ptr64_Windows::UI::Core::WindowActivatedEventArgs_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18020CF50 (_Windows--UI--Xaml--WindowActivatedEventHandler--WindowActivatedEventHandler_IXamlS_ea_18020CF50.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::ViewLoadedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18020D090 (_WindowsInternal--ComposableShell--Experiences--Switcher--ViewLoadedEventHandler--V_ea_18020D090.c)
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty__Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_void_(__cdecl_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18020D1B0 (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multita_ea_18020D1B0.c)
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64__Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_void_(__cdecl_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18020D2F0 (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multita_ea_18020D2F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Details::IWeakReference::Resolve(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, a2, &v5);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = __abi_winrt_ptr_ctor(v5);
  __abi_winrt_ptr_dtor(v5);
  return v3;
}

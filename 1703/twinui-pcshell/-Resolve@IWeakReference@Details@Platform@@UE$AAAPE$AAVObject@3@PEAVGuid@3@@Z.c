/*
 * XREFs of ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x18013416C
 * Callers:
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewSwitchItemInvokedEventHandler::TaskViewSwitchItemInvokedEventHandler_IXamlMultitaskingViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x180130450 (_WindowsInternal--ComposableShell--Experiences--Switcher--TaskViewSwitchItemInvokedEventHandler-.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewBackgroundClickedEventHandler::TaskViewBackgroundClickedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x180130810 (_WindowsInternal--ComposableShell--Experiences--Switcher--TaskViewBackgroundClickedEventHandler-.c)
 *     _Windows::UI::Xaml::WindowActivatedEventHandler::WindowActivatedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(Platform::Object_____ptr64_Windows::UI::Core::WindowActivatedEventArgs_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x180130A70 (_Windows--UI--Xaml--WindowActivatedEventHandler--WindowActivatedEventHandler_IXamlSwitcherWindow.c)
 *     _Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64_::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64__WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl_void_(__cdecl_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::_)(WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x180133840 (_Windows--Foundation--TypedEventHandler_WindowsInternal--ComposableShell--Experiences--Multitask.c)
 *     _Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty_::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty__WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl_void_(__cdecl_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::_)(WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x1801341E0 (_Windows--Foundation--TypedEventHandler_WindowsInternal--ComposableShell--Experienc_ea_1801341E0.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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

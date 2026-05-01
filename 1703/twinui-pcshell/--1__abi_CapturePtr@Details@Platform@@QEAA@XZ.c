/*
 * XREFs of ??1__abi_CapturePtr@Details@Platform@@QEAA@XZ @ 0x180120218
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_59c80d91275ef09dee0ea9ccd3ec1c84____::_1_::dtor$2 @ 0x18019FB51 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExpl_ea_18019FB51.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_6c284911f69a96f51fa6281be71911ea____::_1_::dtor$2 @ 0x18019FBA3 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExpl_ea_18019FBA3.c)
 *     _Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_48eef4ac22d2d23d7627f0d26dc0219c____::_1_::dtor$1 @ 0x1801A047F (_Windows--UI--Xaml--ApplicationInitializationCallback--ApplicationInitializationCal_ea_1801A047F.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00____::_1_::dtor$2 @ 0x1801A0987 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ec2760f202b80fe0ec_ea_1801A0987.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e____::_1_::dtor$2 @ 0x1801A09B3 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ddc57e29664aa3d202_ea_1801A09B3.c)
 *     _WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::ButtonClickedEventHandler_Windows::UI::Core::DispatchedHandler_____ptr64__::_1_::dtor$1 @ 0x1801A09D3 (_WindowsInternal--ComposableShell--Desktop--ButtonClickedEventHandler--ButtonClicke_ea_1801A09D3.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729ce____::_1_::dtor$2 @ 0x1801A0B44 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_c684876424e85aad1b_ea_1801A0B44.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewBackgroundClickedEventHandler::TaskViewBackgroundClickedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)___ptr64__::_1_::dtor$1 @ 0x1801A1329 (_WindowsInternal--ComposableShell--Experiences--Switcher--TaskViewBackgroundClicked_ea_1801A1329.c)
 *     _Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs_____ptr64___lambda_79cd3f6b551d9350708e82439cb1951b____::_1_::dtor$2 @ 0x1801A1480 (_Windows--Foundation--TypedEventHandler_WindowsInternal--ComposableShell--Experienc_ea_1801A1480.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_76029d42bc563a507ed8db80c5c655bc____::_1_::dtor$2 @ 0x1801A14AC (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_76029d42bc563a507e_ea_1801A14AC.c)
 *     _Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64_::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64__WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl_void_(__cdecl_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::_)(WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64)___ptr64__::_1_::dtor$1 @ 0x1801A166E (_Windows--Foundation--TypedEventHandler_WindowsInternal--ComposableShell--Experienc_ea_1801A166E.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Platform::Details::__abi_CapturePtr::~__abi_CapturePtr(Platform::Details::__abi_CapturePtr *this)
{
  Platform::Details::__abi_CapturePtr *v1; // rdi

  v1 = (Platform::Details::__abi_CapturePtr *)*((_QWORD *)this + 32);
  (**(void (__fastcall ***)(void *, _QWORD))v1)(v1, 0LL);
  if ( v1 != this )
    Platform::Details::Heap::Free(v1);
}

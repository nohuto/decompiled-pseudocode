/*
 * XREFs of ??1__abi_CapturePtr@Details@Platform@@QEAA@XZ @ 0x18014A758
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_59c80d91275ef09dee0ea9ccd3ec1c84____::_1_::dtor$2 @ 0x1801EFCB3 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExpl_ea_1801EFCB3.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_6c284911f69a96f51fa6281be71911ea____::_1_::dtor$2 @ 0x1801EFCDF (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExpl_ea_1801EFCDF.c)
 *     _Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_48eef4ac22d2d23d7627f0d26dc0219c____::_1_::dtor$1 @ 0x1801F0613 (_Windows--UI--Xaml--ApplicationInitializationCallback--ApplicationInitializationCal_ea_1801F0613.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00____::_1_::dtor$2 @ 0x1801F0B1A (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ec2760f202b80fe0ec_ea_1801F0B1A.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e____::_1_::dtor$2 @ 0x1801F0B46 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ddc57e29664aa3d202_ea_1801F0B46.c)
 *     _WindowsInternal::ComposableShell::Desktop::ButtonClickedEventHandler::ButtonClickedEventHandler_Windows::UI::Core::DispatchedHandler_____ptr64__::_1_::dtor$1 @ 0x1801F0B66 (_WindowsInternal--ComposableShell--Desktop--ButtonClickedEventHandler--ButtonClicke_ea_1801F0B66.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729ce____::_1_::dtor$2 @ 0x1801F0CD7 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_c684876424e85aad1b_ea_1801F0CD7.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf2a5585384fc29dd92791fa2021d13d____::_1_::dtor$2 @ 0x1801F1958 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bf2a5585384fc29dd9_ea_1801F1958.c)
 *     _WindowsInternal::ComposableShell::Experiences::Switcher::ViewLoadedEventHandler::ViewLoadedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)___ptr64__::_1_::dtor$1 @ 0x1801F1978 (_WindowsInternal--ComposableShell--Experiences--Switcher--ViewLoadedEventHandler--V_ea_1801F1978.c)
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_09ef7075ad8fc93381d4536ce998b341____::_1_::dtor$2 @ 0x1801F1ACF (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multita_ea_1801F1ACF.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_a82905e17e8ce16c5170ad40f44874ec____::_1_::dtor$2 @ 0x1801F1AFB (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_a82905e17e8ce16c51_ea_1801F1AFB.c)
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64__Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_void_(__cdecl_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64)___ptr64__::_1_::dtor$1 @ 0x1801F3534 (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multita_ea_1801F3534.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Platform::Details::__abi_CapturePtr::~__abi_CapturePtr(Platform::Details::__abi_CapturePtr *this)
{
  Platform::Details::__abi_CapturePtr *v1; // rdi

  v1 = (Platform::Details::__abi_CapturePtr *)*((_QWORD *)this + 32);
  (**(void (__fastcall ***)(void *, _QWORD))v1)(v1, 0LL);
  if ( v1 != this )
    Platform::Details::Heap::Free(v1);
}

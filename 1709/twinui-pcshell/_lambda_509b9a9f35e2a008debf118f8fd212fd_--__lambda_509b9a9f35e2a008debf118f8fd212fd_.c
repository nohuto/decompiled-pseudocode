/*
 * XREFs of _lambda_509b9a9f35e2a008debf118f8fd212fd_::__lambda_509b9a9f35e2a008debf118f8fd212fd_ @ 0x180165980
 * Callers:
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64___lambda_3b34480ad7d2973204f2b7367543a8f5____::_1_::dtor$0 @ 0x1801F2BFA (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChangedEventHandler.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_d66e6f301efedd367be46813d365bb79____::_1_::dtor$0 @ 0x1801F2CB4 (_Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChangedEventHandl.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_1b5508b209f22f7e86a2f99e7c3de27f____::_1_::dtor$0 @ 0x1801F36EC (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows--Internal--C.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64___lambda_bd641f78481868be629ded61accc2e50____::_1_::dtor$0 @ 0x1801F38A1 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows_ea_1801F38A1.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::OnContainerNavigate_::_1_::dtor$3 @ 0x1801F42A9 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--OnContainerNaviga_ea_1801F42A9.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa____::_1_::dtor$0 @ 0x1801F4EFB (_CreationThreadDispatcher--RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa____--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa____::_1_::dtor$0 @ 0x1801F503F (_CreationThreadDispatcher--RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa____--_1_--dtor$0.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64___lambda_691217d92eb9936284588ea727e6ccf8____::_1_::dtor$0 @ 0x1801F5087 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChange_ea_1801F5087.c)
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$2 @ 0x1801F5420 (_XamlBaseViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$2.c)
 *     _XamlBaseViewController::DismissView_::_1_::dtor$1 @ 0x1801F5453 (_XamlBaseViewController--DismissView_--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd____::_1_::dtor$0 @ 0x1801F545F (_CreationThreadDispatcher--RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd____--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunSync__lambda_509b9a9f35e2a008debf118f8fd212fd____::_1_::dtor$0 @ 0x1801F548F (_CreationThreadDispatcher--RunSync__lambda_509b9a9f35e2a008debf118f8fd212fd____--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_509b9a9f35e2a008debf118f8fd212fd_::__lambda_509b9a9f35e2a008debf118f8fd212fd_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}

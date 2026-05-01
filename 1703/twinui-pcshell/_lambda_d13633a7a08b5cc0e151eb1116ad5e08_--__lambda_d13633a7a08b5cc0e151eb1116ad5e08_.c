/*
 * XREFs of _lambda_d13633a7a08b5cc0e151eb1116ad5e08_::__lambda_d13633a7a08b5cc0e151eb1116ad5e08_ @ 0x180135E6C
 * Callers:
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs_____ptr64___lambda_7a0b87a188e4e8316e3fbac9b291e873____::_1_::dtor$0 @ 0x1801A1A82 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_WindowsInternal--Com.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs_____ptr64___lambda_7f10f092c6e62c2be23d008bd0624c31____::_1_::dtor$0 @ 0x1801A1BE5 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows_ea_1801A1BE5.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64___lambda_aac285627d5f5ffd6f848b2d658376cd____::_1_::dtor$0 @ 0x1801A2BC5 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChangedEventHandler.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_d66e6f301efedd367be46813d365bb79____::_1_::dtor$0 @ 0x1801A2C80 (_Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChangedEventHandl.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::ActivationChanged_::_1_::dtor$1 @ 0x1801A3860 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--ActivationChanged_ea_1801A3860.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79____::_1_::dtor$0 @ 0x1801A386C (_CreationThreadDispatcher--RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79____--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunSync__lambda_d13633a7a08b5cc0e151eb1116ad5e08____::_1_::dtor$0 @ 0x1801A389C (_CreationThreadDispatcher--RunSync__lambda_d13633a7a08b5cc0e151eb1116ad5e08____--_1_--dtor$0.c)
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$2 @ 0x1801A3AE1 (_XamlBaseViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$2.c)
 *     _XamlBaseViewController::DismissView_::_1_::dtor$1 @ 0x1801A3B14 (_XamlBaseViewController--DismissView_--_1_--dtor$1.c)
 *     _XamlBaseViewController::DismissView_::_1_::dtor$5 @ 0x1801A3B20 (_XamlBaseViewController--DismissView_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_d13633a7a08b5cc0e151eb1116ad5e08_::__lambda_d13633a7a08b5cc0e151eb1116ad5e08_(_QWORD *a1)
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

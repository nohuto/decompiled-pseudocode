/*
 * XREFs of ??1?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x18001641C
 * Callers:
 *     _CApplicationManager::_HandleViewCreation_EnsureApplicationView_::_1_::dtor$2 @ 0x1801985F5 (_CApplicationManager--_HandleViewCreation_EnsureApplicationView_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$1 @ 0x180198619 (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$1.c)
 *     _NotificationDispatcher::WndProc_::_1_::dtor$0 @ 0x18019B158 (_NotificationDispatcher--WndProc_--_1_--dtor$0.c)
 *     _wistd::_Func_impl_wistd::_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call_::_1_::dtor$0 @ 0x18019D946 (_wistd--_Func_impl_wistd--_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd--deta.c)
 *     _XamlTaskbarManager::_scalar_deleting_destructor__::_1_::dtor$5 @ 0x1801A00F4 (_XamlTaskbarManager--_scalar_deleting_destructor__--_1_--dtor$5.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188____::_1_::dtor$1 @ 0x1801A0A1B (_CreationThreadDispatcher--RunAsync__lambda_e5d643bc643c8a09454132ff8d011188____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79____::_1_::dtor$1 @ 0x1801A3878 (_CreationThreadDispatcher--RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79____--_1_--dtor$1.c)
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::CloseSwitchItem_::_1_::dtor$8 @ 0x1801A39EF (_XamlBaseViewController--[IXamlMultitaskingViewController]--CloseSwitchItem_--_1_--dtor$8.c)
 *     _XamlBaseViewController::DismissView_::_1_::dtor$6 @ 0x1801A3B2C (_XamlBaseViewController--DismissView_--_1_--dtor$6.c)
 *     _wil::MakeAndInitializeOrThrow_CreationThreadDispatcher__::_1_::dtor$0 @ 0x1801A3B74 (_wil--MakeAndInitializeOrThrow_CreationThreadDispatcher__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<NotificationDispatcher>::~ComPtr<NotificationDispatcher>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}

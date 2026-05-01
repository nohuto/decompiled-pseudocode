/*
 * XREFs of _lambda_c401736c1c7abf5bd14884b3d5be4201_::__lambda_c401736c1c7abf5bd14884b3d5be4201_ @ 0x1800DF610
 * Callers:
 *     _wistd::_Func_impl_wistd::_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call_::_1_::dtor$1 @ 0x18019D952 (_wistd--_Func_impl_wistd--_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0_ea_18019D952.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 */

volatile signed __int32 *__fastcall lambda_c401736c1c7abf5bd14884b3d5be4201_::__lambda_c401736c1c7abf5bd14884b3d5be4201_(
        __int64 a1)
{
  volatile signed __int32 *result; // rax

  result = *(volatile signed __int32 **)(a1 + 16);
  if ( result )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}

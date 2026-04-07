/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180069418
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x18003F038 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     _lambda_acfb370dec9f0af1ea203035a4ccbb17_::_lambda_invoker_cdecl_ @ 0x180068CD0 (_lambda_acfb370dec9f0af1ea203035a4ccbb17_--_lambda_invoker_cdecl_.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_890942bf62097d6c778291458fa4014d__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180069590 (wistd--_Func_impl_wistd--_Callable_obj__lambda_890942bf62097d6c778291458fa4014d__0__ea_180069590.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180067A60 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x86E, v2, v3);
    __debugbreak();
  }
}

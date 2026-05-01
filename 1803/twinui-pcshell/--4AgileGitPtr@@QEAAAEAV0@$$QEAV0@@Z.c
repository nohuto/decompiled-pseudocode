/*
 * XREFs of ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x180180A54
 * Callers:
 *     ?OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180052E80 (-OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledR.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9c9b74f73242e90608ebee76b1464adb___ @ 0x1801801E0 (Windows--Internal--ComTaskPool--QueueTask__lambda_9c9b74f73242e90608ebee76b1464adb___.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180182598 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_0f11cce5f101e8d9725eaa1c21987942__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x180183A60 (wistd--_Func_impl_wistd--_Callable_obj__lambda_0f11cce5f101e8d9725eaa1c21987942__0__ea_180183A60.c)
 *     ?TryBack@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@@Z @ 0x1801E7150 (-TryBack@ViewWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     _lambda_d69c6045195ff860b1c2e6c344d418ce_::operator() @ 0x1801F1304 (_lambda_d69c6045195ff860b1c2e6c344d418ce_--operator().c)
 *     ?OnBackComplete@WindowWrapperBase@@AEAAX_N@Z @ 0x1801F2AB0 (-OnBackComplete@WindowWrapperBase@@AEAAX_N@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb8a2f055e3fa5ba92d678fcbbac9abd_____lambda_bb8a2f055e3fa5ba92d678fcbbac9abd___ @ 0x180257288 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bb8a2f055e3fa.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1802596A0 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_65b564066afd375445a72f511c4d5f73__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x18025A870 (wistd--_Func_impl_wistd--_Callable_obj__lambda_65b564066afd375445a72f511c4d5f73__0__ea_18025A870.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall AgileGitPtr::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 *result; // rax

  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1);
  v4 = *a2;
  *a2 = 0LL;
  if ( *a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
  result = a1;
  *a1 = v4;
  return result;
}

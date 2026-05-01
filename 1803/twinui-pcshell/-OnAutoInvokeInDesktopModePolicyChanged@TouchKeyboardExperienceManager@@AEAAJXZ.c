/*
 * XREFs of ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18023F2E8
 * Callers:
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802425D0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_a5972c8af990ecc388564974a60d4c68__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180245060 (wistd--_Func_impl_wistd--_Callable_obj__lambda_a5972c8af990ecc388564974a60d4c68__0__wistd--detai.c)
 * Callees:
 *     wil::details::ScopeExitFn__lambda_ae4af8e665eef50535d8ba0da3b3543f___::_ScopeExitFn__lambda_ae4af8e665eef50535d8ba0da3b3543f___ @ 0x1800A1228 (wil--details--ScopeExitFn__lambda_ae4af8e665eef50535d8ba0da3b3543f___--_ScopeExitFn__lambda_ae4a.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnAutoInvokeInDesktopModePolicyChanged(
        TouchKeyboardExperienceManager *this)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v4; // [rsp+30h] [rbp-18h] BYREF
  char v5; // [rsp+38h] [rbp-10h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 83) )
  {
    v6 = 0LL;
    v4 = &v6;
    v5 = 1;
    v3[0] = 1;
    v3[1] = 2;
    if ( (int)PolicyManager_GetPolicy(L"TextInput", L"EnableTouchKeyboardAutoInvokeInDesktopMode", v3, &v6) >= 0 )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 83) + 96LL) + 510LL) = *(_DWORD *)(v6 + 16) != 0;
    wil::details::ScopeExitFn__lambda_ae4af8e665eef50535d8ba0da3b3543f___::_ScopeExitFn__lambda_ae4af8e665eef50535d8ba0da3b3543f___((__int64)&v4);
  }
  return 0LL;
}

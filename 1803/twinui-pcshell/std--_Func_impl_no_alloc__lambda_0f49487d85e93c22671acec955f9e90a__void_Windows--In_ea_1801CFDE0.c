/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0f49487d85e93c22671acec955f9e90a__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&___ptr64_::_Do_call @ 0x1801CFDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_c3441874af9188b8377da12ab0198c01_::operator() @ 0x1801C9698 (_lambda_c3441874af9188b8377da12ab0198c01_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_0f49487d85e93c22671acec955f9e90a__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_____ptr64_::_Do_call(
        __int64 a1,
        _DWORD *a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IViewWrapperInternal *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7);
      if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(*(ViewEventDispatcher **)(a1 + 8), a2[1], &v7) >= 0 )
      {
        v4 = lambda_c3441874af9188b8377da12ab0198c01_::operator()(*(unsigned int ***)(a1 + 16), &v7);
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1213LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v4);
      }
    }
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7);
}

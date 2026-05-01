/*
 * XREFs of _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus______ptr64__::_2_::CompletionDelegate::Invoke @ 0x1800DD6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus______ptr64__::_2_::CompletionDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 56) = a3;
  if ( !SetEvent(*(HANDLE *)(a1 + 64)) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v3);
    __debugbreak();
  }
  return 0LL;
}

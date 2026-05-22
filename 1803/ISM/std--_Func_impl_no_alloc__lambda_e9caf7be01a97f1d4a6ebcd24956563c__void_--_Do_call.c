/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e9caf7be01a97f1d4a6ebcd24956563c__void_::_Do_call @ 0x1800CE0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

BOOL __fastcall std::_Func_impl_no_alloc__lambda_e9caf7be01a97f1d4a6ebcd24956563c__void_::_Do_call(__int64 a1)
{
  BOOL result; // eax
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  **(_BYTE **)(a1 + 8) = 1;
  **(_BYTE **)(a1 + 16) = 0;
  result = SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 24) + 128LL));
  if ( !result )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86F,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v2);
    JUMPOUT(0x1800CE137LL);
  }
  return result;
}

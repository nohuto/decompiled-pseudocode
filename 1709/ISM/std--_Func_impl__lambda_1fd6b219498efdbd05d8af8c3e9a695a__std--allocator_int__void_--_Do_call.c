/*
 * XREFs of std::_Func_impl__lambda_1fd6b219498efdbd05d8af8c3e9a695a__std::allocator_int__void_::_Do_call @ 0x1800BE1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18007809C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

_QWORD *__fastcall std::_Func_impl__lambda_1fd6b219498efdbd05d8af8c3e9a695a__std::allocator_int__void_::_Do_call(
        __int64 a1)
{
  _QWORD *result; // rax
  _DWORD *v2; // rcx
  _DWORD *v3; // rdx
  const char *v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = *(_QWORD **)(a1 + 8);
  v2 = *(_DWORD **)(a1 + 16);
  v3 = (_DWORD *)(*result + 44LL);
  if ( *v2 != 1 )
  {
    if ( *v2 != 2 )
    {
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x45,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
        "Invalid state passed to GetCountForState",
        v4);
      JUMPOUT(0x1800BE20ALL);
    }
    v3 = (_DWORD *)(*result + 48LL);
  }
  --*v3;
  return result;
}

/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_57257aeee450f0978795f5842b778a08__0__wistd::details::function_allocator_wistd::_Func_class_long_wchar_t_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_wchar_t_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800912C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_57257aeee450f0978795f5842b778a08__0__wistd::details::function_allocator_wistd::_Func_class_long_wchar_t_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_wchar_t_____ptr64_unsigned___int64_unsigned___int64_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        __int64 *a2,
        unsigned int *a3,
        _QWORD **a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  __int64 v7; // r8
  signed int LastError; // eax
  __int64 result; // rax
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a3;
  v5 = 0;
  v6 = *a4;
  v7 = *a2;
  v10 = v4;
  if ( !(unsigned int)GetStateFolder(**(_QWORD **)(a1 + 8), **(unsigned int **)(a1 + 16), v7, &v10) )
  {
    LastError = GetLastError();
    if ( LastError != 122 )
    {
      v5 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v5 = LastError;
    }
  }
  result = v5;
  *v6 = v10;
  return result;
}
